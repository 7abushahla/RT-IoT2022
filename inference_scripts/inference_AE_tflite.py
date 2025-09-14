# %%
import os
import time
import numpy as np
import pandas as pd
import tflite_runtime.interpreter as tflite
import gc

from sklearn.preprocessing import StandardScaler, OneHotEncoder, LabelEncoder
from sklearn.compose import ColumnTransformer
from sklearn.pipeline import Pipeline
from sklearn.metrics import f1_score, precision_score, recall_score

# %%
# ---------------------------
# 1. Load the Exported Test Set
# ---------------------------

# Set the path to the exported test set CSV
TEST_CSV = './exported_test_set.csv'

if not os.path.exists(TEST_CSV):
    raise FileNotFoundError(f"Test set CSV not found at {TEST_CSV}")

# Load the test set from CSV
X_test_export = pd.read_csv(TEST_CSV)

# Assume the target column is named "target"
Y_test = X_test_export["target"].values
X_test = X_test_export.drop(columns=["target"])

print(f"Test set loaded from {TEST_CSV}")
print(f"X_test shape: {X_test.shape}")

# %%
# ---------------------------
# 2. Define the Preprocessor
# ---------------------------
# Identify columns (you must know these from training)
numerical_cols = X_test.select_dtypes(include=["int64", "float64", "float32"]).columns.tolist()
categorical_cols = ["proto", "service"]

# Create new transformers
numerical_transformer = Pipeline(steps=[
    ('scaler', StandardScaler())
])
categorical_transformer = Pipeline(steps=[
    ('onehot', OneHotEncoder(handle_unknown='ignore'))
])

# Combine transformers
preprocessor = ColumnTransformer(
    transformers=[
        ('num', numerical_transformer, numerical_cols),
        ('cat', categorical_transformer, categorical_cols)
    ]
)

# Fit on test set (or a subset) and transform test data
X_test_transformed = preprocessor.fit_transform(X_test)
print(f"X_test_transformed shape: {X_test_transformed.shape}")

# %%
# ---------------------------
# 2. Load TFLite Float32 Model and Prepare for Inference
# ---------------------------
tflite_model_path = "./tflite_models/best_AE_model.tflite"  # update this path as needed
if not os.path.exists(tflite_model_path):
    raise FileNotFoundError(f"TFLite model not found at {tflite_model_path}")

interpreter = tflite.Interpreter(model_path=tflite_model_path)
interpreter.allocate_tensors()

# Get input and output details
input_details = interpreter.get_input_details()
output_details = interpreter.get_output_details()

# Display Input Details
print("Input Details with Quantization Parameters:")
for input_detail in input_details:
    print(f"  Name: {input_detail['name']}")
    print(f"  Shape: {input_detail['shape']}")
    print(f"  Data Type: {input_detail['dtype']}")
    print(f"  Quantization Parameters: {input_detail['quantization']}")
    print(f"  Quantization Scale: {input_detail['quantization_parameters']['scales']}")
    print(f"  Quantization Zero Points: {input_detail['quantization_parameters']['zero_points']}\n")

# Display Output Details
print("\nOutput Details with Quantization Parameters:")
for idx, output_detail in enumerate(output_details):
    print(f"Output {idx}:")
    print(f"  Name: {output_detail['name']}")
    print(f"  Shape: {output_detail['shape']}")
    print(f"  Data Type: {output_detail['dtype']}")
    print(f"  Quantization Parameters: {output_detail['quantization']}")
    print(f"  Quantization Scale: {output_detail['quantization_parameters']['scales']}")
    print(f"  Quantization Zero Points: {output_detail['quantization_parameters']['zero_points']}\n")


# %%
# ---------------------------
# 3. Single Sample Inference and Metrics (Float32)
# ---------------------------
X_test_processed = X_test_transformed.astype(np.float32)

# Choose a sample index (modify as needed)
sample_index = 10  # for example, first sample
sample = X_test_processed[sample_index:sample_index+1]

# Run single inference
interpreter.set_tensor(input_details[0]['index'], sample)
interpreter.invoke()

classification_index = 0
print("Using output index 0 for classification predictions.")

# Get the classification output using the chosen index
output_data = interpreter.get_tensor(output_details[classification_index]['index'])
# Use argmax to select the predicted class (assuming output shape is [1, num_classes])
predicted_label = np.argmax(output_data, axis=1)
true_label = Y_test[sample_index]

print("\n--- Single Sample Inference (Float32) ---")
print(f"Sample index: {sample_index}")
print(f"True label: {true_label}")
print(f"Predicted label: {predicted_label[0]}")

# For a single sample, accuracy is 1 if the prediction matches, else 0.
single_accuracy = 1 if predicted_label[0] == true_label else 0
print(f"Accuracy (single sample): {single_accuracy}")

# Compute additional metrics for the single sample (will be 0 or 1)
y_true_single = np.array([true_label])
y_pred_single = np.array([predicted_label[0]])

from sklearn.metrics import f1_score, precision_score, recall_score
f1 = f1_score(y_true_single, y_pred_single, average='macro')
precision = precision_score(y_true_single, y_pred_single, average='macro', zero_division=0)
recall = recall_score(y_true_single, y_pred_single, average='macro', zero_division=0)

print(f"F1 Score (single sample): {f1:.4f}")
print(f"Precision (single sample): {precision:.4f}")
print(f"Recall (single sample): {recall:.4f}")


# %%
# ---------------------------
# 4. Benchmark Inference Time and Compute FPS (Float32)
# ---------------------------
n_runs = 10000
inference_times = []

for i in range(n_runs):
    start_time = time.perf_counter()
    interpreter.set_tensor(input_details[0]['index'], sample)
    interpreter.invoke()
    end_time = time.perf_counter()
    
    elapsed_ms = (end_time - start_time) * 1000  # convert to milliseconds
    inference_times.append(elapsed_ms)
    
    if (i + 1) % 100 == 0:
        print(f"Run {i+1}: {elapsed_ms:.4f} ms")

mean_time = np.mean(inference_times)
std_time = np.std(inference_times)
fps_values = 1000.0 / np.array(inference_times)
mean_fps = np.mean(fps_values)
std_fps = np.std(fps_values)

print(f"\nAverage inference time over {n_runs} runs: {mean_time:.4f} ms (std: {std_time:.4f} ms)")
print(f"Average FPS over {n_runs} runs: {mean_fps:.4f} FPS (std: {std_fps:.4f} FPS)")

gc.collect()

# %%




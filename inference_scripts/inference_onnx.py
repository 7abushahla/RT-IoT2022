# %%
import os
import time
import numpy as np
import pandas as pd
import onnxruntime as rt
import gc

from sklearn.preprocessing import StandardScaler, OneHotEncoder, LabelEncoder
from sklearn.compose import ColumnTransformer
from sklearn.pipeline import Pipeline
from sklearn.metrics import f1_score, precision_score, recall_score

# %%
# !pip install onnxruntime

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
# 3. Load ONNX Model and Inference 
# ---------------------------
# Path to the saved ONNX model
# onnx_model_path = "./onnx_models/best_svm_rbf_only_model_100.onnx"
# onnx_model_path = "./onnx_models/best_rf_model_100.onnx"
onnx_model_path = "./onnx_models/best_lgb_model_100.onnx"
# onnx_model_path = "./onnx_models/best_xgb_model_100.onnx"
if not os.path.exists(onnx_model_path):
    raise FileNotFoundError(f"ONNX model not found at {onnx_model_path}")

# Create an ONNX Runtime inference session
session = rt.InferenceSession(onnx_model_path, providers=["CPUExecutionProvider"])
input_name = session.get_inputs()[0].name
print("ONNX model loaded successfully.")
print("ONNX model input name:", input_name)
print("Expected input shape:", session.get_inputs()[0].shape)

# Ensure the test set is in float32 (if not already)
X_test_processed = X_test_transformed.astype(np.float32)

# Choose a sample index (modify as needed)
sample_index = 5  # for example, first sample
sample = X_test_processed[sample_index:sample_index+1]


# %%
# ---------------------------
# 5. Single Sample Inference and Metrics
# ---------------------------

# Choose a sample index (modify as needed)
sample_index = 5  # for example, first sample

onnx_outputs = session.run(None, {input_name: sample})
# Assume the first output is the predicted label and the second (if exists) is the probabilities.
predicted_label = onnx_outputs[0]
predicted_probs = onnx_outputs[1] if len(onnx_outputs) > 1 else None

# Print inference results for the sample
true_label = Y_test[sample_index]
print("\n--- Single Sample Inference ---")
print(f"Sample index: {sample_index}")
print(f"True label: {true_label}")
print(f"Predicted label: {predicted_label[0]}")
if predicted_probs is not None:
    print("Predicted probabilities:", predicted_probs[0])

# For a single sample, accuracy is 1 if prediction matches, else 0.
single_accuracy = 1 if predicted_label[0] == true_label else 0
print(f"Accuracy (single sample): {single_accuracy}")

# Compute additional metrics for the single sample (will be 0 or 1)
y_true_single = np.array([true_label])
y_pred_single = np.array([predicted_label[0]])

f1 = f1_score(y_true_single, y_pred_single, average='macro')
precision = precision_score(y_true_single, y_pred_single, average='macro', zero_division=0)
recall = recall_score(y_true_single, y_pred_single, average='macro', zero_division=0)

print(f"F1 Score (single sample): {f1:.4f}")
print(f"Precision (single sample): {precision:.4f}")
print(f"Recall (single sample): {recall:.4f}")

# ---------------------------
# Clean Up
# ---------------------------
gc.collect()

# %%
# ---------------------------
# 4. Benchmark Inference Time
# ---------------------------
n_runs = 10000
inference_times = []

for i in range(n_runs):
    start_time = time.perf_counter()
    _ = session.run(None, {input_name: sample})
    end_time = time.perf_counter()
    
    # Convert elapsed time from seconds to milliseconds
    elapsed_ms = (end_time - start_time) * 1000
    inference_times.append(elapsed_ms)
    
    # Print every 100 runs
    if (i + 1) % 100 == 0:
        print(f"Run {i+1}: {elapsed_ms:.4f} ms")

# Compute mean and standard deviation of inference times (in ms)
mean_time = np.mean(inference_times)
std_time = np.std(inference_times)
print(f"\nAverage inference time over {n_runs} runs: {mean_time:.4f} ms (std: {std_time:.4f} ms)")

# Compute FPS for each run (FPS = 1 / time in seconds, or 1000 / time in ms)
fps_values = 1000.0 / np.array(inference_times)
mean_fps = np.mean(fps_values)
std_fps = np.std(fps_values)
print(f"Average FPS over {n_runs} runs: {mean_fps:.4f} FPS (std: {std_fps:.4f} FPS)")


# %%




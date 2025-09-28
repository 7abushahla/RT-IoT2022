#!/usr/bin/env python
# coding: utf-8

import os
import time
import numpy as np
import pandas as pd
import tensorrt as trt
import pycuda.driver as cuda
import pycuda.autoinit
import gc
import csv
import threading
import subprocess
import argparse

from sklearn.preprocessing import StandardScaler, OneHotEncoder, LabelEncoder
from sklearn.compose import ColumnTransformer
from sklearn.pipeline import Pipeline
from sklearn.metrics import f1_score, precision_score, recall_score

# ------------------------------------------------------------- #
# ------------------------- PARAMETERS ------------------------ #
# ------------------------------------------------------------- #

num_inferences = 10000
time_csv_file = "tensorrt_AE_inference_times.csv"
power_csv_file = "tensorrt_AE_power_monitoring.csv"

# ------------------------------------------------------------- #
# --------------------------- GLOBALS ------------------------- #
# ------------------------------------------------------------- #

time_start_preprocess = 0
time_start_inference = 0
time_end_inference = 0
inference_fnames = ['#', 'start_preprocess', 'start_inference', 'end_inference']

# ------------------------------------------------------------- #
# ----------------------- ARGUMENT PARSING -------------------- #
# ------------------------------------------------------------- #

ap = argparse.ArgumentParser()
ap.add_argument("--model", type=str, default="best_AE_model.trt", help="Name of the TensorRT model (with .trt extension)")
ap.add_argument("--test_csv", type=str, default="./exported_test_set.csv", help="Path to test CSV file")
ap.add_argument("--runs", type=int, default=10000, help="Number of inference runs for benchmarking")
ap.add_argument("--sample_idx", type=int, default=10, help="Sample index to use for inference")
ap.add_argument("--output_idx", type=int, default=0, help="Output index to use for classification")
args = vars(ap.parse_args())

model_name = args["model"]
test_csv_path = args["test_csv"]
n_runs = args["runs"]
sample_index = args["sample_idx"]
classification_index = args["output_idx"]

# ------------------------------------------------------------- #
# --------------------- CSV WRITING UTILS --------------------- #
# ------------------------------------------------------------- #

def write_inference_timestamp(i):
    global time_start_preprocess, time_start_inference, time_end_inference

    inference_writer.writerow({
        inference_fnames[0]: i,
        inference_fnames[1]: time_start_preprocess,
        inference_fnames[2]: time_start_inference,
        inference_fnames[3]: time_end_inference
    })

    if (i + 1) % 100 == 0:
        print(f'Inference {i+1} timestamps saved to CSV: Preprocess={time_start_preprocess:.2f}, Inference Start={time_start_inference:.2f}, Inference End={time_end_inference:.2f}')

# ------------------------------------------------------------- #
# -------------------- POWER MONITORING ----------------------- #
# ------------------------------------------------------------- #

def monitor_power():
    """Monitor power consumption using tegrastats (for Jetson devices)"""
    try:
        with open(power_csv_file, 'w') as power_file:
            with subprocess.Popen(['tegrastats'], stdout=power_file, text=True) as proc:
                try:
                    proc.wait()
                except KeyboardInterrupt:
                    proc.terminate()
    except FileNotFoundError:
        print("tegrastats not found - power monitoring disabled")

# ------------------------------------------------------------- #
# ------------------------ MODEL LOADING ---------------------- #
# ------------------------------------------------------------- #

def load_engine(engine_file_path):
    """Load TensorRT engine from file"""
    logger = trt.Logger(trt.Logger.WARNING)
    with open(engine_file_path, "rb") as f, trt.Runtime(logger) as runtime:
        return runtime.deserialize_cuda_engine(f.read())

def allocate_buffers(engine, context):
    """Allocate input and output buffers for TensorRT inference"""
    inputs = []
    outputs = []
    bindings = []
    stream = cuda.Stream()

    for tensor_name in engine:
        dtype = trt.nptype(engine.get_tensor_dtype(tensor_name))
        shape = context.get_tensor_shape(tensor_name)
        size = trt.volume(shape)
        host_mem = cuda.pagelocked_empty(size, dtype)
        device_mem = cuda.mem_alloc(host_mem.nbytes)
        bindings.append(int(device_mem))
        if engine.get_tensor_mode(tensor_name) == trt.TensorIOMode.INPUT:
            inputs.append((host_mem, device_mem, tensor_name))
        else:
            outputs.append((host_mem, device_mem, tensor_name))
    return inputs, outputs, bindings, stream

# ------------------------------------------------------------- #
# ------------------------ CLASSIFICATION --------------------- #
# ------------------------------------------------------------- #

def classify(input_data, context, inputs, outputs, stream, output_index=0):
    """Run inference on input data using TensorRT"""
    global time_start_preprocess, time_start_inference, time_end_inference

    time_start_preprocess = time.time()

    # Ensure input data is the correct shape and type
    input_data = input_data.astype(np.float32)
    if len(input_data.shape) == 1:
        input_data = input_data.reshape(1, -1)  # Add batch dimension if needed

    # Copy input to memory
    np.copyto(inputs[0][0], input_data.ravel())

    # Set input and output tensor addresses
    context.set_tensor_address(inputs[0][2], int(inputs[0][1]))
    context.set_tensor_address(outputs[output_index][2], int(outputs[output_index][1]))

    time_start_inference = time.time()
    context.execute_async_v3(stream_handle=stream.handle)
    time_end_inference = time.time()

    # Retrieve output
    cuda.memcpy_dtoh(outputs[output_index][0], outputs[output_index][1])
    preds = outputs[output_index][0]
    
    return preds

# ------------------------------------------------------------- #
# --------------------------- MAIN ---------------------------- #
# ------------------------------------------------------------- #

print("=== TensorRT AE Model Inference ===")

# ---------------------------
# 1. Load the Exported Test Set
# ---------------------------

if not os.path.exists(test_csv_path):
    raise FileNotFoundError(f"Test set CSV not found at {test_csv_path}")

# Load the test set from CSV
X_test_export = pd.read_csv(test_csv_path)

# Assume the target column is named "target"
Y_test = X_test_export["target"].values
X_test = X_test_export.drop(columns=["target"])

print(f"Test set loaded from {test_csv_path}")
print(f"X_test shape: {X_test.shape}")

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

# ---------------------------
# 3. Load TensorRT Model
# ---------------------------

if not os.path.exists(model_name):
    raise FileNotFoundError(f"TensorRT model not found at {model_name}")

print(f"Loading TensorRT Model: {model_name}")
engine = load_engine(model_name)
context = engine.create_execution_context()
print("Model Loaded")

# Automatically determine input and output tensor names
input_names = [name for name in engine if engine.get_tensor_mode(name) == trt.TensorIOMode.INPUT]
output_names = [name for name in engine if engine.get_tensor_mode(name) == trt.TensorIOMode.OUTPUT]

print(f"Found {len(input_names)} input(s) and {len(output_names)} output(s)")

if len(input_names) == 0:
    print("Error: No input tensors found in the model.")
    sys.exit(1)

if len(output_names) == 0:
    print("Error: No output tensors found in the model.")
    sys.exit(1)

print(f"Input tensor: {input_names[0]}")
for i, output_name in enumerate(output_names):
    print(f"Output tensor {i}: {output_name}")

# Get tensor shapes
input_shape = context.get_tensor_shape(input_names[0])
print(f"Input shape: {input_shape}")

for i, output_name in enumerate(output_names):
    output_shape = context.get_tensor_shape(output_name)
    print(f"Output {i} shape: {output_shape}")

# Validate output index
if classification_index >= len(output_names):
    print(f"Warning: Output index {classification_index} is out of range. Using index 0 instead.")
    classification_index = 0

print(f"Using output index {classification_index} for classification predictions.")

inputs, outputs, bindings, stream = allocate_buffers(engine, context)

# Start power monitoring in a separate thread (if available)
power_thread = threading.Thread(target=monitor_power, daemon=True)
power_thread.start()

# ---------------------------
# 4. Single Sample Inference and Metrics
# ---------------------------

X_test_processed = X_test_transformed.astype(np.float32)

# Choose a sample index
sample = X_test_processed[sample_index:sample_index+1]

# Run single inference
preds = classify(sample, context, inputs, outputs, stream, classification_index)
predicted_label = np.argmax(preds, axis=1)
true_label = Y_test[sample_index]

print(f"\n--- Single Sample Inference ---")
print(f"Sample index: {sample_index}")
print(f"True label: {true_label}")
print(f"Predicted label: {predicted_label[0]}")
print(f"Prediction probabilities: {preds}")

# For a single sample, accuracy is 1 if the prediction matches, else 0.
single_accuracy = 1 if predicted_label[0] == true_label else 0
print(f"Accuracy (single sample): {single_accuracy}")

# Compute additional metrics (these will be either 0 or 1)
y_true_single = np.array([true_label])
y_pred_single = np.array([predicted_label[0]])

f1 = f1_score(y_true_single, y_pred_single, average='macro')
precision = precision_score(y_true_single, y_pred_single, average='macro', zero_division=0)
recall = recall_score(y_true_single, y_pred_single, average='macro', zero_division=0)

print(f"F1 Score (single sample): {f1:.4f}")
print(f"Precision (single sample): {precision:.4f}")
print(f"Recall (single sample): {recall:.4f}")

# ---------------------------
# 5. Benchmark Inference Time and Compute FPS
# ---------------------------

print(f"\n--- Benchmarking {n_runs} inference runs ---")

# Open CSV for writing inference times
with open(time_csv_file, 'w') as inference_file:
    inference_writer = csv.DictWriter(inference_file, fieldnames=inference_fnames)
    inference_writer.writeheader()

    inference_times = []

    for i in range(n_runs):
        start_time = time.perf_counter()
        preds = classify(sample, context, inputs, outputs, stream, classification_index)
        end_time = time.perf_counter()
        
        elapsed_ms = (end_time - start_time) * 1000  # convert to milliseconds
        inference_times.append(elapsed_ms)
        
        # Write timestamps to CSV
        write_inference_timestamp(i)
        
        if (i + 1) % 1000 == 0:
            print(f"Run {i+1}: {elapsed_ms:.4f} ms")

    mean_time = np.mean(inference_times)
    std_time = np.std(inference_times)
    fps_values = 1000.0 / np.array(inference_times)
    mean_fps = np.mean(fps_values)
    std_fps = np.std(fps_values)

    print(f"\n=== TensorRT AE Performance Results ===")
    print(f"Average inference time over {n_runs} runs: {mean_time:.4f} ms (std: {std_time:.4f} ms)")
    print(f"Average FPS over {n_runs} runs: {mean_fps:.4f} FPS (std: {std_fps:.4f} FPS)")
    print(f"Min inference time: {np.min(inference_times):.4f} ms")
    print(f"Max inference time: {np.max(inference_times):.4f} ms")
    print(f"95th percentile: {np.percentile(inference_times, 95):.4f} ms")
    print(f"99th percentile: {np.percentile(inference_times, 99):.4f} ms")

print(f"\nInference times saved to: {time_csv_file}")
print(f"Power monitoring data saved to: {power_csv_file}")

gc.collect()

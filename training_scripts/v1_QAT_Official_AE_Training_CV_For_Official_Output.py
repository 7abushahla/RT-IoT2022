#!/usr/bin/env python
# -*- coding: utf-8 -*-
"""
Final AE Training and QAT Test Evaluation Script

This script loads data from a CSV file, preprocesses it, builds an autoencoder classifier model,
runs cross‑validation training with checkpointing and metrics logging, then for each fold:
  - Loads the saved final model,
  - Fine-tunes it using quantization‑aware training (QAT),
  - Converts the QAT–fine‑tuned model to a quantized (INT8) TFLite model,
  - Runs test evaluation on the quantized model using the same preprocessing as in training,
  - Aggregates and saves the test metrics.
  
Finally, the best validated model is also converted and saved as a QAT–quantized TFLite file.
"""


import os
import random
import warnings
import gc
import json
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
from datetime import datetime

import tensorflow as tf
from tensorflow import keras
from tensorflow.keras.metrics import F1Score
from tensorflow.keras import layers, regularizers
from tensorflow.keras.optimizers import AdamW, Adam
from tensorflow.keras.callbacks import EarlyStopping, ReduceLROnPlateau, TensorBoard
from tensorflow.keras.utils import to_categorical
from sklearn.preprocessing import LabelEncoder, StandardScaler, OneHotEncoder, label_binarize
from sklearn.model_selection import train_test_split, RepeatedStratifiedKFold
from sklearn.metrics import (roc_auc_score, f1_score, balanced_accuracy_score, 
                             accuracy_score, precision_score, recall_score)
from IPython.display import clear_output

warnings.filterwarnings("ignore")

# Set seed for reproducibility
SEED = 42
np.random.seed(SEED)
random.seed(SEED)
tf.random.set_seed(SEED)

# Settings / Hyperparameters
N_FOLDS = 10
N_REPEATS = 3
BATCHSIZE = 128
EPOCHS = 750
EARLY_STOP_EPOCHS = 100
PATIENCE = 10

INPUT_SIZE = 83
CLASSES = 13

# Autoencoder-specific parameters
NEURONS_PER_HIDDEN_LAYER = [39]  # Number of units in the hidden layers
DROPOUT_RATES = [0.19886192178341675]  # Dropout rate for the hidden layer
LATENT_DIM = 18  # Size of the latent space

# Optimization parameters
OPTIMIZER_NAME = "Adam"  # Optimizer for training
LEARNING_RATE = 0.0002119240613571203  # Learning rate

FIG_SIZE = (12, 12)
CHECKPOINT_DIR = "./checkpoints"
LOGS_DIR = "./logs"

# New QAT paths:
QAT_BEST_MODEL_FROM_MODEL_VALIDATION_CV_PATH = os.path.join(CHECKPOINT_DIR, "best_model_qat_from_validation_cv.h5")
QAT_BEST_TFLITE_MODEL_PATH = os.path.join(CHECKPOINT_DIR, "best_model_qat_from_validation_INT8.tflite")

# (Other paths remain as before)
FINAL_MODEL_FROM_MODEL_EVALUATION_PATH = os.path.join(CHECKPOINT_DIR, "final_model_from_model_evaluation.h5")
BEST_MODEL_FROM_MODEL_VALIDATION_CV_PATH = os.path.join(CHECKPOINT_DIR, "best_model_from_model_validation_cv.h5")

# Device info
DEVICE = "GPU" if tf.config.list_physical_devices('GPU') else "CPU"
print("Using device:", DEVICE)

# Create necessary folders
def create_folders():
    folders = [
        "outputs/overall",
        "outputs/validation_model",
        "outputs/evaluation_model_full_training_set",
        CHECKPOINT_DIR,
        LOGS_DIR
    ]
    for folder in folders:
        os.makedirs(folder, exist_ok=True)

create_folders()
save_path = "outputs/overall/"

# ---------------------------
# Data Loading and Preprocessing
# ---------------------------
url = './RT_IOT2022_new.csv'
data = pd.read_csv(url)
data['service'] = data['service'].replace('-', 'None')
data['proto'] = data['proto'].replace('-', 'None')
feature_names = list(data.drop(columns=['Attack_type']).columns)
print("Feature names:", feature_names)
target = data['Attack_type']
data = data.drop(columns=['Attack_type'])

target_encoder = LabelEncoder()
target_names = target_encoder.fit_transform(target)
CLASS_LABELS = target_encoder.classes_
print("Class labels:", CLASS_LABELS)

X_train, X_test, Y_train, Y_test = train_test_split(
    data, target, test_size=0.2, random_state=SEED, stratify=target
)
print("Training set size:", X_train.shape)
print("Test set size:", X_test.shape)
del data, target

# ---------------------------
# Preprocessing Function
# ---------------------------
def preprocess_data(X_train, X_valid, num_cols, categorical_cols):
    X_train = X_train.copy()
    X_valid = X_valid.copy()
    print(f"Before preprocessing: X_train shape: {X_train.shape}, X_valid shape: {X_valid.shape}")
    
    # Standardize numerical features
    scaler = StandardScaler()
    X_train[num_cols] = scaler.fit_transform(X_train[num_cols])
    X_valid[num_cols] = scaler.transform(X_valid[num_cols])
    
    # One-Hot Encode categorical features
    encoder = OneHotEncoder(handle_unknown='ignore', sparse_output=False, dtype=np.float32)
    encoder.fit(X_train[categorical_cols])
    X_train_encoded = encoder.transform(X_train[categorical_cols])
    X_valid_encoded = encoder.transform(X_valid[categorical_cols])
    
    # Convert to DataFrame and concatenate
    X_train_encoded_df = pd.DataFrame(X_train_encoded, columns=encoder.get_feature_names_out(), index=X_train.index)
    X_valid_encoded_df = pd.DataFrame(X_valid_encoded, columns=encoder.get_feature_names_out(), index=X_valid.index)
    X_train.drop(columns=categorical_cols, inplace=True)
    X_valid.drop(columns=categorical_cols, inplace=True)
    X_train = pd.concat([X_train, X_train_encoded_df], axis=1).astype('float32')
    X_valid = pd.concat([X_valid, X_valid_encoded_df], axis=1).astype('float32')
    
    # Reset indices
    X_train.reset_index(drop=True, inplace=True)
    X_valid.reset_index(drop=True, inplace=True)
    print(f"After preprocessing: X_train shape: {X_train.shape}, X_valid shape: {X_valid.shape}")
    return X_train, X_valid

# ---------------------------
# Model Definition (for summary)
# ---------------------------
def define_autoencoder_model(input_size, output_size, hidden_sizes, dropout_rates, latent_dim, l2_reg=1e-4):
    """
    Defines the AutoEncoderClassifier model using Keras' Functional API.

    Parameters:
        input_size (int): Number of input features.
        output_size (int): Number of output classes.
        hidden_sizes (list of int): List of neurons in each hidden layer.
        dropout_rates (list of float): List of dropout rates corresponding to each hidden layer.
        latent_dim (int): Dimensionality of the latent space.
        l2_reg (float, optional): L2 regularization factor. Defaults to 1e-4.

    Returns:
        model (tf.keras.Model): The defined AutoEncoderClassifier model.
    """
    if len(hidden_sizes) != len(dropout_rates):
        raise ValueError("The number of hidden_sizes must match the number of dropout_rates.")

    # --------------------------
    #        INPUT LAYER
    # --------------------------
    inputs = keras.Input(shape=(input_size,), name='encoder_input')

    # --------------------------
    #          ENCODER
    # --------------------------
    x = inputs
    for i, (hs, dr) in enumerate(zip(hidden_sizes, dropout_rates)):
        x = layers.Dense(
            hs,
            use_bias=False,
            kernel_regularizer=regularizers.l2(l2_reg),
            name=f'encoder_dense_{i}'
        )(x)
        x = layers.BatchNormalization(name=f'encoder_batchnorm_{i}')(x)
        x = layers.ReLU(name=f'encoder_relu_{i}')(x)
        x = layers.Dropout(dr, name=f'encoder_dropout_{i}')(x)

    # Latent (bottleneck) layer
    x = layers.Dense(
        latent_dim,
        use_bias=False,
        kernel_regularizer=regularizers.l2(l2_reg),
        name='latent_dense'
    )(x)
    x = layers.BatchNormalization(name='latent_batchnorm')(x)
    latent = layers.ReLU(name='latent_relu')(x)

    # --------------------------
    #          DECODER
    # --------------------------
    dec = latent
    reversed_hidden_sizes = list(reversed(hidden_sizes))
    reversed_dropout_rates = list(reversed(dropout_rates))
    for i, (hs, dr) in enumerate(zip(reversed_hidden_sizes, reversed_dropout_rates)):
        dec = layers.Dense(
            hs,
            use_bias=False,
            kernel_regularizer=regularizers.l2(l2_reg),
            name=f'decoder_dense_{i}'
        )(dec)
        dec = layers.BatchNormalization(name=f'decoder_batchnorm_{i}')(dec)
        dec = layers.ReLU(name=f'decoder_relu_{i}')(dec)
        dec = layers.Dropout(dr, name=f'decoder_dropout_{i}')(dec)

    # Reconstruction output
    reconstruction = layers.Dense(
        input_size,
        activation='relu',
        name='reconstruction_out',
        kernel_regularizer=regularizers.l2(l2_reg)
    )(dec)

    # --------------------------
    #     CLASSIFICATION HEAD
    # --------------------------
    classification = layers.Dense(
        output_size,
        activation='softmax',
        name='classification_out'
    )(latent)

    # --------------------------
    #          MODEL
    # --------------------------
    model = keras.Model(
        inputs=inputs,
        outputs={
            "reconstruction_out": reconstruction,
            "classification_out": classification
        },
        name='AutoEncoderClassifier'
    )

    return model

# ---------------------------
# Model Initialization & Compilation
# ---------------------------
model = define_autoencoder_model(
    input_size=INPUT_SIZE,
    output_size=CLASSES,
    hidden_sizes=NEURONS_PER_HIDDEN_LAYER,  # Matches the updated NEURONS_PER_HIDDEN_LAYER
    dropout_rates=DROPOUT_RATES,  # Matches updated DROPOUT_RATES
    latent_dim=LATENT_DIM
)

optimizer = Adam(learning_rate=LEARNING_RATE)
model.compile(
    optimizer=optimizer,
    loss={
        'reconstruction_out': 'mse',
        'classification_out': 'categorical_crossentropy'
    },
    metrics={
        'classification_out': [
            'accuracy', 
            F1Score(average='macro', name='f1_score')
        ]
    },
    # run_eagerly=True  # Optional: Uncomment if you need eager execution
)

# Print Model Summary
print("Final model architecture:")
model.summary()

# ---------------------------
# Utility Functions: Checkpoint and Metrics Saving
# ---------------------------
def load_checkpoint(model, checkpoint_path):
    if os.path.exists(checkpoint_path):
        model.load_weights(checkpoint_path)
        print(f"Checkpoint loaded from {checkpoint_path}")
        return True
    return False

def save_metrics(metrics, fold):
    metrics_file = os.path.join(CHECKPOINT_DIR, f"QAT_metrics_fold{fold + 1}.json")
    with open(metrics_file, 'w') as f:
        json.dump(metrics, f, indent=4)
    print(f"Metrics for fold {fold + 1} saved to {metrics_file}")

def load_metrics(fold):
    metrics_file = os.path.join(CHECKPOINT_DIR, f"QAT_metrics_fold{fold + 1}.json")
    if os.path.exists(metrics_file):
        with open(metrics_file, 'r') as f:
            return json.load(f)
    return {}

# ---------------------------
# QAT Annotation Function
# ---------------------------
import tensorflow_model_optimization as tfmot

def annotate_model(model):
    # Annotate Dense layers (for example) for quantization
    def apply_annotation(layer):
        if isinstance(layer, tf.keras.layers.Dense):
            return tfmot.quantization.keras.quantize_annotate_layer(layer)
        return layer
    annotated_model = tf.keras.models.clone_model(
        model,
        clone_function=apply_annotation
    )
    quantized_model = tfmot.quantization.keras.quantize_apply(annotated_model)
    return quantized_model

# ---------------------------
# Representative Dataset for QAT Conversion
# ---------------------------
def representative_data_gen():
    # Use a subset of training data for calibration
    num_samples = 10000  # adjust as needed
    indices = np.random.choice(X_train.shape[0], size=num_samples, replace=False)
    # Use .iloc to select rows by integer position
    representative_samples = X_train.iloc[indices].values.astype(np.float32)
    dataset = tf.data.Dataset.from_tensor_slices(representative_samples).batch(1)
    for input_value in dataset:
        yield [input_value]

# ---------------------------
# Cross-Validation Training, QAT Fine-Tuning, and TFLite Test Evaluation
# ---------------------------
def run_cross_validation(X, Y, hidden_sizes, output_size, dropout_rates):
    rskf = RepeatedStratifiedKFold(n_splits=N_FOLDS, n_repeats=N_REPEATS, random_state=SEED)

    # Lists to collect TFLite test metrics from each fold
    test_precisions = []
    test_recalls = []
    test_f1_scores = []
    test_accuracies = []
    test_bal_accuracies = []
    test_aucs = []

    fold_number = 1
    for fold, (train_idx, val_idx) in enumerate(rskf.split(X, Y)):
        print(f"\nFold {fold_number}/{N_FOLDS * N_REPEATS}")
        final_model_path = os.path.join(CHECKPOINT_DIR, f"model_fold{fold_number}_final.h5")
        if not os.path.exists(final_model_path):
            print(f"Fold {fold_number}: Final model not found at {final_model_path}. Skipping fold.")
            fold_number += 1
            continue

        # Split data (X and Y are pandas objects)
        X_train_fold = X.iloc[train_idx].copy()
        Y_train_fold = Y.iloc[train_idx].copy()
        X_valid_fold = X.iloc[val_idx].copy()
        Y_valid_fold = Y.iloc[val_idx].copy()
        
        # Reset indices for consistency
        X_train_fold.reset_index(drop=True, inplace=True)
        X_valid_fold.reset_index(drop=True, inplace=True)
        Y_train_fold.reset_index(drop=True, inplace=True)
        Y_valid_fold.reset_index(drop=True, inplace=True)
        
        # Save original training fold (with categorical columns) for test preprocessing
        X_train_fold_orig = X_train_fold.copy()
        
        # Identify numeric and categorical columns using the original training fold
        num_cols = X_train_fold_orig.select_dtypes(include=["int64", "float64"]).columns
        categorical_cols = ['proto', 'service']
        
        # Preprocess training and validation folds (this drops original categorical columns)
        X_train_fold, X_valid_fold = preprocess_data(X_train_fold, X_valid_fold, num_cols, categorical_cols)
        Y_train_fold = Y_train_fold.astype('category').cat.codes
        Y_valid_fold = Y_valid_fold.astype('category').cat.codes

        # Convert processed data to arrays
        X_train_array = X_train_fold.values.astype('float32')
        Y_train_array = Y_train_fold.values.astype('int32')
        X_valid_array = X_valid_fold.values.astype('float32')
        Y_valid_array = Y_valid_fold.values.astype('int32')
        
        # Optionally, set input_size from the processed array shape or use the global INPUT_SIZE
        input_size = X_train_array.shape[1]
        
        # Define training variables for the autoencoder model
        X_train_processed = X_train_array
        X_valid_processed = X_valid_array
        Y_train_encoded = to_categorical(Y_train_array, num_classes=CLASSES)
        Y_valid_encoded = to_categorical(Y_valid_array, num_classes=CLASSES)

        # ---------------------------
        # Load the pretrained final model for this fold
        # ---------------------------
        print(f"Loading final model for Fold {fold_number} from {final_model_path}")
        model = keras.models.load_model(final_model_path, compile=False)
        
        optimizer = tf.keras.optimizers.Adam(learning_rate=LEARNING_RATE, clipnorm=0.001)
        print(f"Loaded pretrained model for QAT fine-tuning for Fold {fold_number}.")

        # ---------------------------
        # Apply QAT annotation and fine-tune the model
        # ---------------------------
        qat_model = annotate_model(model)
        
        qat_model.compile(
            optimizer=optimizer,
            loss={
                'reconstruction_out': 'mse',
                'classification_out': 'categorical_crossentropy'
            },
            metrics={
                'classification_out': [
                    'accuracy', 
                    F1Score(average='macro', name='f1_score')
                ]
            },
            # run_eagerly=True  # Uncomment if eager execution is needed
        )
        
        print(f"Starting QAT fine-tuning for Fold {fold_number}...")
        
        # Define TensorBoard log directory for this fold
        fold_log_dir = os.path.join(
            LOGS_DIR, 
            f"QAT_fold_{fold_number}_{datetime.now().strftime('%Y%m%d-%H%M%S')}"
        )
        tensorboard_callback = TensorBoard(log_dir=fold_log_dir, histogram_freq=1)
        callbacks = [
            EarlyStopping(
                monitor='val_quant_classification_out_f1_score',
                mode='max',
                patience=EARLY_STOP_EPOCHS,
                restore_best_weights=True,
                verbose=1
            ),
            ReduceLROnPlateau(
                monitor='val_quant_classification_out_f1_score',
                mode='max',
                factor=0.5,
                patience=PATIENCE,
                min_lr=1e-8,
                verbose=1
            ),
            tensorboard_callback
        ]

        qat_history = qat_model.fit(
            X_train_processed,
            {
                'reconstruction_out': X_train_processed,
                'classification_out': Y_train_encoded
            },
            validation_data=(
                X_valid_processed,
                {
                    'reconstruction_out': X_valid_processed,
                    'classification_out': Y_valid_encoded
                }
            ),
            batch_size=BATCHSIZE,
            epochs=EPOCHS,
            callbacks=callbacks,
            verbose=1
        )

        # Save final training/validation metrics for this fold
        metrics = {}
        train_f1_hist = qat_history.history.get('quant_classification_out_f1_score', [])
        val_f1_hist = qat_history.history.get('val_quant_classification_out_f1_score', [])
        metrics['final_train_loss'] = qat_history.history.get('loss', [])[-1] if qat_history.history.get('loss', []) else None
        metrics['final_val_loss'] = qat_history.history.get('val_loss', [])[-1] if qat_history.history.get('val_loss', []) else None
        metrics['final_train_f1'] = train_f1_hist[-1] if len(train_f1_hist) > 0 else None
        metrics['final_val_f1'] = val_f1_hist[-1] if len(val_f1_hist) > 0 else None


        # ---------------------------
        # Build Representative Dataset from this fold's training data
        # ---------------------------
        def local_representative_data_gen():
            num_samples = 10000  # adjust as needed
            indices = np.random.choice(X_train_array.shape[0], size=num_samples, replace=False)
            representative_samples = X_train_array[indices].astype(np.float32)
            dataset = tf.data.Dataset.from_tensor_slices(representative_samples).batch(1)
            for input_value in dataset:
                yield [input_value]

        # ---------------------------
        # Convert the QAT model to a quantized TFLite model (INT8)
        # ---------------------------
        converter = tf.lite.TFLiteConverter.from_keras_model(qat_model)
        converter.optimizations = [tf.lite.Optimize.DEFAULT]
        converter.target_spec.supported_ops = [tf.lite.OpsSet.TFLITE_BUILTINS_INT8]
        converter.inference_input_type = tf.int8
        converter.inference_output_type = tf.int8
        converter.representative_dataset = local_representative_data_gen
        try:
            quantized_tflite_model = converter.convert()
            tflite_filename = f"qat_model_fold{fold_number}.tflite"
            tflite_model_path = os.path.join(CHECKPOINT_DIR, tflite_filename)
            with open(tflite_model_path, "wb") as f:
                f.write(quantized_tflite_model)
            print(f"Fold {fold_number}: Quantized TFLite model saved to {tflite_model_path}")
        except Exception as e:
            print(f"Fold {fold_number}: TFLite conversion (QAT) failed: {e}")
            tflite_model_path = None

        # ---------------------------
        # Test Evaluation using Quantized TFLite Model
        # ---------------------------
        # Refit scaler/encoder on the original training fold (X_train_fold_orig) for test preprocessing.
        scaler = StandardScaler()
        X_train_scaled = scaler.fit_transform(X_train_fold_orig[num_cols])
        X_test_scaled = scaler.transform(X_test[num_cols])
        encoder = OneHotEncoder(handle_unknown='ignore', sparse_output=False, dtype=np.float32)
        encoder.fit(X_train_fold_orig[categorical_cols])
        X_test_encoded = encoder.transform(X_test[categorical_cols])
        X_test_encoded_df = pd.DataFrame(X_test_encoded, columns=encoder.get_feature_names_out(), index=X_test.index)
        X_test_transformed = pd.concat([pd.DataFrame(X_test_scaled, index=X_test.index, columns=num_cols),
                                         X_test_encoded_df], axis=1)
        X_test_transformed.reset_index(drop=True, inplace=True)
        print(f"Test set preprocessing: original shape: {X_test.shape}, transformed shape: {X_test_transformed.shape}")
        
        X_test_array = X_test_transformed.values.astype('float32')
        Y_test_encoded = pd.Series(Y_test).astype('category').cat.codes.values

        # For quantized models, we need to quantize the inputs.
        if tflite_model_path and os.path.exists(tflite_model_path):
            interpreter = tf.lite.Interpreter(model_path=tflite_model_path)
            interpreter.allocate_tensors()
            input_details = interpreter.get_input_details()
            output_details = interpreter.get_output_details()
            # Always use output index 1 if available (should correspond to the 13-class classification output)
            if len(output_details) > 1:
                classification_index = 1
                print("Using output index 1 for classification predictions.")
            else:
                classification_index = 0
                print("Only one output found; using output index 0.")
            # Retrieve quantization parameters from the chosen output
            input_scale, input_zero_point = input_details[0]['quantization']
            output_scale, output_zero_point = output_details[classification_index]['quantization']
            def quantize_input(data, scale, zero_point):
                return np.round(data / scale + zero_point).astype(np.int8)
            def run_inference_tflite(input_data):
                input_data = input_data.astype(np.float32)
                input_data_int8 = quantize_input(input_data, input_scale, input_zero_point)
                interpreter.set_tensor(input_details[0]['index'], input_data_int8)
                interpreter.invoke()
                output_int8 = interpreter.get_tensor(output_details[classification_index]['index'])
                output = (output_int8.astype(np.float32) - output_zero_point) * output_scale
                return output

            tflite_predictions = []
            for i in range(len(X_test_array)):
                sample = np.expand_dims(X_test_array[i], axis=0)
                pred = run_inference_tflite(sample)
                tflite_predictions.append(pred)
            tflite_predictions = np.concatenate(tflite_predictions, axis=0)
            tflite_pred_labels = np.argmax(tflite_predictions, axis=1)
            precision = precision_score(Y_test_encoded, tflite_pred_labels, average='macro', zero_division=0)
            recall = recall_score(Y_test_encoded, tflite_pred_labels, average='macro', zero_division=0)
            f1 = f1_score(Y_test_encoded, tflite_pred_labels, average='macro', zero_division=0)
            acc = accuracy_score(Y_test_encoded, tflite_pred_labels)
            bal_acc = balanced_accuracy_score(Y_test_encoded, tflite_pred_labels)
            Y_test_bin = label_binarize(Y_test_encoded, classes=np.arange(CLASSES))
            test_auc = roc_auc_score(Y_test_bin, tf.nn.softmax(tflite_predictions), average='macro', multi_class='ovo')

            test_precisions.append(precision)
            test_recalls.append(recall)
            test_f1_scores.append(f1)
            test_accuracies.append(acc)
            test_bal_accuracies.append(bal_acc)
            test_aucs.append(test_auc)
            print(f"Fold {fold_number}: Quantized TFLite Test Metrics -> Precision: {precision:.4f}, Recall: {recall:.4f}, F1: {f1:.4f}, Accuracy: {acc:.4f}, Balanced Acc: {bal_acc:.4f}, AUC: {test_auc:.4f}")
        else:
            print(f"Fold {fold_number}: Skipping TFLite test evaluation due to conversion failure.")

        # Save final test metrics in the metrics dictionary
        metrics['final_test_precision'] = precision if 'precision' in locals() else None
        metrics['final_test_recall'] = recall if 'recall' in locals() else None
        metrics['final_test_f1'] = f1 if 'f1' in locals() else None
        metrics['final_test_accuracy'] = acc if 'acc' in locals() else None
        metrics['final_test_balanced_accuracy'] = bal_acc if 'bal_acc' in locals() else None
        metrics['final_test_auc'] = test_auc if 'test_auc' in locals() else None
        save_metrics(metrics, fold)

        # Save the final QAT‐fine‑tuned Keras model in .h5 format for this fold
        h5_filename = os.path.join(CHECKPOINT_DIR, f"qat_model_fold{fold_number}_final.h5")
        qat_model.save(h5_filename)
        print(f"Fold {fold_number}: Keras QAT model saved in .h5 format to {h5_filename}")

        # Clean up for this fold
        del X_train_array, Y_train_array, X_valid_array, Y_valid_array
        del X_train_fold, X_valid_fold, Y_train_fold, Y_valid_fold
        del model, qat_model
        gc.collect()
        tf.keras.backend.clear_session()
        fold_number += 1

    print("Cross-validation completed successfully.")
    
    # ---------------------------
    # Aggregate Test Metrics
    # ---------------------------
    aggregated_test_metrics = {
        "precision": {
            "mean": float(np.mean(test_precisions)) if test_precisions else None,
            "std": float(np.std(test_precisions)) if test_precisions else None
        },
        "recall": {
            "mean": float(np.mean(test_recalls)) if test_recalls else None,
            "std": float(np.std(test_recalls)) if test_recalls else None
        },
        "macro_f1": {
            "mean": float(np.mean(test_f1_scores)) if test_f1_scores else None,
            "std": float(np.std(test_f1_scores)) if test_f1_scores else None
        },
        "accuracy": {
            "mean": float(np.mean(test_accuracies)) if test_accuracies else None,
            "std": float(np.std(test_accuracies)) if test_accuracies else None
        },
        "balanced_accuracy": {
            "mean": float(np.mean(test_bal_accuracies)) if test_bal_accuracies else None,
            "std": float(np.std(test_bal_accuracies)) if test_bal_accuracies else None
        },
        "auc": {
            "mean": float(np.mean(test_aucs)) if test_aucs else None,
            "std": float(np.std(test_aucs)) if test_aucs else None
        }
    }
    agg_metrics_file = os.path.join(CHECKPOINT_DIR, "aggregated_QAT_test_metrics.json")
    with open(agg_metrics_file, 'w') as f:
        json.dump(aggregated_test_metrics, f, indent=4)
    print(f"\nAggregated TFLite test metrics saved to {agg_metrics_file}")
    
    # ---------------------------
    # Save Formatted Output to a Text File
    # ---------------------------
    output_lines = ["Aggregated Metrics Across All Folds:"]
    for metric, stats in aggregated_test_metrics.items():
        mean_val = stats.get('mean')
        std_val = stats.get('std')
        if mean_val is None or std_val is None:
            output_lines.append(f"{metric}: Not available")
        else:
            output_lines.append(f"{metric}: {mean_val:.5f} ± {std_val:.5f}")
    output_text = "\n".join(output_lines)
    output_file = os.path.join(CHECKPOINT_DIR, "aggregated_QAT_metrics.txt")
    with open(output_file, "w") as f:
        f.write(output_text)
    print(f"\nFormatted aggregated metrics saved to {output_file}")



# ---------------------------
# Main Run
# ---------------------------
def run_training():
    tf.keras.backend.clear_session()
    run_cross_validation(X_train, Y_train, NEURONS_PER_HIDDEN_LAYER, CLASSES, DROPOUT_RATES)
    tf.keras.backend.clear_session()
    
    # Print aggregated test metrics and display saved JSON content
    def aggregate_test_metrics():
        agg_metrics_file = os.path.join(CHECKPOINT_DIR, "aggregated_QAT_test_metrics.json")
        if os.path.exists(agg_metrics_file):
            with open(agg_metrics_file, 'r') as f:
                agg_metrics = json.load(f)
            print("\nAggregated Metrics Across All Folds:")
            for metric, stats in agg_metrics.items():
                mean_val = stats.get('mean')
                std_val = stats.get('std')
                if mean_val is None or std_val is None:
                    print(f"{metric}: Not available")
                else:
                    print(f"{metric}: {mean_val:.5f} ± {std_val:.5f}")
            print("\nSaved aggregated JSON content:", agg_metrics)
        else:
            print("Aggregated test metrics file not found.")
    aggregate_test_metrics()
    
    # ---------------------------
    # Convert and Save the Overall Best Validated Model as a QAT TFLite File
    # ---------------------------
    if os.path.exists(BEST_MODEL_FROM_MODEL_VALIDATION_CV_PATH):
        print(f"\nLoading best validated model from {BEST_MODEL_FROM_MODEL_VALIDATION_CV_PATH} for QAT TFLite conversion...")
        pretrained_model = keras.models.load_model(
            BEST_MODEL_FROM_MODEL_VALIDATION_CV_PATH, 
            custom_objects={"F1Score": tf.keras.metrics.F1Score}
        )
        print("Loaded pretrained model for QAT fine-tuning.")
        optimizer = tf.keras.optimizers.Adam(learning_rate=LEARNING_RATE, clipnorm=0.001)
        qat_model = annotate_model(pretrained_model)
        qat_model.compile(
            optimizer=optimizer,
            loss={
                'reconstruction_out': 'mse',
                'classification_out': 'categorical_crossentropy'
            },
            metrics={
                'classification_out': [
                    'accuracy', 
                    F1Score(average='macro', name='f1_score')
                ]
            },
            # run_eagerly=True  # Uncomment if eager execution is needed
        )
        # Use a representative dataset built on the global training set with the same preprocessing as in training.
        def representative_data_gen_best():
            # Determine numeric and categorical columns from global X_train
            num_cols_global = X_train.select_dtypes(include=["int64", "float64"]).columns
            categorical_cols_global = ['proto', 'service']
            X_train_proc, _ = preprocess_data(X_train, X_train, num_cols_global, categorical_cols_global)
            X_train_array_best = X_train_proc.values.astype('float32')
            num_samples = 10000
            indices = np.random.choice(X_train_array_best.shape[0], size=num_samples, replace=False)
            representative_samples = X_train_array_best[indices]
            dataset = tf.data.Dataset.from_tensor_slices(representative_samples).batch(1)
            for input_value in dataset:
                yield [input_value]
                
        converter = tf.lite.TFLiteConverter.from_keras_model(qat_model)
        converter.optimizations = [tf.lite.Optimize.DEFAULT]
        converter.target_spec.supported_ops = [tf.lite.OpsSet.TFLITE_BUILTINS_INT8]
        converter.inference_input_type = tf.int8
        converter.inference_output_type = tf.int8
        converter.representative_dataset = representative_data_gen_best
        try:
            quantized_tflite_model = converter.convert()
            with open(QAT_BEST_MODEL_FROM_MODEL_VALIDATION_CV_PATH, "wb") as f:
                f.write(quantized_tflite_model)
            print(f"Quantized TFLite model saved to {QAT_BEST_MODEL_FROM_MODEL_VALIDATION_CV_PATH}")
        except ValueError as e:    
            print(f"QAT TFLite conversion failed: {e}")
    else:
        print("Best validated model file not found; skipping QAT TFLite conversion for overall best model.")

if __name__ == "__main__":
    run_training()
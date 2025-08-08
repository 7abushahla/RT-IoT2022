#!/usr/bin/env python
# coding: utf-8
"""
-----------------------------------------------------------------------
v6_Tensorflow_EARLYSTOP_BatchNormalize_Regularized_VAE_CV_Official_Tuning.py
-----------------------------------------------------------------------
This script is a **Variational Auto‑Encoder (VAE) + classifier** version of
`v6_Tensorflow_EARLYSTOP_BatchNormalize_Regularized_AutoEncoder_CV_Official_Tuning.py`.
It keeps **all Optuna search‑space, preprocessing, optimizer, and CV settings
identical** to the AE baseline, but replaces the network definition with a VAE.

Key modifications from the AE baseline are **flagged with “# VAE CHANGE:”** so you
can quickly diff the two scripts.
"""
# --------------------------------------------------------------------
# Imports
# --------------------------------------------------------------------
import os
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt  # (unused but kept for parity)
import shutil                    # (unused but kept for parity)
import random
import math
import gc
import warnings
import sklearn.exceptions
from IPython.display import clear_output

# --------------------------------------------------------------------
# Environment / GPU setup (unchanged)
# --------------------------------------------------------------------
# VAE CHANGE: still force the first GPU only – behaviour identical

# --- Force TensorFlow to see only GPU 0 ------------------------
os.environ["CUDA_VISIBLE_DEVICES"] = "0"   # must be set before tf import
# ---------------------------------------------------------------

import tensorflow as tf
from tensorflow import keras
from tensorflow.keras import layers, regularizers
from tensorflow.keras.callbacks import EarlyStopping
from tensorflow.keras.optimizers.schedules import CosineDecay
from tensorflow.keras.metrics import F1Score

import optuna
from optuna.trial import TrialState
from sklearn.model_selection import train_test_split, RepeatedStratifiedKFold
from sklearn.preprocessing import StandardScaler, OneHotEncoder
from tensorflow.keras.utils import to_categorical

# --- Keep only GPU 0 visible inside TF -------------------------
gpus = tf.config.list_physical_devices('GPU')
if gpus:
    try:
        tf.config.set_visible_devices(gpus[0], 'GPU')   # hide the rest
        tf.config.experimental.set_memory_growth(gpus[0], True)
    except RuntimeError as e:         # happens if GPUs are already initialised
        print(f"[GPU-setup] {e}")
# ---------------------------------------------------------------

'''
During Optuna's Hyperparameter Optimization, we get this error:
 UndefinedMetricWarning: Precision is ill-defined and being set to 0.0 in
 labels with no predicted samples. Use `zero_division` parameter to control this behavior.
  _warn_prf(average, modifier, f"{metric.capitalize()} is", len(result))

Even with Stratified KFold, because we calculate precision like:
True Positive / Predicted Yes

And if we predicted all our samples to be No

Then Predicted Yes = 0, resulting in undefined precision -- possibly undefined F-score
Link:
https://stackoverflow.com/questions/35225369/scikit-learn-error-message-precision-and-f-score-are-ill-defined-and-being-set
'''
# warnings.filterwarnings("ignore", category=sklearn.exceptions.UndefinedMetricWarning) # does the above

warnings.filterwarnings("ignore")  # Ignores all warnings, including UndefinedMetricWarning



# --------------------------------------------------------------------
# Global configuration & seeding (unchanged)
# --------------------------------------------------------------------
SEED = 42
np.random.seed(SEED)
random.seed(SEED)
tf.random.set_seed(SEED)

# --------------------------------------------------------------------
# Experiment‑wide constants (mostly unchanged)
# --------------------------------------------------------------------
FILE_NAME = "VAE_Official_No_RFECV_No_PCA_100"           # VAE CHANGE: renamed
CV_RESULT_DIR = "./VAE_cv_results"                      # VAE CHANGE
TUNED_OR_NO = "Tuned_Hyperparameters"
N_FOLDS = 10
N_REPEATS = 3

BATCHSIZE = 1536
CLASSES = 13
EPOCHS = 100
EARLY_STOP_EPOCHS = 40
WARM_EPOCHS = 3     # linear warm-up (set 0 to disable)
ALPHA       = 1e-3  # final_lr = ALPHA * lr_max
INPUT_SIZE = 83    # will change after OHE but needed for arg default
CHECKPOINT_DIR = "keras_checkpoint"
num_epochs_str = "_100"

os.makedirs(f"./{FILE_NAME}/{TUNED_OR_NO}/{CV_RESULT_DIR}", exist_ok=True)
DEVICE = "GPU" if tf.config.list_physical_devices('GPU') else "CPU"
print(DEVICE)

# --------------------------------------------------------------------
# Data loading (unchanged)
# --------------------------------------------------------------------
DATA_PATH = "./RT_IOT2022_new.csv"
data = pd.read_csv(DATA_PATH)
data['service'] = data['service'].replace('-', 'None')
data['proto']  = data['proto'].replace('-', 'None')

# Dropping the target column
target = data['Attack_type']
data = data.drop(columns = ['Attack_type'])

# Train / test split – kept mainly for consistency; CV happens inside Optuna
# Split the data into train and test
X_train, X_test, Y_train, Y_test = train_test_split(data, target, test_size= 0.2, random_state=SEED, stratify=target)


# memory-saving
del data
del target

# --------------------------------------------------------------------
# Utility: LR logger (unchanged)
# --------------------------------------------------------------------
# ---- Callback that prints & logs the LR every epoch -----------------
class LREpochLogger(tf.keras.callbacks.Callback):
    def on_epoch_end(self, epoch, logs=None):
        lr = self.model.optimizer.learning_rate          # schedule or variable
        if isinstance(lr, tf.keras.optimizers.schedules.LearningRateSchedule):
            # schedules need the current step
            lr = lr(self.model.optimizer.iterations)
        lr = tf.keras.backend.get_value(lr)               # convert to Python float
        tf.print("epoch", epoch + 1, "lr", lr)
        if logs is not None:                              # make it part of History / CSV / TB
            logs["lr"] = lr

# --------------------------------------------------------------------
# Preprocessing helper (unchanged)
# --------------------------------------------------------------------

# ------------------------------
# Data Preprocessing
# ------------------------------

def preprocess_data(X_train, X_valid, num_cols, categorical_cols):
    """
    Preprocesses the data by scaling numerical features with StandardScaler
    and one-hot encoding the specified categorical features.
    
    :param X_train: Training feature DataFrame
    :param X_valid: Validation feature DataFrame
    :param num_cols: List of numerical column names
    :param categorical_cols: List of categorical column names
    :return: Tuple of (X_train_processed, X_valid_processed) after scaling and encoding
    """
    # Make copies to avoid altering the original data
    X_train = X_train.copy()
    X_valid = X_valid.copy()

    print(f"Before preprocessing: X_train shape: {X_train.shape}, X_valid shape: {X_valid.shape}")

    # Standardize numerical features
    scaler = StandardScaler()
    X_train[num_cols] = scaler.fit_transform(X_train[num_cols])
    X_valid[num_cols] = scaler.transform(X_valid[num_cols])

    # One-hot encode categorical features
    encoder = OneHotEncoder(handle_unknown='ignore', sparse_output=False, dtype=np.float32)
    encoder.fit(X_train[categorical_cols])

    X_train_encoded = encoder.transform(X_train[categorical_cols])
    X_valid_encoded = encoder.transform(X_valid[categorical_cols])

    # Create DataFrames for the encoded features
    encoded_feature_names = encoder.get_feature_names_out(categorical_cols)
    X_train_encoded_df = pd.DataFrame(X_train_encoded, columns=encoded_feature_names, index=X_train.index)
    X_valid_encoded_df = pd.DataFrame(X_valid_encoded, columns=encoded_feature_names, index=X_valid.index)

    # Free up the encoded arrays
    del X_train_encoded, X_valid_encoded
    gc.collect()

    # Drop original categorical columns
    X_train.drop(columns=categorical_cols, inplace=True)
    X_valid.drop(columns=categorical_cols, inplace=True)

    # Concatenate the encoded features
    X_train_processed = pd.concat([X_train, X_train_encoded_df], axis=1).astype('float32')
    X_valid_processed = pd.concat([X_valid, X_valid_encoded_df], axis=1).astype('float32')

    # Free up memory
    del X_train, X_valid, X_train_encoded_df, X_valid_encoded_df
    gc.collect()

    # Reset indices
    X_train_processed.reset_index(drop=True, inplace=True)
    X_valid_processed.reset_index(drop=True, inplace=True)

    print(f"After preprocessing: X_train shape: {X_train_processed.shape}, X_valid shape: {X_valid_processed.shape}")

    return X_train_processed, X_valid_processed

# --------------------------------------------------------------------
# VAE network definition  ❯❯❯  core change starts here
# --------------------------------------------------------------------

def sampling(args):
    """Re‑parameterisation trick."""
    z_mean, z_log_var = args
    eps = tf.random.normal(shape=tf.shape(z_mean))
    return z_mean + tf.exp(0.5 * z_log_var) * eps


def define_vae_classifier_model(input_dim: int,
                                output_dim: int,
                                hidden_sizes: list[int],
                                dropout_rates: list[float],
                                latent_dim: int,
                                l2_reg: float = 1e-4,
                                beta: float = 1.0):
    """
    Builds a **VAE + classifier**.

    *Encoder* → μ & logσ² → sampling → latent *z* → Decoder(Reconstruction)
                                             ↘︎ Classifier(softmax)

    `beta` scales the KL term; set to 1.0 for vanilla VAE.
    """
    if len(hidden_sizes) != len(dropout_rates):
        raise ValueError("hidden_sizes and dropout_rates must match in length.")

    inputs = keras.Input(shape=(input_dim,), name='encoder_input')
    x = inputs
    for i, (hs, dr) in enumerate(zip(hidden_sizes, dropout_rates)):
        x = layers.Dense(hs, use_bias=False,
                         kernel_regularizer=regularizers.l2(l2_reg),
                         name=f'encoder_dense_{i}')(x)
        x = layers.BatchNormalization(name=f'encoder_bn_{i}')(x)
        x = layers.ReLU(name=f'encoder_relu_{i}')(x)
        x = layers.Dropout(dr, name=f'encoder_dropout_{i}')(x)

    # VAE CHANGE: two heads for μ and logσ²
    z_mean = layers.Dense(latent_dim, name='z_mean')(x)
    z_log_var = layers.Dense(latent_dim, name='z_log_var')(x)

    # VAE CHANGE: sampling via re‑parameterisation trick
    z = layers.Lambda(sampling, name='z')([z_mean, z_log_var])

    # ----------------------------------------------------------------
    # Decoder (mirror of encoder)
    # ----------------------------------------------------------------
    y = z
    for i, (hs, dr) in enumerate(zip(reversed(hidden_sizes), reversed(dropout_rates))):
        y = layers.Dense(hs, use_bias=False,
                         kernel_regularizer=regularizers.l2(l2_reg),
                         name=f'decoder_dense_{i}')(y)
        y = layers.BatchNormalization(name=f'decoder_bn_{i}')(y)
        y = layers.ReLU(name=f'decoder_relu_{i}')(y)
        y = layers.Dropout(dr, name=f'decoder_dropout_{i}')(y)

    reconstruction = layers.Dense(input_dim, activation='relu', name='reconstruction_out')(y)

    # ----------------------------------------------------------------
    # Classifier head (unchanged except input is z)
    # ----------------------------------------------------------------
    classification = layers.Dense(output_dim, activation='softmax', name='classification_out')(z)

    # ----------------------------------------------------------------
    # Model & KL loss
    # ----------------------------------------------------------------
    # model = keras.Model(inputs=inputs, outputs=[reconstruction, classification], name='VAE_Classifier')

    # --------------------------
    #          MODEL
    # --------------------------
    model = keras.Model(
        inputs=inputs,
        outputs={
            "reconstruction_out": reconstruction,
            "classification_out": classification
        },
        name='VAE_Classifier'
    )

    # VAE CHANGE: Add KL divergence term to the total loss via add_loss
    kl_loss = -0.5 * tf.reduce_mean(1 + z_log_var - tf.square(z_mean) - tf.exp(z_log_var))
    model.add_loss(beta * kl_loss)   # beta‑VAE style, beta defaults to 1

    return model

# --------------------------------------------------------------------
# Optuna objective (largely unchanged)
# --------------------------------------------------------------------

def objective_cv(trial: optuna.trial.Trial):
    """
    Optuna objective for cross-validation with AutoEncoderClassifier.
    We measure final Macro-F1 on classification as the optimization target.
    """
    # Suggest network topology (unchanged)
    # --------------------------
    #    Hyperparameter Suggestion
    # --------------------------
    # Suggest the number of hidden layers
    n_layers = trial.suggest_int("n_layers", 1, 3)
    hidden_sizes, dropout_rates = [], []
    for i in range(n_layers):
        hidden_sizes.append(trial.suggest_int(f"n_units_l{i}", 16, 64))
        dropout_rates.append(trial.suggest_float(f"dropout_l{i}", 0.1, 0.5))
    latent_dim = trial.suggest_int("latent_dim", 8, 48)

    # Suggest optimizer and learning rate
    lr_max = trial.suggest_float("lr_max", 1e-4, 3e-2, log=True)

    # --------------------------
    #    Initialize Cross-Validation
    # --------------------------

    rskf = RepeatedStratifiedKFold(n_splits=N_FOLDS, n_repeats=N_REPEATS, random_state=SEED)
    trial_macro_f1_scores = []

    # --------------------------
    #    Cross-Validation Folds
    # --------------------------
    for fold_idx, (train_idx, valid_idx) in enumerate(rskf.split(X_train, Y_train)):
        fold_num = fold_idx + 1
        print(f"Starting fold {fold_num}")

        # Create the training & validation splits for this fold
        X_train_fold = X_train.iloc[train_idx].copy()
        Y_train_fold = Y_train.iloc[train_idx].copy()
        X_valid_fold = X_train.iloc[valid_idx].copy()
        Y_valid_fold = Y_train.iloc[valid_idx].copy()

        # Identify numerical and categorical columns
        num_cols = X_train_fold.select_dtypes(include=["int64", "float64"]).columns.tolist()
        # Example only - if you have actual categorical columns, specify them here
        categorical_cols = ['proto', 'service']

        # Preprocess
        X_train_processed, X_valid_processed = preprocess_data(
            X_train_fold, X_valid_fold, num_cols, categorical_cols
        )
        del X_train_fold, X_valid_fold
        gc.collect()

        # Convert your string labels to integer codes
        Y_train_fold = Y_train_fold.astype('category').cat.codes
        Y_valid_fold = Y_valid_fold.astype('category').cat.codes

        # One-hot encode target 
        Y_train_encoded = to_categorical(Y_train_fold, num_classes=CLASSES).astype('float32')
        Y_valid_encoded = to_categorical(Y_valid_fold, num_classes=CLASSES).astype('float32')
        del Y_train_fold, Y_valid_fold
        gc.collect()

        input_size = X_train_processed.shape[1]

        # --------------------------
        #    Model Creation
        # --------------------------

        # Build VAE model
        model = define_vae_classifier_model(
            input_dim=input_size,
            output_dim=CLASSES,
            hidden_sizes=hidden_sizes,
            dropout_rates=dropout_rates,
            latent_dim=latent_dim
        )

        # Compile the model with the suggested optimizer and learning rate

        # Cosine‑decay LR schedule (unchanged)
        # -------------------  compute schedule parameters ------------------
        steps_per_epoch = math.ceil(len(X_train_processed) / BATCHSIZE)
        decay_steps     = steps_per_epoch * EPOCHS
        warmup_steps    = steps_per_epoch * WARM_EPOCHS

        lr_schedule = tf.keras.optimizers.schedules.CosineDecay(
            initial_learning_rate = lr_max,
            decay_steps           = decay_steps,
            alpha                 = ALPHA,
            warmup_target         = lr_max,        # comment out ↴
            warmup_steps          = warmup_steps   # these two lines if you *don’t* want warm-up
        )

        optimizer = tf.keras.optimizers.AdamW(learning_rate=lr_schedule, clipnorm=0.001)

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

        # EarlyStopping and ReduceLROnPlateau
        callbacks = [
            EarlyStopping(
                monitor='val_classification_out_f1_score',
                mode='max',
                patience=EARLY_STOP_EPOCHS,
                restore_best_weights=True
            ),
        LREpochLogger()
        # # Optional: log LR each epoch so you can inspect the curve
        # tf.keras.callbacks.LambdaCallback(
        #     on_epoch_end=lambda epoch, logs: tf.print(
        #         "epoch", epoch + 1, "lr",
        #         optimizer.learning_rate(optimizer.iterations)
        #     )
        # )
        ]

        # Important: pass (X, (X, Y)) so train_step/test_step can see both
        history = model.fit(
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

        # Get the last validation macro F1
        final_macro_f1 = history.history['val_classification_out_f1_score'][-1]
        trial_macro_f1_scores.append(final_macro_f1)

        # ------------------------------
        # Report to Optuna and check for pruning
        # ------------------------------
        # The step here is 'fold_num' so the pruner can compare
        # intermediate values after each fold.
        trial.report(final_macro_f1, step=fold_num)
        if trial.should_prune():
            print(f"Pruning trial at fold {fold_num} with val_f1={final_macro_f1:.4f}")
            raise optuna.exceptions.TrialPruned()
        
        # Clear the output after each fold
        clear_output(wait=True)

        # Clean up for the next fold
        tf.keras.backend.clear_session()
        del model, history, optimizer, callbacks

        del X_train_processed, X_valid_processed, Y_train_encoded, Y_valid_encoded
        gc.collect()

        print(f"Completed fold {fold_num}")

    # Calculate mean and standard deviation of Macro F1 scores across folds
    mean_macro_f1 = np.mean(trial_macro_f1_scores)
    std_macro_f1 = np.std(trial_macro_f1_scores)
    print(
        f"\nTrial ({trial.number}) | Mean Macro F1 Score ± St. Dev. -- "
        f"{mean_macro_f1:.4f} ± {std_macro_f1:.4f}"
    )

    return mean_macro_f1
# --------------------------------------------------------------------
# Main – Optuna study setup (unchanged except study name / DB path)
# --------------------------------------------------------------------
if __name__ == "__main__":
    """
    Main block that sets up the Optuna study for hyperparameter tuning
    of our AutoEncoder-Classifier model via cross-validation.
    """
    STORAGE = f"sqlite:///VAE_db{num_epochs_str}.sqlite3"
    STUDY_NAME = "test-VAE-keras-cv"        # VAE CHANGE

    study = optuna.create_study(
        storage=STORAGE,
        sampler=optuna.samplers.TPESampler(seed=SEED, multivariate=True),
        study_name=STUDY_NAME,
        direction="maximize",
        pruner=optuna.pruners.SuccessiveHalvingPruner(),
        load_if_exists=True
    )
    optuna.storages.fail_stale_trials(study)

    study.optimize(objective_cv, n_trials=70, n_jobs=1, gc_after_trial=True)


    # ----------------------------------------------------------------
    # Save best params + simple report
    # ----------------------------------------------------------------
    # ------------------------------
    # Study statistics and best trial
    # ------------------------------
    pruned_trials = study.get_trials(deepcopy=False, states=[TrialState.PRUNED])
    complete_trials = study.get_trials(deepcopy=False, states=[TrialState.COMPLETE])

    print("Study statistics:")
    print("  Number of finished trials: ", len(study.trials))
    print("  Number of pruned trials: ", len(pruned_trials))
    print("  Number of complete trials: ", len(complete_trials))

    try:
        trial = study.best_trial
        print("Best trial:")
        print("  Value: ", trial.value)

        print("  Params:")
        for key, value in trial.params.items():
            print(f"    {key}: {value}")

        # Save best parameters
        best_params = study.best_params
        with open(f"./{FILE_NAME}/{TUNED_OR_NO}/{CV_RESULT_DIR}/best_params.txt", "w") as f:
            f.write(str(best_params))
        print(best_params)
    except ValueError:
        print("No best trial found.")

tf.keras.backend.clear_session()
import gc
gc.collect()

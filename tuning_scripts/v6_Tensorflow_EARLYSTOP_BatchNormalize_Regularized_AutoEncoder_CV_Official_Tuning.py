#!/usr/bin/env python
# coding: utf-8

# # GPU-IFIED CODE
# ### Can run with or without CUDA

# In[1]:


# Imports
import os
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import shutil
from sklearn.model_selection import train_test_split, RepeatedStratifiedKFold
from sklearn.preprocessing import OneHotEncoder, StandardScaler
from tensorflow.keras.metrics import F1Score
from IPython.display import clear_output

import random


# In[2]:

# --- Force TensorFlow to see only GPU 0 ------------------------
os.environ["CUDA_VISIBLE_DEVICES"] = "0"   # must be set before tf import
# ---------------------------------------------------------------

import tensorflow as tf
from tensorflow import keras
from tensorflow.keras import layers
from tensorflow.keras.callbacks import EarlyStopping, ReduceLROnPlateau
from tensorflow.keras import regularizers


# In[3]:


import optuna
from optuna.trial import TrialState

import math

# --- Keep only GPU 0 visible inside TF -------------------------
gpus = tf.config.list_physical_devices('GPU')
if gpus:
    try:
        tf.config.set_visible_devices(gpus[0], 'GPU')   # hide the rest
        tf.config.experimental.set_memory_growth(gpus[0], True)
    except RuntimeError as e:         # happens if GPUs are already initialised
        print(f"[GPU-setup] {e}")
# ---------------------------------------------------------------

# In[4]:


import warnings
import sklearn.exceptions
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


# In[5]:


# ------------------------------
# Global configuration & seeding
# ------------------------------
SEED = 42
np.random.seed(SEED)
random.seed(SEED)
tf.random.set_seed(SEED)

# ------------------------------
# Global variables
# ------------------------------
FILE_NAME = "AE_Official_No_RFECV_No_PCA_100"  # Changed name from VAE to AE to remove references to VAE
N_FOLDS = 10
CV_RESULT_DIR = "./AE_cv_results"
TUNED_OR_NO = "Tuned_Hyperparameters"  # or "Untuned_Hyperparameters"
N_REPEATS = 3


# In[6]:


BATCHSIZE = 1536
CLASSES = 13
DIR = os.getcwd()
EPOCHS = 100
EARLY_STOP_EPOCHS = 40
WARM_EPOCHS = 3     # linear warm-up (set 0 to disable)
ALPHA       = 1e-3  # final_lr = ALPHA * lr_max
# PATIENCE = 15
# EPOCHS_TO_OUTPUT_PROGRESS = 10
INPUT_SIZE = 83
# N_TRAIN_EXAMPLES = BATCHSIZE * 30
# N_VALID_EXAMPLES = BATCHSIZE * 10
CHECKPOINT_DIR = "keras_checkpoint"
num_epochs = "_100"

# In[7]:


os.makedirs(f"./{FILE_NAME}/{TUNED_OR_NO}/{CV_RESULT_DIR}", exist_ok=True)


# In[8]:


DEVICE = "GPU" if tf.config.list_physical_devices('GPU') else "CPU"
print(DEVICE)


# In[9]:


# ------------------------------
# Load the dataset
# ------------------------------

# Data Manipulation
url = './RT_IOT2022_new.csv'
data = pd.read_csv(url)


# In[10]:


data['service'] = data['service'].replace('-', 'None')
data['proto'] = data['proto'].replace('-', 'None')


# In[11]:


# Dropping the target column
target = data['Attack_type']
data = data.drop(columns = ['Attack_type'])


# In[12]:


# Split the data into train and test
X_train, X_test, Y_train, Y_test = train_test_split(data, target, test_size= 0.2, random_state=SEED, stratify=target)


# In[13]:


# memory-saving
del data
del target

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

# In[14]:


# all_trial_bal_accuracy = []
all_trial_macro_f1_score = []


# In[15]:


import gc


# In[16]:


# Convert labels to one-hot encoded format and float32 dtype
from tensorflow.keras.utils import to_categorical


# In[17]:


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


# In[19]:


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


# In[ ]:


def objective_cv(trial):
    """
    Optuna objective for cross-validation with AutoEncoderClassifier.
    We measure final Macro-F1 on classification as the optimization target.
    """
    # --------------------------
    #    Hyperparameter Suggestion
    # --------------------------
    # Suggest the number of hidden layers
    n_layers = trial.suggest_int("n_layers", 1, 3)
    hidden_sizes = []
    dropout_rates = []
    for i in range(n_layers):
        hs = trial.suggest_int(f"n_units_l{i}", 16, 64)
        dr = trial.suggest_float(f"dropout_l{i}", 0.1, 0.5)
        hidden_sizes.append(hs)
        dropout_rates.append(dr)

    latent_dim = trial.suggest_int("latent_dim", 8, 48)
    
    # Suggest optimizer and learning rate
    # optimizer_name = "AdamW"
    # lr = trial.suggest_float("lr", 1e-4, 1, log=True)
    
    lr_max = trial.suggest_float("lr_max", 1e-4, 3e-2, log=True)  # 0.0001 → 0.03


    # Determine clipnorm based on optimizer
    clipnorm = 0.001

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
        model = define_autoencoder_model(
            input_size=input_size,
            output_size=CLASSES,
            hidden_sizes=hidden_sizes,
            dropout_rates=dropout_rates,
            latent_dim=latent_dim
        )

        # Compile the model with the suggested optimizer and learning rate
        # optimizer = getattr(tf.keras.optimizers, optimizer_name)(
        #     learning_rate=lr, clipnorm=clipnorm
        # )

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


# In[ ]:


# ------------------------------
# Optuna Study (Main)
# ------------------------------
if __name__ == "__main__":
    """
    Main block that sets up the Optuna study for hyperparameter tuning
    of our AutoEncoder-Classifier model via cross-validation.
    """
    STORAGE = f"sqlite:///AE_db{num_epochs}.sqlite3"
    SAMPLER = optuna.samplers.TPESampler(seed=SEED, multivariate=True)
    STUDY_NAME = "test-AE-keras-cv"  # Renamed from VAE to AE

    study = optuna.create_study(
        storage=STORAGE,
        sampler=SAMPLER,
        study_name=STUDY_NAME,
        direction="maximize",
        pruner=optuna.pruners.SuccessiveHalvingPruner(),
        load_if_exists=True
    )
    optuna.storages.fail_stale_trials(study)

    # Optimize with cross-validation
    study.optimize(
        objective_cv,
        n_trials=70,
        n_jobs=1,
        gc_after_trial=True
    )

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


# In[22]:


# Clear session and collect garbage
tf.keras.backend.clear_session()
import gc
gc.collect()


# Cell
# Imports
import os
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import shutil
from sklearn.model_selection import train_test_split, RepeatedStratifiedKFold
from sklearn.preprocessing import OneHotEncoder, StandardScaler
from tensorflow.keras.callbacks import EarlyStopping, ReduceLROnPlateau
from tensorflow.keras import regularizers
# from sklearn.metrics import f1_score
from IPython.display import clear_output
from tensorflow.keras.metrics import F1Score

import random

# Cell
import optuna
from optuna.trial import TrialState


# --- Force TensorFlow to see only GPU 0 ------------------------
os.environ["CUDA_VISIBLE_DEVICES"] = "0"   # must be set before tf import
# ---------------------------------------------------------------

import math

# Cell
import tensorflow as tf
from tensorflow import keras
from tensorflow.keras import layers

# --- Keep only GPU 0 visible inside TF -------------------------
gpus = tf.config.list_physical_devices('GPU')
if gpus:
    try:
        tf.config.set_visible_devices(gpus[0], 'GPU')   # hide the rest
        tf.config.experimental.set_memory_growth(gpus[0], True)
    except RuntimeError as e:         # happens if GPUs are already initialised
        print(f"[GPU-setup] {e}")
# ---------------------------------------------------------------

# Cell
# Set random seeds for reproducibility
SEED = 42
np.random.seed(SEED)
random.seed(SEED)
tf.random.set_seed(SEED)

# Cell
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

warnings.filterwarnings("ignore") # ignores all warnings

# Cell
# # # The flag below controls whether to allow TF32 on matmul. This flag defaults to False
# # # in PyTorch 1.12 and later.
# torch.backends.cuda.matmul.allow_tf32 = True

# # The flag below controls whether to allow TF32 on cuDNN. This flag defaults to True.
# torch.backends.cudnn.allow_tf32 = True

# Cell
# Global variables
FILE_NAME = "FCNN_Official_No_RFECV_No_PCA_100"
N_FOLDS = 10
CV_RESULT_DIR = "./FCNN_cv_results"
TUNED_OR_NO = "Tuned_Hyperparameters"  # or "Untuned_Hyperparameters"
N_REPEATS = 3

# Cell
BATCHSIZE = 1536
CLASSES = 13
EPOCHS = 100
EARLY_STOP_EPOCHS = 40
# PATIENCE = 15
ALPHA       = 1e-3            # final_lr = ALPHA * BASE_LR
WARM_EPOCHS = 3               # 3–5 is typical

CHECKPOINT_DIR = "keras_checkpoint"
num_epochs = "_100"

# N_TRAIN_EXAMPLES = BATCHSIZE * 30
# N_VALID_EXAMPLES = BATCHSIZE * 10

# Cell
os.makedirs(f"./{FILE_NAME}/{TUNED_OR_NO}/{CV_RESULT_DIR}", exist_ok=True)

# Cell
DEVICE = "GPU" if tf.config.list_physical_devices('GPU') else "CPU"
print(DEVICE)

# Cell
# Data Manipulation
url = './RT_IOT2022_new.csv'
data = pd.read_csv(url)

# Cell
# Dropping the target column
target = data['Attack_type']
data = data.drop(columns = ['Attack_type'])

# Cell
# Split the data into train and test
X_train, X_test, Y_train, Y_test = train_test_split(data, target, test_size= 0.2, random_state=SEED, stratify=target)

# Cell
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

# Cell
def define_model(input_size, n_layers, hidden_units, dropout_rates):
    """
    Build a Fully Connected Feedforward Neural Network with the specified hyperparameters,
    including L2 regularization and Batch Normalization.

    Parameters:
    - input_size (int): Number of input features.
    - n_layers (int): Number of hidden layers.
    - hidden_units (list of int): Number of units in each hidden layer.
    - dropout_rates (list of float): Dropout rates for each hidden layer.

    Returns:
    - model (tf.keras.Model): Compiled Keras model.
    """
    model = keras.Sequential()
    model.add(layers.Input(shape=(input_size,)))

    for i in range(n_layers):
        # Dense layer without activation and with L2 regularization
        model.add(layers.Dense(
            hidden_units[i],
            activation=None,  # Activation moved after BatchNorm
            kernel_regularizer=regularizers.l2(1e-4),  # L2 regularization
            use_bias=False  # Disable bias since BatchNorm has offset
        ))
        # Batch Normalization
        model.add(layers.BatchNormalization())
        # Activation
        model.add(layers.Activation('relu'))
        # Dropout
        model.add(layers.Dropout(dropout_rates[i]))

    # Output layer without activation (logits)
    model.add(layers.Dense(
        CLASSES,
        activation=None,  # Keep as logits
    ))

    return model

# Cell
# Convert labels to one-hot encoded format and float32 dtype
from tensorflow.keras.utils import to_categorical

import gc

# Cell
# ----------------------------------------------------------------------------
# Objective Function for a Single Fold
# ----------------------------------------------------------------------------
def objective_fold(
    X_train, Y_train, X_valid, Y_valid, input_size, 
    n_layers, hidden_units, dropout_rates, optimizer
):
    """
    Train and evaluate the model on a single fold.

    Parameters:
    - X_train (np.ndarray): Training features.
    - Y_train (np.ndarray): Training labels (one-hot encoded).
    - X_valid (np.ndarray): Validation features.
    - Y_valid (np.ndarray): Validation labels (one-hot encoded).
    - input_size (int): Number of input features.
    - n_layers (int): Number of hidden layers.
    - hidden_units (list of int): Units per hidden layer.
    - dropout_rates (list of float): Dropout rates per hidden layer.
    - optimizer_name (str): Optimizer to use.
    - lr (float): Learning rate.

    Returns:
    - final_macro_f1 (float): Final validation Macro F1 score.
    """

    # Define the model with the given hyperparameters
    model = define_model(
        input_size=input_size,
        n_layers=n_layers,
        hidden_units=hidden_units,
        dropout_rates=dropout_rates
    )

    # Select and instantiate the optimizer
    # optimizer_class = getattr(tf.keras.optimizers, optimizer_name)
    # optimizer = optimizer_class(learning_rate=lr)

    # Compile the model with Categorical Crossentropy loss
    model.compile(
        optimizer=optimizer,
        loss=tf.keras.losses.CategoricalCrossentropy(from_logits=True),
        metrics=['accuracy', F1Score(average='macro', name='f1_score')]
    )

    # Define callbacks: EarlyStopping and ReduceLROnPlateau
    callbacks = [
        EarlyStopping(
            monitor='val_f1_score',
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

    # Train the model
    history = model.fit(
        X_train,
        Y_train,
        validation_data=(X_valid, Y_valid),
        batch_size=BATCHSIZE,
        epochs=EPOCHS,
        callbacks=callbacks,
        verbose=1
    )

    # Retrieve the last validation Macro F1 Score
    final_macro_f1 = history.history['val_f1_score'][-1]

    # Clean up to free memory
    tf.keras.backend.clear_session()
    del model, history, optimizer, callbacks
    gc.collect()

    return final_macro_f1

# Cell
all_trial_macro_f1_score = []

# Cell
import gc

# Cell
# ----------------------------------------------------------------------------
# Cross-Validation Objective Function
# ----------------------------------------------------------------------------
def objective_cv(trial):
    """
    Optuna objective function for cross-validation with a Fully Connected Feedforward Neural Network.
    It evaluates the mean Macro F1 score across all folds.

    Parameters:
    - trial (optuna.trial.Trial): Optuna trial object.

    Returns:
    - mean_macro_f1 (float): Mean Macro F1 score across folds.
    """
    # --------------------------
    #    Hyperparameter Suggestion
    # --------------------------
    # Suggest the number of hidden layers
    n_layers = trial.suggest_int("n_layers", 1, 3)

    # Suggest the number of units and dropout rates for each hidden layer
    hidden_units = []
    dropout_rates = []
    for i in range(n_layers):
        units = trial.suggest_int(f"n_units_l{i}", 16, 64)
        dropout = trial.suggest_float(f"dropout_l{i}", 0.1, 0.5)
        hidden_units.append(units)
        dropout_rates.append(dropout)

    # Suggest optimizer and learning zate
    # optimizer_name = "AdamW"
    # lr = trial.suggest_float("lr", 1e-4, 1, log=True)
    lr_max = trial.suggest_float("lr_max", 1e-4, 3e-2, log=True)  # 0.0001 → 0.03

    # --------------------------
    #    Initialize Cross-Validation
    # --------------------------
    rskf = RepeatedStratifiedKFold(
        n_splits=N_FOLDS, n_repeats=N_REPEATS, random_state=SEED
    )
    trial_macro_f1_scores = []

    # --------------------------
    #    Cross-Validation Folds
    # --------------------------
    for fold_idx, (train_idx, valid_idx) in enumerate(rskf.split(X_train, Y_train)):
        fold_num = fold_idx + 1
        print(f"Starting fold {fold_num}")

        # Split the data
        X_train_fold = X_train.iloc[train_idx].copy()
        Y_train_fold = Y_train.iloc[train_idx].copy()
        X_valid_fold = X_train.iloc[valid_idx].copy()
        Y_valid_fold = Y_train.iloc[valid_idx].copy()

        # Reset index to ensure consistency
        X_train_fold.reset_index(drop=True, inplace=True)
        X_valid_fold.reset_index(drop=True, inplace=True)
        Y_train_fold.reset_index(drop=True, inplace=True)
        Y_valid_fold.reset_index(drop=True, inplace=True)

        # --------------------------
        #    Data Preprocessing
        # --------------------------
        # Identify numerical and categorical columns
        num_cols = X_train_fold.select_dtypes(include=["int64", "float64"]).columns.tolist()
        categorical_cols = ['proto', 'service']  # Adjust based on your dataset

        # Standardize numerical features
        scaler = StandardScaler()
        X_train_fold[num_cols] = scaler.fit_transform(X_train_fold[num_cols])
        X_valid_fold[num_cols] = scaler.transform(X_valid_fold[num_cols])

        # One-Hot Encode categorical features
        encoder = OneHotEncoder(handle_unknown='ignore', sparse_output=False, dtype=np.float32)
        encoder.fit(X_train_fold[categorical_cols])

        X_train_encoded = encoder.transform(X_train_fold[categorical_cols])
        X_valid_encoded = encoder.transform(X_valid_fold[categorical_cols])

        # Convert to DataFrame for concatenation
        X_train_encoded_df = pd.DataFrame(
            X_train_encoded, columns=encoder.get_feature_names_out()
        )
        X_valid_encoded_df = pd.DataFrame(
            X_valid_encoded, columns=encoder.get_feature_names_out()
        )

        # Drop original categorical columns
        X_train_fold = X_train_fold.drop(categorical_cols, axis=1)
        X_valid_fold = X_valid_fold.drop(categorical_cols, axis=1)

        # Concatenate encoded features
        X_train_fold = pd.concat([X_train_fold, X_train_encoded_df], axis=1).astype('float32')
        X_valid_fold = pd.concat([X_valid_fold, X_valid_encoded_df], axis=1).astype('float32')

        # Encode target variable
        Y_train_fold = Y_train_fold.astype('category').cat.codes
        Y_valid_fold = Y_valid_fold.astype('category').cat.codes

        input_size = X_train_fold.shape[1]

        # Convert to NumPy arrays with correct data types
        X_train_array = X_train_fold.values.astype('float32')
        Y_train_array = Y_train_fold.values
        X_valid_array = X_valid_fold.values.astype('float32')
        Y_valid_array = Y_valid_fold.values

        # One-hot encode the target labels
        Y_train_encoded = to_categorical(Y_train_array, num_classes=CLASSES).astype('float32')
        Y_valid_encoded = to_categorical(Y_valid_array, num_classes=CLASSES).astype('float32')

        # -------------------  compute schedule parameters ------------------
        steps_per_epoch = math.ceil(len(X_train_array) / BATCHSIZE)
        decay_steps     = steps_per_epoch * EPOCHS
        warmup_steps    = steps_per_epoch * WARM_EPOCHS

        lr_schedule = tf.keras.optimizers.schedules.CosineDecay(
            initial_learning_rate = lr_max,
            decay_steps           = decay_steps,
            alpha                 = ALPHA,
            warmup_target         = lr_max,        # comment out ↴
            warmup_steps          = warmup_steps   # these two lines if you *don’t* want warm-up
        )

        optimizer = tf.keras.optimizers.AdamW(learning_rate=lr_schedule)

        # --------------------------
        #    Model Training and Evaluation
        # --------------------------
        final_macro_f1 = objective_fold(
            X_train=X_train_array,
            Y_train=Y_train_encoded,
            X_valid=X_valid_array,
            Y_valid=Y_valid_encoded,
            input_size=input_size,
            n_layers=n_layers,
            hidden_units=hidden_units,
            dropout_rates=dropout_rates,
            optimizer=optimizer,
            # lr=lr
        )
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


        clear_output(wait=True)

        # Clean up to free memory
        del X_train_fold, X_valid_fold, Y_train_fold, Y_valid_fold
        del X_train_array, X_valid_array, Y_train_encoded, Y_valid_encoded
        del encoder, scaler, X_train_encoded_df, X_valid_encoded_df
        gc.collect()

        print(f"Completed fold {fold_num}")

    # --------------------------
    #    Final Evaluation
    # --------------------------
    mean_macro_f1 = np.mean(trial_macro_f1_scores)
    std_macro_f1 = np.std(trial_macro_f1_scores)
    print(
        f"\nTrial ({trial.number}) | Mean Macro F1 Score ± St. Dev. -- "
        f"{mean_macro_f1:.4f} ± {std_macro_f1:.4f}"
    )

    return mean_macro_f1

# Cell
if __name__ == "__main__":
    STORAGE = f"sqlite:///FCNN_db{num_epochs}.sqlite3"
    # Turn off optuna log notes.
    # optuna.logging.set_verbosity(optuna.logging.WARN)
    SAMPLER = optuna.samplers.TPESampler(seed=SEED, multivariate=True)
    STUDY_NAME = "test-FCNN-gpu-cv"
    study = optuna.create_study(storage=STORAGE, 
                                sampler=SAMPLER,
                                study_name=STUDY_NAME, 
                                direction="maximize",
                                pruner=optuna.pruners.SuccessiveHalvingPruner(),
                                load_if_exists=True
                                )
    # study.optimize(objective, n_trials=5, timeout=600)
    optuna.storages.fail_stale_trials(study)
    study.optimize(objective_cv, n_trials=70, n_jobs=1, gc_after_trial=True)
    # study.optimize(objective_cv, n_trials=100, timeout=600, n_jobs=12, )

    pruned_trials = study.get_trials(deepcopy=False, states=[TrialState.PRUNED])
    complete_trials = study.get_trials(deepcopy=False, states=[TrialState.COMPLETE])

    print("Study statistics: ")
    print("  Number of finished trials: ", len(study.trials))
    print("  Number of pruned trials: ", len(pruned_trials))
    print("  Number of complete trials: ", len(complete_trials))

    print("Best trial:")
    trial = study.best_trial

    print("  Value: ", trial.value)

    # results_string = f"The overall mean\u00B1SD of Macro F1 Score is {np.mean(all_trial_macro_f1_score):.4f}\u00B1{np.std(all_trial_macro_f1_score):.4f}\n"
    # # results_string += f"The overall mean\u00B1SD of Balanced Accuracy is {np.mean(all_trial_bal_accuracy):.4f}\u00B1{np.std(all_trial_bal_accuracy):.4f}"
    # results_file_path = f"./{FILE_NAME}/{TUNED_OR_NO}/{CV_RESULT_DIR}/MeanAndSTD-Results/overall_mean_std.txt"
    # print(results_string)
    
    print("  Params: ")
    for key, value in trial.params.items():
        print("    {}: {}".format(key, value))
    
    # Save best parameters
    best_params = study.best_params
    with open(f"./{FILE_NAME}/{TUNED_OR_NO}/{CV_RESULT_DIR}/best_params.txt", "w") as f:
        f.write(str(best_params))
    print(best_params)

# Cell
# Clear session and collect garbage
tf.keras.backend.clear_session()
import gc
gc.collect()


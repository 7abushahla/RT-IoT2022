import os
import gc # garbage collection
import random
import numpy as np
import pandas as pd

from sklearn.model_selection import train_test_split, RepeatedStratifiedKFold
from sklearn.preprocessing import StandardScaler, OneHotEncoder
from sklearn.preprocessing import LabelEncoder
from sklearn.metrics import f1_score
from lightgbm import early_stopping
import lightgbm as lgb
from IPython.display import clear_output

import optuna
from optuna.trial import TrialState


# To fix TQDM Warning:
# https://stackoverflow.com/questions/75349025/vs-code-jupyter-notebook-iprogress-not-found


# gc.collect() # forces garbage collection


# In[5]:


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
# warnings.filterwarnings("ignore", category=sklearn.exceptions.UndefinedMetricWarning)
warnings.filterwarnings("ignore",)


# Random Seed at file level
SEED = 42
np.random.seed(SEED)
random.seed(SEED)

FILE_NAME = 'LightGBM_Official_No_RFECV_No_PCA_100'
N_FOLDS = 10
CV_RESULT_DIR = "./lightgbm_cv_results"
TUNED_OR_NO = "Tuned_Hyperparameters" # or Untuned_Hyperparameters
N_REPEATS = 3

# Ensure directories are created for results
os.makedirs(f"./{FILE_NAME}/{TUNED_OR_NO}/{CV_RESULT_DIR}", exist_ok=True)


# Data Manipulation
url = './RT_IOT2022_new.csv'
data = pd.read_csv(url)

data['service'] = data['service'].replace('-', 'None')
data['proto'] = data['proto'].replace('-', 'None')

# Dropping the target column
target = data['Attack_type']
data = data.drop(columns = ['Attack_type'])

# Split the data into train and test
X_train, X_test, Y_train, Y_test = train_test_split(data, target, test_size= 0.2, random_state=SEED, stratify=target)

# # Encode the target variable
# LE = LabelEncoder()
# target_encoded = LE.fit_transform(target)
# CLASS_LABELS = LE.classes_

# memory-saving
del data
del target

# Custom Macro F1 score metric for multiclass classification
def macro_f1_score(preds, train_data):
    y_true = train_data.get_label()
    num_class = len(np.unique(y_true))

    # Validate the length of preds
    if len(preds) == len(y_true):  # If preds are class indices
        y_pred = preds
    elif len(preds) == len(y_true) * num_class:  # If preds are probabilities
        y_pred = np.argmax(preds.reshape(len(y_true), num_class), axis=1)
    else:
        raise ValueError("Unexpected prediction shape")
    # Reshape preds to (num_instances, num_class)
    y_pred = np.argmax(preds.reshape(-1, num_class), axis=1)

    # Calculate Macro F1 Score
    macro_f1 = f1_score(y_true, y_pred, average='macro')

    return 'macro_f1', macro_f1, True

def objective(trial):
    rskf = RepeatedStratifiedKFold(n_splits=N_FOLDS, n_repeats=N_REPEATS, random_state=SEED)

    param = {
        "objective": "multiclass",
        "verbosity": -1,
        "num_iterations": 100,
        "colsample_bytree": trial.suggest_float("colsample_bytree", 0.1, 1.0),
        "boosting_type": trial.suggest_categorical("boosting_type", ["gbdt", "dart", "goss"]),
        "num_leaves": trial.suggest_int("num_leaves", 2, 1_000),
        "max_depth": trial.suggest_int("max_depth", 1, 100),
        "learning_rate": trial.suggest_float("learning_rate", 1e-8, 1.0, log=True),
        "min_split_gain": trial.suggest_float("min_split_gain", 0, 15),
        "min_child_weight": trial.suggest_float("min_child_weight", 1e-3, 10.0),
        "min_child_samples": trial.suggest_int("min_child_samples", 2, 300),
        "reg_alpha": trial.suggest_float("reg_alpha", 1e-8, 10.0, log=True),
        "reg_lambda": trial.suggest_float("reg_lambda", 1e-8, 10.0, log=True),
        "num_class": len(np.unique(Y_train)),
        "device": "gpu",
        "num_threads": 8,
        "seed": SEED,
        "bagging_seed": SEED,
        "metric": "None"  # Disable the default metrics (e.g., multi_logloss)
    }

    # Handle incompatible parameters
    if param["boosting_type"] == "goss":
        param["subsample"] = 1.0
        param["bagging_fraction"] = 1.0
        param["bagging_freq"] = 0

    if param["boosting_type"] == "dart":
        param["drop_rate"] = trial.suggest_float("drop_rate", 1e-8, 1.0, log=True)
        param["skip_drop"] = trial.suggest_float("skip_drop", 1e-8, 1.0, log=True)
        param["max_drop"] = trial.suggest_int("max_drop", 1, 50)

    if param["boosting_type"] != "goss":
        param["feature_fraction"] = trial.suggest_float("feature_fraction", 0.1, 0.9)
        param["bagging_fraction"] = trial.suggest_float("bagging_fraction", 0.1, 0.9)
        param["bagging_freq"] = trial.suggest_int("bagging_freq", 1, 1_000)

    # Additional parameters
    param["max_bin"] = trial.suggest_int("max_bin", 10, 255)
    param["cat_l2"] = trial.suggest_float("cat_l2", 1e-8, 10.0, log=True)
    param["cat_smooth"] = trial.suggest_float("cat_smooth", 1e-8, 10.0, log=True)
    param["feature_fraction_bynode"] = trial.suggest_float("feature_fraction_bynode", 0.1, 0.9)

    trial_macro_f1_score = []

    for fold_idx, (train_idx, valid_idx) in enumerate(rskf.split(X_train, Y_train)):
        fold_num = fold_idx + 1

        # Split the raw data into training and validation sets for this fold
        X_train_fold = X_train.iloc[train_idx].copy()
        Y_train_fold = Y_train.iloc[train_idx].copy()
        X_valid_fold = X_train.iloc[valid_idx].copy()
        Y_valid_fold = Y_train.iloc[valid_idx].copy()

        # Preprocessing within the fold
        X_train_fold.reset_index(drop=True, inplace=True)
        X_valid_fold.reset_index(drop=True, inplace=True)
        Y_train_fold.reset_index(drop=True, inplace=True)
        Y_valid_fold.reset_index(drop=True, inplace=True)

        # Standardizing numerical features
        num_cols = X_train_fold.select_dtypes(include=["int64", "float64"]).columns
        scaler = StandardScaler()
        X_train_fold[num_cols] = scaler.fit_transform(X_train_fold[num_cols])
        X_valid_fold[num_cols] = scaler.transform(X_valid_fold[num_cols])

        # Encoding target variable (convert to integer labels)
        Y_train_fold = Y_train_fold.astype('category').cat.codes
        Y_valid_fold = Y_valid_fold.astype('category').cat.codes

        # Identify categorical columns to encode
        categorical_cols = ['proto', 'service']

        # Encoding categorical variables using OneHotEncoder
        encoder = OneHotEncoder(handle_unknown='ignore', sparse_output=False)
        encoder.fit(X_train_fold[categorical_cols])

        # Transform both training and validation sets
        X_train_encoded = encoder.transform(X_train_fold[categorical_cols])
        X_valid_encoded = encoder.transform(X_valid_fold[categorical_cols])

        # Convert to DataFrame and reset index
        X_train_encoded_df = pd.DataFrame(X_train_encoded, columns=encoder.get_feature_names_out())
        X_valid_encoded_df = pd.DataFrame(X_valid_encoded, columns=encoder.get_feature_names_out())

        # Drop original categorical columns
        X_train_fold = X_train_fold.drop(categorical_cols, axis=1)
        X_valid_fold = X_valid_fold.drop(categorical_cols, axis=1)

        # Concatenate encoded features
        X_train_fold = pd.concat([X_train_fold, X_train_encoded_df], axis=1)
        X_valid_fold = pd.concat([X_valid_fold, X_valid_encoded_df], axis=1)

        del X_train_encoded_df, X_valid_encoded_df

        # Convert to LightGBM Dataset
        dtrain = lgb.Dataset(X_train_fold, label=Y_train_fold)
        dvalid = lgb.Dataset(X_valid_fold, label=Y_valid_fold, reference=dtrain)

        # Train the model using lgb.train
        model = lgb.train(
            param,
            dtrain,
            valid_sets=[dtrain, dvalid],
            valid_names=['train', 'valid'],
            feval=macro_f1_score,
            callbacks=[early_stopping(stopping_rounds=50), lgb.log_evaluation(50, show_stdv=True)]
        )

        # Predict on validation data
        y_pred = model.predict(X_valid_fold)
        y_pred = np.argmax(y_pred, axis=1)
        del X_train_fold, X_valid_fold

        # Compute metrics
        macro_f1 = f1_score(Y_valid_fold, y_pred, average='macro')
        trial_macro_f1_score.append(macro_f1)

        del Y_train_fold, Y_valid_fold

        # Clean up
        del model
        gc.collect()

    clear_output(wait=True)
    mean_macro_f1 = np.mean(trial_macro_f1_score)
    trial.report(mean_macro_f1, step=N_FOLDS * N_REPEATS)

    # Prune trial if not promising
    if trial.should_prune():
        raise optuna.exceptions.TrialPruned()

    print(f"Trial ({trial.number}) | Mean Macro F1 Score ± St. Dev. -- {mean_macro_f1:.4f} ± {np.std(trial_macro_f1_score):.4f}")

    return mean_macro_f1

if __name__ == "__main__":
    STORAGE = "sqlite:///lightgbm_db_100.sqlite3"
    # Turn off optuna log notes.
    # optuna.logging.set_verbosity(optuna.logging.WARN)
    SAMPLER = optuna.samplers.TPESampler(seed=SEED, multivariate=True)
    STUDY_NAME = "test-lightgbm-gpu-cv"
    study = optuna.create_study(storage=STORAGE, 
                                sampler=SAMPLER,
                                study_name=STUDY_NAME, 
                                direction="maximize",
                                pruner=optuna.pruners.SuccessiveHalvingPruner(),
                                load_if_exists=True
                                )

    # Optimizing for Macro F1-score
    # study.optimize(objective, n_trials=10_000, timeout=600, n_jobs=4)
    optuna.storages.fail_stale_trials(study)
    study.optimize(objective, n_trials=70, n_jobs=1, gc_after_trial=True)
    # study.optimize(objective, n_trials=16, n_jobs=1, gc_after_trial=True)
    # need 26 to get 100 trials completed

    pruned_trials = study.get_trials(deepcopy=False, states=[TrialState.PRUNED])
    complete_trials = study.get_trials(deepcopy=False, states=[TrialState.COMPLETE])

    print("Study statistics: ")
    print("  Number of finished trials: ", len(study.trials))
    print("  Number of pruned trials: ", len(pruned_trials))
    print("  Number of complete trials: ", len(complete_trials))

    print("Best trial:")
    trial = study.best_trial

    print("  Value: ", trial.value)

    print("  Params: ")
    for key, value in trial.params.items():
        print("    {}: {}".format(key, value))

    # Save best parameters
    best_params = study.best_params
    with open(f"./{FILE_NAME}/{TUNED_OR_NO}/{CV_RESULT_DIR}/best_params.txt", "w") as f:
        f.write(str(best_params))
    print(best_params)

print("     Param importance:")
optuna.importance.get_param_importances(study,)


trial.params.items()


# optuna.importance.get_param_importances(study,)

gc.collect() # forces garbage collection
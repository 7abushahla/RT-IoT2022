# %% Cell 1
import os
import shutil
import gc # garbage collection
import random
import numpy as np
import pandas as pd
import seaborn as sns
import matplotlib.pyplot as plt

from sklearn.model_selection import train_test_split, RepeatedStratifiedKFold
from sklearn.preprocessing import StandardScaler, OneHotEncoder
from sklearn.preprocessing import LabelEncoder
from sklearn.compose import ColumnTransformer
from sklearn.metrics import balanced_accuracy_score, f1_score, classification_report, confusion_matrix, roc_curve, auc
from sklearn.svm import SVC
from IPython.display import clear_output

# %% Cell 2
import optuna
from optuna.trial import TrialState

# %% Cell 3
print(optuna.__version__)

# %% Cell 4
# To fix TQDM Warning:
# https://stackoverflow.com/questions/75349025/vs-code-jupyter-notebook-iprogress-not-found

# %% Cell 5
# gc.collect() # forces garbage collection

# %% Cell 6
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

# %% Cell 7
# Random Seed at file level
SEED = 42
np.random.seed(SEED)
random.seed(SEED)

# Experiment Configuration
FILE_NAME = 'SVC_No_RFECV_No_PCA_rbf_only'
N_FOLDS = 10
CV_RESULT_DIR = "./svm_cv_results"
TUNED_OR_NO = "Tuned_Hyperparameters"  # or "Untuned_Hyperparameters"
N_REPEATS = 3

# %% Cell 8
# Ensure directories are created for results
os.makedirs(f"./{FILE_NAME}/{TUNED_OR_NO}/{CV_RESULT_DIR}", exist_ok=True)

# %% Cell 9
# Data Manipulation
url = './RT_IOT2022_new.csv'
data = pd.read_csv(url)

# %% Cell 10
# Replace '-' with 'None' in categorical columns
data['service'] = data['service'].replace('-', 'None')
data['proto'] = data['proto'].replace('-', 'None')

# %% Cell 11
# Dropping the target column
target = data['Attack_type']
data = data.drop(columns = ['Attack_type'])

# %% Cell 12
# Split the data into train and test
X_train, X_test, Y_train, Y_test = train_test_split(data, target, test_size= 0.2, random_state=SEED, stratify=target)

# %% Cell 13
# memory-saving
del data
del target

# %% Cell 14
def macro_f1_score(y_true, y_pred):
    """
    Computes the macro F1 score for multiclass classification.
    
    Parameters:
        y_true (array-like): True class labels.
        y_pred (array-like): Predicted class labels.

    Returns:
        float: Macro F1 score.
    """
    return f1_score(y_true, y_pred, average='macro')

# %% Cell 15
def objective(trial):
    # Define cross-validation strategy
    rskf = RepeatedStratifiedKFold(n_splits=N_FOLDS, n_repeats=N_REPEATS, random_state=SEED)
    
    # Define hyperparameter space
    C = trial.suggest_loguniform('C', 1e-4, 1e4)
    kernel = 'rbf'
    # degree = trial.suggest_int('degree', 1, 5) if kernel == 'poly' else 3
    # gamma = trial.suggest_loguniform('gamma', 1e-10, 1e5)

    # ----- kernel-specific parameters -----
    if kernel == "rbf":
        gamma = trial.suggest_loguniform('gamma', 1e-4, 1e4)
        degree = 3                      # this is the default
    
    # SVM model
    model = SVC(C=C, kernel=kernel, degree=degree, gamma=gamma, random_state=SEED, max_iter=100)
    
    # Lists to store metrics
    trial_macro_f1_score = []
    
    # Iterate over each fold
    for fold_idx, (train_idx, valid_idx) in enumerate(rskf.split(X_train, Y_train)):
        # fold_num = fold_idx + 1
        
        # print(f"Trial {trial.number}: Starting Fold {fold_num}/{N_FOLDS * N_REPEATS}")
        
        # Split the raw data into training and validation sets for this fold
        X_train_fold = X_train.iloc[train_idx].copy()
        Y_train_fold = Y_train.iloc[train_idx].copy()
        X_valid_fold = X_train.iloc[valid_idx].copy()
        Y_valid_fold = Y_train.iloc[valid_idx].copy()
        
        # Preprocessing within the fold
        # Reset index to ensure alignment
        X_train_fold.reset_index(drop=True, inplace=True)
        X_valid_fold.reset_index(drop=True, inplace=True)
        Y_train_fold.reset_index(drop=True, inplace=True)
        Y_valid_fold.reset_index(drop=True, inplace=True)
        
        # Standardizing numerical features
        num_cols = X_train_fold.select_dtypes(include=["int64", "float64"]).columns
        
        # Initialize the scaler
        scaler = StandardScaler()
        
        # Fit the scaler on the training data
        X_train_fold[num_cols] = scaler.fit_transform(X_train_fold[num_cols])
        
        # Transform the validation data
        X_valid_fold[num_cols] = scaler.transform(X_valid_fold[num_cols])
        
        # Encode the target variable (convert to integer labels)
        Y_train_fold = Y_train_fold.astype('category').cat.codes
        Y_valid_fold = Y_valid_fold.astype('category').cat.codes

        # Identify categorical columns to encode
        categorical_cols = ['proto', 'service']
        
        # Encoding categorical variables using OneHotEncoder
        encoder = OneHotEncoder(handle_unknown='ignore', sparse_output=False)  # Updated parameter
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
        
        # Cleanup to free memory
        del X_train_encoded_df, X_valid_encoded_df, encoder
        
        # Train the RandomForest model
        model.fit(X_train_fold, Y_train_fold)
        
        # Predict on validation data
        y_pred = model.predict(X_valid_fold)
        
        # Compute metrics
        macro_f1 = macro_f1_score(Y_valid_fold, y_pred)
        trial_macro_f1_score.append(macro_f1)
        
        # print(f"Trial {trial.number}: Fold {fold_num} Macro F1 Score = {macro_f1:.4f}")
        
        # Clean up to free memory
        del X_train_fold, X_valid_fold, scaler, y_pred
        del Y_train_fold, Y_valid_fold

        gc.collect()
    
    del model
    clear_output(wait=True)
    
    # Compute average metrics across all folds
    mean_macro_f1 = np.mean(trial_macro_f1_score)

    trial.report(mean_macro_f1, step=N_FOLDS * N_REPEATS)

    # Check if trial should be pruned
    if trial.should_prune():
        raise optuna.exceptions.TrialPruned()
    
    print(f"Trial ({trial.number}) | Mean Macro F1 Score ± St. Dev. -- {mean_macro_f1:.4f} ± {np.std(trial_macro_f1_score):.4f}")

    
    return mean_macro_f1

# %% Cell 16
if __name__ == "__main__":
    STORAGE = "sqlite:///svm_db_rbf_only.sqlite3"
    SAMPLER = optuna.samplers.TPESampler(seed=SEED, multivariate=True)
    STUDY_NAME = "svm-hyperparameter-tuning"
    
    study = optuna.create_study(
        storage=STORAGE, 
        sampler=SAMPLER,
        study_name=STUDY_NAME, 
        direction="maximize",
        pruner=optuna.pruners.SuccessiveHalvingPruner(),
        load_if_exists=True  # Change to False if starting fresh
    )
    
    # Handle stale trials
    optuna.storages.fail_stale_trials(study)
    
    # Optimize
    study.optimize(objective, n_trials=70, n_jobs=1, gc_after_trial=True)

    # Retrieve pruned and complete trials
    pruned_trials = study.get_trials(deepcopy=False, states=[TrialState.PRUNED])
    complete_trials = study.get_trials(deepcopy=False, states=[TrialState.COMPLETE])

    # Print study statistics
    print("Study statistics: ")
    print("  Number of finished trials: ", len(study.trials))
    print("  Number of pruned trials: ", len(pruned_trials))
    print("  Number of complete trials: ", len(complete_trials))

    # Print the best trial
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
    print("Best Parameters Saved:")
    print(best_params)


# %% Cell 17
print("     Param importance:")
optuna.importance.get_param_importances(study,)

# %% Cell 18
trial.params.items()

# %% Cell 19
# optuna.importance.get_param_importances(study,)

# %% Cell 20
gc.collect() # forces garbage collection


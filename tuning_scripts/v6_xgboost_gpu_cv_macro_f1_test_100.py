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
import xgboost as xgb
from xgboost import XGBClassifier
from IPython.display import clear_output

import optuna
from optuna.trial import TrialState

# To fix TQDM Warning:
# https://stackoverflow.com/questions/75349025/vs-code-jupyter-notebook-iprogress-not-found

# gc.collect() # forces garbage collection

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

FILE_NAME = 'XGBoost_Official_No_RFECV_No_PCA'
N_FOLDS = 10
CV_RESULT_DIR = "./xgboost_cv_results"
TUNED_OR_NO = "Tuned_Hyperparameters" # or Untuned_Hyperparameters
N_REPEATS = 3

# Ensure directories are created for results
os.makedirs(f"./{FILE_NAME}/{TUNED_OR_NO}/{CV_RESULT_DIR}", exist_ok=True)

# Data Manipulation
url = './RT_IOT2022_new.csv'
data = pd.read_csv(url)

# Replace '-' with 'None' in categorical columns
data['service'] = data['service'].replace('-', 'None')
data['proto'] = data['proto'].replace('-', 'None')

# Dropping the target column
target = data['Attack_type']
data = data.drop(columns = ['Attack_type'])

# Split the data into train and test
X_train, X_test, Y_train, Y_test = train_test_split(data, target, test_size= 0.2, random_state=SEED, stratify=target)

# memory-saving
del data
del target

# Custom Macro F1 score metric for multiclass classification
def macro_f1_score(preds, dtrain):
    y_true = dtrain.get_label()
    y_pred = np.argmax(preds, axis=1)
    f1 = f1_score(y_true, y_pred, average='macro')
    return 'macro-f1-score', f1

def objective(trial):

    rskf = RepeatedStratifiedKFold(n_splits=N_FOLDS, n_repeats=N_REPEATS, random_state=SEED)
    
    # dtrain = xgb.DMatrix(X_train, label=Y_train)    

    param = {
	"num_boost_round": 100,
        "verbosity": 0,
        "objective": "multi:softprob",
        # "eval_metric": ['merror','mlogloss'],
        "booster": trial.suggest_categorical("booster", ["gbtree", "gblinear", "dart"]),
        "lambda": trial.suggest_float("lambda", 1e-8, 1.0, log=True),
        "alpha": trial.suggest_float("alpha", 1e-8, 1.0, log=True),
        "device": "cuda",
        "n_jobs": -1,
        "num_class": len(np.unique(Y_train)),
        # sampling ratio for training data.
        "subsample": trial.suggest_float("subsample", 0.2, 1.0),
        # sampling according to each tree.
        "colsample_bytree": trial.suggest_float("colsample_bytree", 0.2, 1.0),
        "seed" : SEED
    }

    if param["booster"] == "gbtree" or param["booster"] == "dart":
        param["max_depth"] = trial.suggest_int("max_depth", 1, 50)
        # param["max_depth"] = trial.suggest_int("max_depth", 1, 200)
        # minimum child weight, larger the term more conservative the tree.
        param["min_child_weight"] = trial.suggest_int("min_child_weight", 2, 300)
        # param["min_child_weight"] = trial.suggest_int("min_child_weight", 2, 300)
        param["eta"] = trial.suggest_float("eta", 1e-8, 1.0, log=True)
        param["gamma"] = trial.suggest_float("gamma", 1e-8, 1.0, log=True)
        param["grow_policy"] = trial.suggest_categorical("grow_policy", ["depthwise", "lossguide"])

    if param["booster"] == "dart":
        param["sample_type"] = trial.suggest_categorical("sample_type", ["uniform", "weighted"])
        param["normalize_type"] = trial.suggest_categorical("normalize_type", ["tree", "forest"])
        param["rate_drop"] = trial.suggest_float("rate_drop", 1e-8, 1.0, log=True)
        param["skip_drop"] = trial.suggest_float("skip_drop", 1e-8, 1.0, log=True)

    # pruning_callback = optuna.integration.XGBoostPruningCallback(trial, 'validation-macro-f1-score')
    # Initialize the model
    model = XGBClassifier(**param)

    # Lists to store metrics
    trial_macro_f1_score = []
    # trial_bal_accuracy = []


    for fold_idx, (train_idx, valid_idx) in enumerate(rskf.split(X_train, Y_train)):
        fold_num = fold_idx + 1
        
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
        
        # Convert data to DMatrix
        dtrain = xgb.DMatrix(X_train_fold, label=Y_train_fold)
        dvalid = xgb.DMatrix(X_valid_fold, label=Y_valid_fold)
        
        # Set up evals and evals_result
        evals = [(dtrain, 'train'), (dvalid, 'validation')]
        evals_result = {}    
        del X_train_fold, X_valid_fold
        clear_output(wait=True)
        
        # Train the model
        model = xgb.train(
            params=param,
            dtrain=dtrain,
            evals=evals,
            early_stopping_rounds=50,
            # feval=macro_f1_score,
	    custom_metric=macro_f1_score,        # << replaces feval=
            evals_result=evals_result,
            verbose_eval=True,
            # callbacks=[pruning_callback]
        )
        
        # Predict on validation data
        y_pred_probs = model.predict(dvalid)
        y_pred = np.argmax(y_pred_probs, axis=1)
        
        # Compute metrics
        macro_f1 = f1_score(Y_valid_fold, y_pred, average='macro')
        trial_macro_f1_score.append(macro_f1)
        
        del Y_train_fold, Y_valid_fold
        
        # Clean up
        del dtrain, dvalid, model
        gc.collect()
        # trial_bal_accuracy.append(bal_acc)
    clear_output(wait=True)
    
    # Extract the best score.
    # print("\n-------------------------====================-------------------------\n")
    # print(f"Trial Number {trial.number} :- xgb_cv_results --> {xgb_cv_results}")

    # print("\n-------------------------====================-------------------------\n")
    # print(f"Trial Number {trial.number} :- xgb_cv_results.values --> {xgb_cv_results.values}")
    # print("\n-------------------------====================-------------------------\n")
    # print(f"Trial Number {trial.number} :- xgb_cv_results.values[-1] --> {xgb_cv_results.values[-1]}")
    # print("\n-------------------------====================-------------------------\n")
    # print(f"Trial Number {trial.number} :- xgb_cv_results['test-macro-f1-score'].values[-1] --> {xgb_cv_results['test-macro-f1-score-mean'].values[-1]}")
    # print("\n-------------------------====================-------------------------\n")
    # test-macro-f1-score-mean  
    # test-macro-f1-score-std  
    # Compute average metrics across folds
    mean_macro_f1 = np.mean(trial_macro_f1_score)
    trial.report(mean_macro_f1, step=N_FOLDS * N_REPEATS)
    
    # Prune trial if not promising
    if trial.should_prune():
        raise optuna.exceptions.TrialPruned()
    
    print(f"Trial ({trial.number}) | Mean Macro F1 Score ± St. Dev. -- {np.mean(trial_macro_f1_score):.4f} ± {np.std(trial_macro_f1_score):.4f}")
    
    return mean_macro_f1

# %%
if __name__ == "__main__":
    STORAGE = "sqlite:///xgboost_db.sqlite3"
    # Turn off optuna log notes.
    # optuna.logging.set_verbosity(optuna.logging.WARN)
    SAMPLER = optuna.samplers.TPESampler(seed=SEED, multivariate=True)
    STUDY_NAME = "test-xgboost-gpu-cv"
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
    # results_string += f"The overall mean\u00B1SD of Balanced Accuracy is {np.mean(all_trial_bal_accuracy):.4f}\u00B1{np.std(all_trial_bal_accuracy):.4f}"
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

# %%
print("     Param importance:")
optuna.importance.get_param_importances(study,)

# %%
trial.params.items()

# %%
# optuna.importance.get_param_importances(study,)

# %%
gc.collect() # forces garbage collection


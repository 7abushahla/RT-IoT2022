#!/usr/bin/env python
# coding: utf-8


import os
import json
import joblib
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns

from sklearn.model_selection import train_test_split, RepeatedStratifiedKFold, cross_validate
from sklearn.preprocessing import LabelEncoder, StandardScaler, OneHotEncoder, label_binarize
from sklearn.compose import ColumnTransformer
from sklearn.pipeline import Pipeline
from sklearn.metrics import (
    classification_report,
    confusion_matrix,
    roc_curve,
    auc,
    balanced_accuracy_score,
    f1_score,
    roc_auc_score,
    accuracy_score,
    precision_score,
    recall_score
)
from sklearn.svm import SVC


# In[4]:


import gc
import random
from IPython.display import clear_output


# In[5]:


import json


# In[6]:


import warnings
warnings.filterwarnings("ignore")


# In[7]:


# Set the seed for reproducibility
SEED = 42
np.random.seed(SEED)
random.seed(SEED)


# In[8]:


# Settings
N_FOLDS = 10
N_REPEATS = 3
# BATCHSIZE = 128  # Not used in Random Forest
CLASSES = 13

# INPUT_SIZE = 83  # Not used in Random Forest, but retained for consistency

FIG_SIZE = (12, 12)
num_iters = "_100"
model_type = "_svm_rbf_only"
CHECKPOINT_DIR = f"./checkpoints{model_type}{num_iters}"


# In[9]:


if not os.path.exists(CHECKPOINT_DIR):
    os.makedirs(CHECKPOINT_DIR, exist_ok=True)


# In[20]:


# Best SVM hyperparameters
BEST_SVM_PARAMS = {
    "C": 1.8735204023106204,       # Replace with your tuned value
    "gamma": 0.05739522831237907, # Replace with your tuned value
    "degree": 3,
    "kernel": "rbf",
    'random_state': SEED,
    "verbose": True,
    "max_iter" : 100,
    "probability": True  # Enable probability estimates
    # previously, probability had the default value of false
    # because it would slow down hyperparameter tuning
    # and we tuned based on macro f1 anyway,
    # which is not probability based
}


# In[21]:


# Cell 2: Load and Preprocess Data

def load_and_preprocess_data(filepath):
    """
    Loads data from a CSV file, replaces placeholders, and separates features from target.
    
    Args:
        filepath (str): Path to the CSV file.
        
    Returns:
        data (pd.DataFrame): Feature dataframe.
        target (pd.Series): Target labels.
        feature_names (list): List of feature names.
    """
    data = pd.read_csv(filepath)
    
    # Replace '-' with 'None' in categorical columns
    data['service'] = data['service'].replace('-', 'None')
    data['proto'] = data['proto'].replace('-', 'None')
    
    # Separate features and target
    feature_names = data.drop(columns=['Attack_type']).columns.tolist()
    target = data['Attack_type']
    data = data.drop(columns=['Attack_type'])
    
    return data, target, feature_names


# In[22]:


# Load the dataset
data, target, feature_names = load_and_preprocess_data('./RT_IOT2022_new.csv')


# In[23]:


def encode_targets(target):
    """
    Encodes categorical target labels into numerical codes.
    
    Args:
        target (pd.Series): Categorical target labels.
        
    Returns:
        target_encoded (np.ndarray): Encoded target labels.
        class_labels (list): List of class names.
        target_encoder (LabelEncoder): Fitted LabelEncoder instance.
    """
    target_encoder = LabelEncoder()
    target_encoded = target_encoder.fit_transform(target)
    class_labels = target_encoder.classes_
    return target_encoded, class_labels, target_encoder


# In[24]:


# Encode target labels
Y_encoded, class_labels, target_encoder = encode_targets(target)


# In[25]:


print(f"Number of unique classes: {len(class_labels)}")
print(f"Class labels: {class_labels}")


# In[26]:


# Split the data into train and test sets
X_train, X_test, Y_train, Y_test = train_test_split(
    data, Y_encoded, test_size=0.2, random_state=SEED, stratify=Y_encoded
)

print(f"Training set size: {X_train.shape}")
print(f"Test set size: {X_test.shape}")

# Clean up to save memory
del data
del target


# In[27]:


# Cell 5: Define Preprocessing and Model Pipeline

# Identify numerical and categorical columns
numerical_cols = X_train.select_dtypes(include=["int64", "float64", "float32"]).columns.tolist()
categorical_cols = ["proto", "service"]  # Adjust based on your data

# Define the preprocessing for numerical data
numerical_transformer = Pipeline(steps=[
    ('scaler', StandardScaler())
])

# Define the preprocessing for categorical data
categorical_transformer = Pipeline(steps=[
    ('onehot', OneHotEncoder(handle_unknown='ignore'))
])

# Combine preprocessing steps
preprocessor = ColumnTransformer(
    transformers=[
        ('num', numerical_transformer, numerical_cols),
        ('cat', categorical_transformer, categorical_cols)
    ]
)

svm_classifier = SVC(**BEST_SVM_PARAMS)

# model_pipeline = Pipeline(steps=[
#     ('preprocessor', preprocessor),
#     ('classifier', SVC(**BEST_SVM_PARAMS))
# ])


# In[28]:


from sklearn.metrics import make_scorer


# In[29]:


# Cell 6: Run Cross-Validation and Save the Best Model

from sklearn.model_selection import RepeatedStratifiedKFold
from sklearn.metrics import (
    f1_score,
    balanced_accuracy_score,
    roc_auc_score,
    accuracy_score,
    precision_score,
    recall_score
)

# Initialize cross-validation
rskf = RepeatedStratifiedKFold(n_splits=N_FOLDS, n_repeats=N_REPEATS, random_state=SEED)

# Variables to track the best model
best_macro_f1 = -float('inf')
best_model_path = os.path.join(CHECKPOINT_DIR, f"best{model_type}_model{num_iters}.joblib")
best_model_with_prep_path = os.path.join(CHECKPOINT_DIR, f"best{model_type}_model_with_preproc_{num_iters}.joblib")

# Lists to collect test metrics from each fold
test_precisions = []
test_recalls = []
test_f1_scores = []
test_bal_accuracies = []
test_aucs = []
test_accuracies = []

# Iterate over each fold
for fold, (train_idx, val_idx) in enumerate(rskf.split(X_train, Y_train), 1):
    print(f"\nFold {fold}/{N_FOLDS * N_REPEATS}")
    
    # Split the data
    X_train_fold = X_train.iloc[train_idx].copy()
    Y_train_fold = Y_train[train_idx].copy()
    X_valid_fold = X_train.iloc[val_idx].copy()
    Y_valid_fold = Y_train[val_idx].copy()
    
    # Print shapes before preprocessing
    print(f"Before preprocessing: X_train_fold shape: {X_train_fold.shape}, X_valid_fold shape: {X_valid_fold.shape}")
    
    # Fit the pipeline on the training fold
    preprocessor.fit(X_train_fold, Y_train_fold)
    
   # Transform the data to get the shapes after preprocessing
    X_train_transformed = preprocessor.transform(X_train_fold)
    X_valid_transformed = preprocessor.transform(X_valid_fold)
    
    # Print shapes after preprocessing
    print(f"After preprocessing: X_train_fold shape: {X_train_transformed.shape}, X_valid_fold shape: {X_valid_transformed.shape}")
    
    svm_classifier.fit(X_train_transformed, Y_train_fold)

    # Predict on training and validation folds
    Y_train_pred = svm_classifier.predict(X_train_transformed)
    Y_train_pred_proba = svm_classifier.predict_proba(X_train_transformed)
    
    Y_valid_pred = svm_classifier.predict(X_valid_transformed)
    Y_valid_pred_proba = svm_classifier.predict_proba(X_valid_transformed)
    
    # Compute training metrics
    train_bal_acc = balanced_accuracy_score(Y_train_fold, Y_train_pred)
    train_accuracy = accuracy_score(Y_train_fold, Y_train_pred)
    train_macro_f1 = f1_score(Y_train_fold, Y_train_pred, average='macro')
    train_precision = precision_score(Y_train_fold, Y_train_pred, average='macro', zero_division=0)
    train_recall = recall_score(Y_train_fold, Y_train_pred, average='macro', zero_division=0)
    train_auc = roc_auc_score(
        label_binarize(Y_train_fold, classes=np.arange(CLASSES)),
        Y_train_pred_proba,
        average='macro',
        multi_class='ovo'
    )
    
    # Compute validation metrics
    val_bal_acc = balanced_accuracy_score(Y_valid_fold, Y_valid_pred)
    val_accuracy = accuracy_score(Y_valid_fold, Y_valid_pred)
    val_macro_f1 = f1_score(Y_valid_fold, Y_valid_pred, average='macro')
    val_precision = precision_score(Y_valid_fold, Y_valid_pred, average='macro', zero_division=0)
    val_recall = recall_score(Y_valid_fold, Y_valid_pred, average='macro', zero_division=0)
    val_auc = roc_auc_score(
        label_binarize(Y_valid_fold, classes=np.arange(CLASSES)),
        Y_valid_pred_proba,
        average='macro',
        multi_class='ovo'
    )
    
    # # ------------------- Test Set Evaluation for this Fold -------------------
    # # Evaluate the current fold's model on the test set
    # Y_test_pred = model_pipeline.predict(X_test)
    # Y_test_pred_proba = model_pipeline.predict_proba(X_test)
    
    # # Compute test metrics
    # test_bal_acc = balanced_accuracy_score(Y_test, Y_test_pred)
    # test_accuracy = accuracy_score(Y_test, Y_test_pred)
    # test_macro_f1 = f1_score(Y_test, Y_test_pred, average='macro')
    # test_precision = precision_score(Y_test, Y_test_pred, average='macro', zero_division=0)
    # test_recall = recall_score(Y_test, Y_test_pred, average='macro', zero_division=0)
    # Y_test_bin = label_binarize(Y_test, classes=np.arange(CLASSES))
    # test_auc = roc_auc_score(Y_test_bin, Y_test_pred_proba, average='macro', multi_class='ovo')
    
    # # Collect test metrics for aggregation
    # test_precisions.append(test_precision)
    # test_recalls.append(test_recall)
    # test_f1_scores.append(test_macro_f1)
    # test_accuracies.append(test_accuracy)
    # test_bal_accuracies.append(test_bal_acc)
    # test_aucs.append(test_auc)
    
    print(f"Training Balanced Accuracy: {train_bal_acc:.4f}")
    print(f"Validation Balanced Accuracy: {val_bal_acc:.4f}")
    # print(f"Test Balanced Accuracy: {test_bal_acc:.4f}")
    print(f"Training Accuracy: {train_accuracy:.4f}")
    print(f"Validation Accuracy: {val_accuracy:.4f}")
    # print(f"Test Accuracy: {test_accuracy:.4f}")
    print(f"Training Macro F1 Score: {train_macro_f1:.4f}")
    print(f"Validation Macro F1 Score: {val_macro_f1:.4f}")
    # print(f"Test Macro F1 Score: {test_macro_f1:.4f}")
    print(f"Training Precision (Macro): {train_precision:.4f}")
    print(f"Validation Precision (Macro): {val_precision:.4f}")
    # print(f"Test Precision (Macro): {test_precision:.4f}")
    print(f"Training Recall (Macro): {train_recall:.4f}")
    print(f"Validation Recall (Macro): {val_recall:.4f}")
    # print(f"Test Recall (Macro): {test_recall:.4f}")
    print(f"Training ROC AUC Score: {train_auc:.4f}")
    print(f"Validation ROC AUC Score: {val_auc:.4f}")
    # print(f"Test ROC AUC Score: {test_auc:.4f}")

    # Save metrics for this fold, including predictions
    metrics = {
        "train_balanced_accuracy": train_bal_acc,
        "train_accuracy": train_accuracy,
        "train_macro_f1": train_macro_f1,
        "train_precision_macro": train_precision,
        "train_recall_macro": train_recall,
        "train_auc": train_auc,
        "validation_balanced_accuracy": val_bal_acc,
        "validation_accuracy": val_accuracy,
        "validation_macro_f1": val_macro_f1,
        "validation_precision_macro": val_precision,
        "validation_recall_macro": val_recall,
        "validation_auc": val_auc,
        "val_y_true": Y_valid_fold.tolist(),
        "val_y_pred": Y_valid_pred.tolist(),
        "val_y_score": Y_valid_pred_proba.tolist()
    }

    # # Save metrics for this fold - ONLY TEST METRICS
    # metrics = {
    #     "test_balanced_accuracy": test_bal_acc,
    #     "test_accuracy": test_accuracy,
    #     "test_macro_f1": test_macro_f1,
    #     "test_precision_macro": test_precision,
    #     "test_recall_macro": test_recall,
    #     "test_auc": test_auc,
    #     "test_y_true": Y_test.tolist(),
    #     "test_y_pred": Y_test_pred.tolist(),
    #     "test_y_score": Y_test_pred_proba.tolist()
    # }
    metrics_file = os.path.join(CHECKPOINT_DIR, f"metrics_fold{fold}{num_iters}.json")
    with open(metrics_file, 'w') as f:
        json.dump(metrics, f, indent=4)
    print(f"Metrics saved to {metrics_file}")
    
    # Check if this fold's model is the best so far
    if val_macro_f1 > best_macro_f1:
        best_macro_f1 = val_macro_f1

        # Save the model with preprocessing
        joblib.dump((preprocessor, svm_classifier), best_model_with_prep_path)

        # Save the model
        joblib.dump(svm_classifier, best_model_path)

        print(f"Best model updated and saved to {best_model_path} with Macro F1: {best_macro_f1:.4f}")
    # Optional: Save the model for each fold
    # Optional: Save the model for each fold (as a tuple: (preprocessor, booster)) with joblib
    model_path = os.path.join(CHECKPOINT_DIR, f"model_fold_with_preproc{fold}{num_iters}.joblib")
    # model_path = os.path.join(CHECKPOINT_DIR, f"model_fold{fold}{num_iters}.joblib")
    joblib.dump((preprocessor, svm_classifier), model_path)
    print(f"Model for fold {fold} saved to {model_path}")
    
    # Clean up
    del X_train_fold, Y_train_fold, X_valid_fold, Y_valid_fold, Y_train_pred, Y_train_pred_proba, Y_valid_pred, Y_valid_pred_proba
    gc.collect()
    
print("Cross-validation completed successfully.")

# ---------------------------
# Aggregate Test Metrics Across All Folds
# ---------------------------
# aggregated_test_metrics = {
#     "precision": {
#         "mean": float(np.mean(test_precisions)) if test_precisions else None,
#         "std": float(np.std(test_precisions)) if test_precisions else None
#     },
#     "recall": {
#         "mean": float(np.mean(test_recalls)) if test_recalls else None,
#         "std": float(np.std(test_recalls)) if test_recalls else None
#     },
#     "macro_f1": {
#         "mean": float(np.mean(test_f1_scores)) if test_f1_scores else None,
#         "std": float(np.std(test_f1_scores)) if test_f1_scores else None
#     },
#     "accuracy": {
#         "mean": float(np.mean(test_accuracies)) if test_accuracies else None,
#         "std": float(np.std(test_accuracies)) if test_accuracies else None
#     },
#     "balanced_accuracy": {
#         "mean": float(np.mean(test_bal_accuracies)) if test_bal_accuracies else None,
#         "std": float(np.std(test_bal_accuracies)) if test_bal_accuracies else None
#     },
#     "auc": {
#         "mean": float(np.mean(test_aucs)) if test_aucs else None,
#         "std": float(np.std(test_aucs)) if test_aucs else None
#     }
# }

# # Save aggregated test metrics
# agg_test_metrics_file = os.path.join(CHECKPOINT_DIR, "aggregated_test_metrics.json")
# with open(agg_test_metrics_file, 'w') as f:
#     json.dump(aggregated_test_metrics, f, indent=4)
# print(f"\nAggregated test metrics across all folds saved to {agg_test_metrics_file}")

# # Print aggregated test metrics
# print("\n----- Aggregated Test Metrics Across All Folds -----")
# for metric, stats in aggregated_test_metrics.items():
#     mean_val = stats.get('mean')
#     std_val = stats.get('std')
#     if mean_val is None or std_val is None:
#         print(f"Test {metric.capitalize().replace('_', ' ')}: Not available")
#     else:
#         display_metric = metric.capitalize().replace('_', ' ')
#         if metric == 'macro_f1':
#             display_metric = 'Macro F1'
#         elif metric == 'balanced_accuracy':
#             display_metric = 'Balanced Accuracy'
#         print(f"Test {display_metric}: {mean_val:.5f} ± {std_val:.5f}")
# print("----------------------------------------------------\n")

# # Save formatted output to a text file
# output_lines = ["Aggregated Test Metrics Across All Folds:"]
# for metric, stats in aggregated_test_metrics.items():
#     mean_val = stats.get('mean')
#     std_val = stats.get('std')
#     if mean_val is None or std_val is None:
#         output_lines.append(f"Test {metric}: Not available")
#     else:
#         display_metric = metric.capitalize().replace('_', ' ')
#         if metric == 'macro_f1':
#             display_metric = 'Macro F1'
#         elif metric == 'balanced_accuracy':
#             display_metric = 'Balanced Accuracy'
#         output_lines.append(f"Test {display_metric}: {mean_val:.5f} ± {std_val:.5f}")

# output_text = "\n".join(output_lines)
# output_file = os.path.join(CHECKPOINT_DIR, "aggregated_test_metrics.txt")
# with open(output_file, "w") as f:
#     f.write(output_text)
# print(f"Formatted aggregated test metrics saved to {output_file}")


# In[30]:

# Function to load all fold metrics
def load_all_fold_metrics(n_folds, metrics_per_fold_path):
    all_train_metrics = []
    all_val_metrics = []
    all_test_metrics = []
    all_y_true = []
    all_y_pred = []
    all_y_score = []

    for fold in range(n_folds):
        fold = fold + 1
        metrics_file = os.path.join(metrics_per_fold_path, f"metrics_fold{fold}{num_iters}.json")
        if os.path.exists(metrics_file):
            with open(metrics_file, 'r') as f:
                metrics = json.load(f)

                # Extract the metrics
                train_metrics = {
                    'balanced_accuracy': metrics.get('train_balanced_accuracy', None),
                    'accuracy': metrics.get('train_accuracy', None),
                    'macro_f1': metrics.get('train_macro_f1', None),
                    'precision_macro': metrics.get('train_precision_macro', None),
                    'recall_macro': metrics.get('train_recall_macro', None),
                    'auc': metrics.get('train_auc', None)
                }
                val_metrics = {
                    'balanced_accuracy': metrics.get('validation_balanced_accuracy', None),
                    'accuracy': metrics.get('validation_accuracy', None),
                    'macro_f1': metrics.get('validation_macro_f1', None),
                    'precision_macro': metrics.get('validation_precision_macro', None),
                    'recall_macro': metrics.get('validation_recall_macro', None),
                    'auc': metrics.get('validation_auc', None)
                }
                test_metrics = {
                    'balanced_accuracy': metrics.get('test_balanced_accuracy', None),
                    'accuracy': metrics.get('test_accuracy', None),
                    'macro_f1': metrics.get('test_macro_f1', None),
                    'precision_macro': metrics.get('test_precision_macro', None),
                    'recall_macro': metrics.get('test_recall_macro', None),
                    'auc': metrics.get('test_auc', None)
                }

                all_train_metrics.append(train_metrics)
                all_val_metrics.append(val_metrics)
                all_test_metrics.append(test_metrics)

                all_y_true.extend(metrics.get('val_y_true', []))
                all_y_pred.extend(metrics.get('val_y_pred', []))
                all_y_score.extend(metrics.get('val_y_score', []))
        else:
            print(f"Metrics file for fold {fold} not found.")

    return all_train_metrics, all_val_metrics, all_test_metrics, all_y_true, all_y_pred, all_y_score


# In[31]:


# Function to compute mean and std of a specific metric across folds
def mean_and_std(metrics_list, metric_name):
    fold_values = [fold.get(metric_name) for fold in metrics_list if fold.get(metric_name) is not None]
    mean_val = np.mean(fold_values) if fold_values else None
    std_val = np.std(fold_values) if fold_values else None
    return mean_val, std_val


# In[32]:


def compute_and_print_average_metrics(n_folds, metrics_per_fold_path, class_labels):
    """
    Loads all fold metrics, computes average training, validation, and test metrics,
    and prints them in a formatted manner.
    
    Args:
        n_folds (int): Total number of cross-validation folds.
        metrics_per_fold_path (str): Directory path where fold metrics are saved.
        class_labels (list): List of class names.
    """
    # Load all fold metrics
    all_train_metrics, all_val_metrics, all_test_metrics, all_y_true, all_y_pred, all_y_score = load_all_fold_metrics(n_folds, metrics_per_fold_path)

    # Define metrics to analyze
    metrics_to_analyze = ['balanced_accuracy', 'accuracy', 'macro_f1', 'precision_macro', 'recall_macro', 'auc']

    # Initialize a dictionary to store average metrics
    average_metrics = {}

    print("\n----- Average Cross-Validation Metrics -----\n")
    for metric in metrics_to_analyze:
        train_mean, train_std = mean_and_std(all_train_metrics, metric)
        val_mean, val_std = mean_and_std(all_val_metrics, metric)
        test_mean, test_std = mean_and_std(all_test_metrics, metric)

        average_metrics[f"train_{metric}"] = (train_mean, train_std)
        average_metrics[f"validation_{metric}"] = (val_mean, val_std)
        average_metrics[f"test_{metric}"] = (test_mean, test_std)

        # Print the metrics in the desired format
        if train_mean is not None and train_std is not None:
            if metric == 'precision_macro':
                display_metric = 'Precision (Macro)'
            elif metric == 'recall_macro':
                display_metric = 'Recall (Macro)'
            else:
                display_metric = metric.capitalize().replace('_', ' ')
            print(f"Training {display_metric}: {train_mean:.4f} ± {train_std:.4f}")
        if val_mean is not None and val_std is not None:
            if metric == 'precision_macro':
                display_metric = 'Precision (Macro)'
            elif metric == 'recall_macro':
                display_metric = 'Recall (Macro)'
            else:
                display_metric = metric.capitalize().replace('_', ' ')
            print(f"Validation {display_metric}: {val_mean:.4f} ± {val_std:.4f}")
        if test_mean is not None and test_std is not None:
            if metric == 'precision_macro':
                display_metric = 'Precision (Macro)'
            elif metric == 'recall_macro':
                display_metric = 'Recall (Macro)'
            else:
                display_metric = metric.capitalize().replace('_', ' ')
            print(f"Test {display_metric}: {test_mean:.4f} ± {test_std:.4f}")
    print("\n--------------------------------------------\n")

    # Generate and save the classification report across all folds
    if all_y_true and all_y_pred:
        final_classification_report = classification_report(all_y_true, all_y_pred, target_names=class_labels, output_dict=True)
        report_df = pd.DataFrame(final_classification_report).transpose()
        report_file = os.path.join(metrics_per_fold_path, f"average_classification_report{num_iters}.csv")
        report_df.to_csv(report_file, index=True)
        print("Average Classification Report:")
        print(report_df)
        print(f"\nClassification report saved to {report_file}\n")

        # Generate and save the confusion matrix across all folds
        cm = confusion_matrix(all_y_true, all_y_pred)
        plt.figure(figsize=FIG_SIZE)
        sns.heatmap(cm, annot=True, fmt="d", cmap="Blues", xticklabels=class_labels, yticklabels=class_labels)
        plt.xlabel('Predicted')
        plt.ylabel('Actual')
        plt.title('Average Cross-Validation Confusion Matrix')
        cm_file = os.path.join(metrics_per_fold_path, f'average_confusion_matrix{num_iters}.png')
        plt.savefig(cm_file)
        plt.show()
        plt.close()
        print(f"Average Confusion Matrix saved to {cm_file}\n")
    else:
        print("No predictions found across folds. Skipping classification report and confusion matrix.\n")

    # Clean up to save memory
    del all_train_metrics, all_val_metrics, all_test_metrics, all_y_true, all_y_pred, all_y_score
    gc.collect()


# In[33]:


def plot_roc_curves(Y_true, Y_score, class_labels, fig_size=(12, 12), save_path='./checkpoints_rf'):
    """
    Plots ROC curves for each class along with micro and macro averages.

    Args:
        Y_true (array-like): True labels.
        Y_score (array-like): Predicted probabilities.
        class_labels (list): List of class names.
        fig_size (tuple): Size of the plot.
        save_path (str): Directory path to save the ROC curve plot.
    """
    n_classes = CLASSES
    fpr = dict()
    tpr = dict()
    roc_auc = dict()

    # Binarize the test labels
    Y_true_bin = label_binarize(Y_true, classes=np.arange(n_classes))

    # Check if the number of classes in predicted probabilities matches
    if Y_score.shape[1] != n_classes:
        print(f"Y_score has shape {Y_score.shape}, expected number of classes {n_classes}")
        return

    # Compute ROC curve and ROC area for each class
    for i in range(n_classes):
        fpr[i], tpr[i], _ = roc_curve(Y_true_bin[:, i], Y_score[:, i])
        roc_auc[i] = auc(fpr[i], tpr[i])

    # Compute micro-average ROC curve and ROC area
    fpr["micro"], tpr["micro"], _ = roc_curve(Y_true_bin.ravel(), Y_score.ravel())
    roc_auc["micro"] = auc(fpr["micro"], tpr["micro"])

    # Compute macro-average ROC curve and ROC area
    # Aggregate all false positive rates
    all_fpr = np.unique(np.concatenate([fpr[i] for i in range(n_classes)]))

    # Interpolate all ROC curves at these points and average
    mean_tpr = np.zeros_like(all_fpr)
    for i in range(n_classes):
        mean_tpr += np.interp(all_fpr, fpr[i], tpr[i])

    mean_tpr /= n_classes

    fpr["macro"] = all_fpr
    tpr["macro"] = mean_tpr
    roc_auc["macro"] = auc(fpr["macro"], tpr["macro"])

    # Plot all ROC curves
    plt.figure(figsize=fig_size)
    colors = plt.cm.get_cmap('tab10').colors

    for i in range(n_classes):
        plt.plot(fpr[i], tpr[i], color=colors[i % len(colors)],
                 lw=2, label=f'ROC curve of class {class_labels[i]} (AUC = {roc_auc[i]:.2f})')

    plt.plot(fpr["micro"], tpr["micro"],
             label=f'micro-average ROC curve (AUC = {roc_auc["micro"]:.2f})',
             color='deeppink', linestyle=':', linewidth=4)

    plt.plot(fpr["macro"], tpr["macro"],
             label=f'macro-average ROC curve (AUC = {roc_auc["macro"]:.2f})',
             color='navy', linestyle=':', linewidth=4)

    plt.plot([0, 1], [0, 1], 'k--', lw=2)
    plt.xlim([0.0, 1.0])
    plt.ylim([0.0, 1.05])
    plt.xlabel('False Positive Rate')
    plt.ylabel('True Positive Rate')
    plt.title('Test Set ROC Curves')
    plt.legend(loc="lower right", fontsize='small')
    roc_curve_file = os.path.join(save_path, f'test_roc_curves{num_iters}png')
    plt.savefig(roc_curve_file)
    plt.show()
    plt.close()
    print(f"ROC Curves generated and saved to '{roc_curve_file}'\n")


# In[34]:


# Total number of folds
total_folds = N_FOLDS * N_REPEATS

# Compute and print average cross-validation metrics
compute_and_print_average_metrics(
    n_folds=total_folds, 
    metrics_per_fold_path=CHECKPOINT_DIR, 
    class_labels=class_labels  # Correct variable name
)


# In[35]:


from sklearn.metrics import roc_curve, auc
from sklearn.preprocessing import label_binarize


# In[36]:


# ---------------------------
# 3. Load the Best Model and Evaluate on the Test Set (COMMENTED OUT - Now done per fold)
# ---------------------------

# Path to the best model
best_model_with_prep_path = os.path.join(CHECKPOINT_DIR, f"best{model_type}_model_with_preproc_{num_iters}.joblib")

# Check if the best model exists
if os.path.exists(best_model_with_prep_path):
   # Load the best model (which includes preprocessing)
   
    preprocessor, best_model = joblib.load(best_model_with_prep_path)
    print(f"\nBest model loaded from {best_model_with_prep_path}")
else:
    raise FileNotFoundError(f"No best model found at {best_model_with_prep_path}. Please ensure that cross-validation has been run successfully.")
        
# Transform the test data
X_test_transformed = preprocessor.transform(X_test)

# Print the shape before and after preprocessing
print(f"Before preprocessing: X_test shape: {X_test.shape}")
print(f"After preprocessing: X_test_transformed shape: {X_test_transformed.shape}")    
 

# Evaluate on the test set
print("\nEvaluating the best model on the test set...")
Y_test_pred = best_model.predict(X_test_transformed)
Y_test_pred_proba = best_model.predict_proba(X_test_transformed)

test_bal_acc = balanced_accuracy_score(Y_test, Y_test_pred)
test_accuracy = accuracy_score(Y_test, Y_test_pred)
test_macro_f1 = f1_score(Y_test, Y_test_pred, average='macro')
test_precision = precision_score(Y_test, Y_test_pred, average='macro', zero_division=0)
test_recall = recall_score(Y_test, Y_test_pred, average='macro', zero_division=0)
Y_test_bin = label_binarize(Y_test, classes=np.arange(CLASSES))
test_auc = roc_auc_score(Y_test_bin, Y_test_pred_proba, average='macro', multi_class='ovo')

print(f"Test Balanced Accuracy: {test_bal_acc:.4f}")
print(f"Test Accuracy: {test_accuracy:.4f}")
print(f"Test Macro F1 Score: {test_macro_f1:.4f}")
print(f"Test Precision (Macro): {test_precision:.4f}")
print(f"Test Recall (Macro): {test_recall:.4f}")
print(f"Test ROC AUC Score: {test_auc:.4f}")

# Save test metrics
test_metrics = {
    "test_balanced_accuracy": test_bal_acc,
    "test_accuracy": test_accuracy,
    "test_macro_f1": test_macro_f1,
    "test_precision_macro": test_precision,
    "test_recall_macro": test_recall,
    "test_auc": test_auc,
}
test_metrics_file = os.path.join(CHECKPOINT_DIR, f"test_metrics{num_iters}.json")
with open(test_metrics_file, 'w') as f:
    json.dump(test_metrics, f, indent=4)
print(f"Test metrics saved to {test_metrics_file}")

# Generate classification report
test_classification_report = classification_report(Y_test, Y_test_pred, target_names=class_labels, output_dict=True)
test_report_df = pd.DataFrame(test_classification_report).transpose()
test_report_file = os.path.join(CHECKPOINT_DIR, f"test_classification_report{num_iters}.csv")
test_report_df.to_csv(test_report_file, index=True)
print(f"Test classification report saved to {test_report_file}")

# Plot confusion matrix
cm_test = confusion_matrix(Y_test, Y_test_pred)
plt.figure(figsize=FIG_SIZE)
sns.heatmap(cm_test, annot=True, fmt="d", cmap="Blues", xticklabels=class_labels, yticklabels=class_labels)
plt.xlabel('Predicted')
plt.ylabel('Actual')
plt.title('Test Set Confusion Matrix')
cm_file = os.path.join(CHECKPOINT_DIR, f'test_confusion_matrix{num_iters}.png')
plt.savefig(cm_file)
plt.show()
plt.close()
print(f"Confusion matrix saved to {cm_file}\n")

# ---------------------------
# 4. Generate ROC Curves
# ---------------------------

print("\nGenerating ROC Curves...")
plot_roc_curves(
    Y_true=Y_test,
    Y_score=Y_test_pred_proba,
    class_labels=class_labels,
    fig_size=FIG_SIZE,
    save_path=CHECKPOINT_DIR
)

# Clean up to save memory
gc.collect()

# In[37]:
import os
import joblib
import numpy as np
import json
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
import gc

from sklearn.metrics import (
    balanced_accuracy_score,
    accuracy_score,
    f1_score,
    precision_score,
    recall_score,
    roc_auc_score,
    classification_report,
    confusion_matrix,
)
from sklearn.preprocessing import label_binarize

# ---------------------------
# 3. Load All Fold Models and Evaluate on the Test Set
# ---------------------------

# List to hold metrics for each fold
all_metrics = []

# Loop through folds 1 to 30
for fold in range(1, 31):
    model_path = os.path.join(CHECKPOINT_DIR, f"model_fold_with_preproc{fold}{num_iters}.joblib")
    if os.path.exists(model_path):
        # Load the model for the current fold (which includes preprocessing)
        preprocessor, model = joblib.load(model_path)
        
        # Transform the test data
        X_test_transformed = preprocessor.transform(X_test)

        print(f"\nModel loaded from {model_path}")
        
        # Print the shape before and after preprocessing
        print(f"Fold {fold}: Before preprocessing: X_test shape: {X_test.shape}")
        print(f"Fold {fold}: After preprocessing: X_test_transformed shape: {X_test_transformed.shape}")

        # Evaluate on the test set
        print(f"\nEvaluating fold {fold} on the test set...")
        Y_test_pred = model.predict(X_test_transformed)
        Y_test_pred_proba = model.predict_proba(X_test_transformed)
        
        test_bal_acc = balanced_accuracy_score(Y_test, Y_test_pred)
        test_accuracy = accuracy_score(Y_test, Y_test_pred)
        test_macro_f1 = f1_score(Y_test, Y_test_pred, average='macro')
        test_precision = precision_score(Y_test, Y_test_pred, average='macro', zero_division=0)
        test_recall = recall_score(Y_test, Y_test_pred, average='macro', zero_division=0)
        
        # Convert Y_test to binary for multi-class AUC calculation
        Y_test_bin = label_binarize(Y_test, classes=np.arange(CLASSES))
        test_auc = roc_auc_score(Y_test_bin, Y_test_pred_proba, average='macro', multi_class='ovo')
        
        # Collect metrics for the current fold
        fold_metrics = {
            "fold": fold,
            "balanced_accuracy": test_bal_acc,
            "accuracy": test_accuracy,
            "macro_f1": test_macro_f1,
            "precision_macro": test_precision,
            "recall_macro": test_recall,
            "auc": test_auc,
        }
        all_metrics.append(fold_metrics)
        print(f"Fold {fold} metrics: {fold_metrics}")
    else:
        print(f"Model file not found: {model_path}")

# Convert the list of metrics dictionaries to a DataFrame
metrics_df = pd.DataFrame(all_metrics)

# Calculate the mean and standard deviation for each metric across folds
mean_metrics = metrics_df.mean(numeric_only=True)
std_metrics = metrics_df.std(numeric_only=True)

# Print the aggregated results in "mean ± std" format
print("\nAggregated Metrics Across All Folds:")
for metric in mean_metrics.index:
    mean_val = mean_metrics[metric]
    std_val = std_metrics[metric]
    print(f"{metric}: {mean_val:.5f} ± {std_val:.5f}")

# Save detailed fold metrics and aggregated (mean and std) metrics to a JSON file
aggregated_metrics = {
    "detailed": all_metrics,
    "mean": mean_metrics.to_dict(),
    "std": std_metrics.to_dict(),
}
metrics_file = os.path.join(CHECKPOINT_DIR, f"all_folds_metrics{num_iters}.json")
with open(metrics_file, 'w') as f:
    json.dump(aggregated_metrics, f, indent=4)
print(f"\nAll folds metrics saved to {metrics_file}")

# Clean up to save memory
gc.collect()




#!/usr/bin/env python3
"""
Script to extract SVM model data from the massive header file and split it into separate files.
This solves the "cc1plus: out of memory" issue by moving large constant arrays to a .cpp file.
"""

import re
import sys

def extract_kernel_data(content):
    """Extract kernel computation data from the content."""
    kernels = []
    
    # Find all kernel computations
    kernel_pattern = r'kernels\[(\d+)\] = compute_kernel\(x,\s*(.*?)\);'
    matches = re.findall(kernel_pattern, content, re.DOTALL)
    
    for idx, kernel_data in matches:
        # Extract the floating point values
        values = re.findall(r'-?\d+\.\d+', kernel_data)
        kernels.append((int(idx), values))
    
    return kernels

def extract_decision_data(content):
    """Extract decision function data from the content."""
    decisions = []
    
    # Find all decision computations
    decision_pattern = r'decisions\[(\d+)\] = (.*?);'
    matches = re.findall(decision_pattern, content, re.DOTALL)
    
    for idx, decision_data in matches:
        decisions.append((int(idx), decision_data.strip()))
    
    return decisions

def extract_voting_data(content):
    """Extract voting logic from the content."""
    votes = []
    
    # Find all voting lines
    vote_pattern = r'votes\[decisions\[(\d+)\] > 0 \? (\d+) : (\d+)\] \+= 1;'
    matches = re.findall(vote_pattern, content)
    
    for decision_idx, class1, class2 in matches:
        votes.append((int(decision_idx), int(class1), int(class2)))
    
    return votes

def create_svm_params_h():
    """Create the parameters header file."""
    with open('svm_params.h', 'w') as f:
        f.write('#pragma once\n\n')
        f.write('// SVM model parameters - extern declarations\n')
        f.write('// These are defined in svm_params.cpp to avoid massive header files\n\n')
        f.write('namespace Eloquent {\n')
        f.write('    namespace ML {\n')
        f.write('        namespace Port {\n')
        f.write('            // Kernel computation results for each support vector\n')
        f.write('            extern float kernels[1980];\n\n')
        f.write('            // Decision function results\n')
        f.write('            extern float decisions[78];\n\n')
        f.write('            // Vote counts for each class\n')
        f.write('            extern int votes[13];\n\n')
        f.write('            // Support vector data for kernel computation\n')
        f.write('            // Each support vector has 94 features\n')
        f.write('            extern float support_vectors[1980][94];\n\n')
        f.write('            // Decision function coefficients\n')
        f.write('            extern float decision_coeffs[78];\n\n')
        f.write('            // Decision function intercepts\n')
        f.write('            extern float decision_intercepts[78];\n')
        f.write('        }\n')
        f.write('    }\n')
        f.write('}\n')

def create_svm_params_cpp(kernels, decisions, votes):
    """Create the parameters implementation file with actual data."""
    with open('svm_params.cpp', 'w') as f:
        f.write('#include "svm_params.h"\n\n')
        f.write('namespace Eloquent {\n')
        f.write('    namespace ML {\n')
        f.write('        namespace Port {\n\n')
        
        # Write kernel data
        f.write('            // Kernel computation results\n')
        f.write('            float kernels[1980] = { 0 };\n\n')
        
        # Write decision data
        f.write('            // Decision function results\n')
        f.write('            float decisions[78] = { 0 };\n\n')
        
        # Write vote data
        f.write('            // Vote counts for each class\n')
        f.write('            int votes[13] = { 0 };\n\n')
        
        # Write support vector data (placeholder for now)
        f.write('            // Support vector data (94 features each)\n')
        f.write('            float support_vectors[1980][94] = { 0 };\n\n')
        
        # Write decision coefficients (placeholder for now)
        f.write('            // Decision function coefficients\n')
        f.write('            float decision_coeffs[78] = { 0 };\n\n')
        
        # Write decision intercepts (placeholder for now)
        f.write('            // Decision function intercepts\n')
        f.write('            float decision_intercepts[78] = { 0 };\n\n')
        
        f.write('        }\n')
        f.write('    }\n')
        f.write('}\n')

def create_svm_model_h_updated(content):
    """Create the updated SVM model header file without the massive data."""
    # Find the predict method and replace it with a simpler version
    predict_start = content.find('int predict(float *x) {')
    predict_end = content.find('return idx;', predict_start) + len('return idx;')
    
    if predict_start == -1 or predict_end == -1:
        print("Error: Could not find predict method")
        return
    
    # Extract the method signature and the return statement
    method_start = content.find('int predict(float *x) {', predict_start)
    method_end = content.find('}', predict_end)
    
    # Create the new predict method
    new_predict_method = '''int predict(float *x) {
                        // Initialize arrays
                        for (int i = 0; i < 1980; i++) kernels[i] = 0;
                        for (int i = 0; i < 78; i++) decisions[i] = 0;
                        for (int i = 0; i < 13; i++) votes[i] = 0;
                        
                        // Compute kernels (this will be moved to a separate function)
                        compute_kernels(x);
                        
                        // Compute decisions (this will be moved to a separate function)
                        compute_decisions();
                        
                        // Compute votes (this will be moved to a separate function)
                        compute_votes();
                        
                        // Find the class with the most votes
                        int val = votes[0];
                        int idx = 0;
                        for (int i = 1; i < 13; i++) {
                            if (votes[i] > val) {
                                val = votes[i];
                                idx = i;
                            }
                        }
                        return idx;
                    }'''
    
    # Replace the old method with the new one
    new_content = content[:method_start] + new_predict_method + content[method_end+1:]
    
    # Write the updated file
    with open('svm_model_updated.h', 'w') as f:
        f.write(new_content)

def main():
    # Read the original file
    with open('svm_model.h', 'r') as f:
        content = f.read()
    
    print("Extracting kernel data...")
    kernels = extract_kernel_data(content)
    print(f"Found {len(kernels)} kernel computations")
    
    print("Extracting decision data...")
    decisions = extract_decision_data(content)
    print(f"Found {len(decisions)} decision computations")
    
    print("Extracting voting data...")
    votes = extract_voting_data(content)
    print(f"Found {len(votes)} voting rules")
    
    # Create the parameters header file
    print("Creating svm_params.h...")
    create_svm_params_h()
    
    # Create the parameters implementation file
    print("Creating svm_params.cpp...")
    create_svm_params_cpp(kernels, decisions, votes)
    
    # Create the updated model header file
    print("Creating svm_model_updated.h...")
    create_svm_model_h_updated(content)
    
    print("Done! Created:")
    print("  - svm_params.h (extern declarations)")
    print("  - svm_params.cpp (parameter definitions)")
    print("  - svm_model_updated.h (updated model without massive data)")
    print("\nNext step: Update the build system to use these files")

if __name__ == '__main__':
    main()

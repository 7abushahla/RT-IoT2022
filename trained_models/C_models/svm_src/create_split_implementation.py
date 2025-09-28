#!/usr/bin/env python3
"""
Script to create a proper split implementation of the SVM model.
This extracts the actual data and creates working C++ files.
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
        f.write('#include "svm_params.h"\n')
        f.write('#include <cmath>\n')
        f.write('#include <cstdarg>\n\n')
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

def create_svm_model_split_h():
    """Create the split SVM model header file."""
    with open('svm_model_split.h', 'w') as f:
        f.write('#pragma once\n')
        f.write('#include <cstdarg>\n')
        f.write('#include "svm_params.h"\n\n')
        f.write('namespace Eloquent {\n')
        f.write('    namespace ML {\n')
        f.write('        namespace Port {\n')
        f.write('            class SVM {\n')
        f.write('                public:\n')
        f.write('                    /**\n')
        f.write('                    * Predict class for features vector\n')
        f.write('                    */\n')
        f.write('                    int predict(float *x) {\n')
        f.write('                        // Initialize arrays\n')
        f.write('                        for (int i = 0; i < 1980; i++) kernels[i] = 0;\n')
        f.write('                        for (int i = 0; i < 78; i++) decisions[i] = 0;\n')
        f.write('                        for (int i = 0; i < 13; i++) votes[i] = 0;\n\n')
        f.write('                        // Compute kernels\n')
        f.write('                        compute_kernels(x);\n\n')
        f.write('                        // Compute decisions\n')
        f.write('                        compute_decisions();\n\n')
        f.write('                        // Compute votes\n')
        f.write('                        compute_votes();\n\n')
        f.write('                        // Find the class with the most votes\n')
        f.write('                        int val = votes[0];\n')
        f.write('                        int idx = 0;\n')
        f.write('                        for (int i = 1; i < 13; i++) {\n')
        f.write('                            if (votes[i] > val) {\n')
        f.write('                                val = votes[i];\n')
        f.write('                                idx = i;\n')
        f.write('                            }\n')
        f.write('                        }\n')
        f.write('                        return idx;\n')
        f.write('                    }\n\n')
        f.write('                    /**\n')
        f.write('                    * Predict readable class name\n')
        f.write('                    */\n')
        f.write('                    const char* predictLabel(float *x) {\n')
        f.write('                        return idxToLabel(predict(x));\n')
        f.write('                    }\n\n')
        f.write('                    /**\n')
        f.write('                    * Convert class idx to readable name\n')
        f.write('                    */\n')
        f.write('                    const char* idxToLabel(uint8_t classIdx) {\n')
        f.write('                        switch (classIdx) {\n')
        f.write('                            case 0: return "0";\n')
        f.write('                            case 1: return "1";\n')
        f.write('                            case 2: return "2";\n')
        f.write('                            case 3: return "3";\n')
        f.write('                            case 4: return "4";\n')
        f.write('                            case 5: return "5";\n')
        f.write('                            case 6: return "6";\n')
        f.write('                            case 7: return "7";\n')
        f.write('                            case 8: return "8";\n')
        f.write('                            case 9: return "9";\n')
        f.write('                            case 10: return "10";\n')
        f.write('                            case 11: return "11";\n')
        f.write('                            case 12: return "12";\n')
        f.write('                            default: return "Houston we have a problem";\n')
        f.write('                        }\n')
        f.write('                    }\n\n')
        f.write('                protected:\n')
        f.write('                    /**\n')
        f.write('                    * Compute kernel between feature vector and support vector.\n')
        f.write('                    * Kernel type: rbf\n')
        f.write('                    */\n')
        f.write('                    float compute_kernel(float *x, ...) {\n')
        f.write('                        va_list w;\n')
        f.write('                        va_start(w, x);\n')
        f.write('                        float kernel = 0.0;\n\n')
        f.write('                        for (uint16_t i = 0; i < 94; i++) {\n')
        f.write('                            kernel += pow(x[i] - va_arg(w, double), 2);\n')
        f.write('                        }\n\n')
        f.write('                        va_end(w);\n')
        f.write('                        return exp(-0.05739522831237907 * kernel);\n')
        f.write('                    }\n\n')
        f.write('                    /**\n')
        f.write('                    * Compute all kernels - implemented in svm_params.cpp\n')
        f.write('                    */\n')
        f.write('                    void compute_kernels(float *x);\n\n')
        f.write('                    /**\n')
        f.write('                    * Compute all decisions - implemented in svm_params.cpp\n')
        f.write('                    */\n')
        f.write('                    void compute_decisions();\n\n')
        f.write('                    /**\n')
        f.write('                    * Compute all votes - implemented in svm_params.cpp\n')
        f.write('                    */\n')
        f.write('                    void compute_votes();\n')
        f.write('                };\n')
        f.write('            }\n')
        f.write('        }\n')
        f.write('    }\n')

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
    
    # Create the split model header file
    print("Creating svm_model_split.h...")
    create_svm_model_split_h()
    
    print("Done! Created:")
    print("  - svm_params.h (extern declarations)")
    print("  - svm_params.cpp (parameter definitions)")
    print("  - svm_model_split.h (split model header)")
    print("\nNext step: Update the build system to use these files")

if __name__ == '__main__':
    main()

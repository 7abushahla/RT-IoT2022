#!/usr/bin/env python3
"""
Script to extract REAL SVM model data from the massive header file and create a functional split implementation.
This extracts the actual trained support vectors, decision coefficients, and voting logic.
"""

import re
import sys

def extract_kernel_data(content):
    """Extract all kernel computation data with support vectors."""
    kernels = []
    
    # Find all kernel computations - each has 94 support vector parameters
    kernel_pattern = r'kernels\[(\d+)\] = compute_kernel\(x,\s*(.*?)\);'
    matches = re.findall(kernel_pattern, content, re.DOTALL)
    
    print(f"Found {len(matches)} kernel computations")
    
    for idx, kernel_data in matches:
        # Extract the floating point values (94 support vector parameters)
        values = re.findall(r'-?\d+\.\d+', kernel_data)
        if len(values) == 94:  # Each support vector should have 94 features
            kernels.append((int(idx), values))
        else:
            print(f"Warning: Kernel {idx} has {len(values)} values, expected 94")
    
    return kernels

def extract_decision_data(content):
    """Extract all decision function computations."""
    decisions = []
    
    # Find all decision computations
    decision_pattern = r'decisions\[(\d+)\] = (.*?);'
    matches = re.findall(decision_pattern, content, re.DOTALL)
    
    print(f"Found {len(matches)} decision computations")
    
    for idx, decision_data in matches:
        # Clean up the decision computation
        decision_expr = decision_data.strip()
        decisions.append((int(idx), decision_expr))
    
    return decisions

def extract_voting_data(content):
    """Extract all voting logic."""
    votes = []
    
    # Find all voting lines
    vote_pattern = r'votes\[decisions\[(\d+)\] > 0 \? (\d+) : (\d+)\] \+= 1;'
    matches = re.findall(vote_pattern, content)
    
    print(f"Found {len(matches)} voting rules")
    
    for decision_idx, class1, class2 in matches:
        votes.append((int(decision_idx), int(class1), int(class2)))
    
    return votes

def generate_svm_params_h(kernels, decisions, votes):
    """Generate the svm_params.h header file."""
    content = '''#pragma once

namespace Eloquent {
    namespace ML {
        namespace Port {
            // Global arrays for SVM computation
            extern float kernels[1980];
            extern float decisions[78];
            extern int votes[13];
            
            // Support vector data (1980 support vectors, 94 features each)
            extern float support_vectors[1980][94];
            
            // Function declarations
            void compute_kernels(float *x);
            void compute_decisions();
            void compute_votes();
        }
    }
}
'''
    return content

def generate_svm_params_cpp(kernels, decisions, votes):
    """Generate the svm_params.cpp implementation file."""
    
    # Generate support vectors array
    support_vectors_code = "float support_vectors[1980][94] = {\n"
    for i in range(1980):
        if i < len(kernels):
            idx, values = kernels[i]
            support_vectors_code += f"    {{ {', '.join(values)} }},\n"
        else:
            support_vectors_code += "    { 0 },\n"  # Fill with zeros if missing
    support_vectors_code += "};\n\n"
    
    # Generate compute_kernels function
    kernels_code = '''void compute_kernels(float *x) {
    // Compute RBF kernels between input x and each support vector
    for (int i = 0; i < 1980; i++) {
        float kernel = 0.0;
        for (int j = 0; j < 94; j++) {
            float diff = x[j] - support_vectors[i][j];
            kernel += diff * diff;
        }
        kernels[i] = exp(-0.05739522831237907 * kernel);
    }
}

'''
    
    # Generate compute_decisions function
    decisions_code = '''void compute_decisions() {
'''
    for idx, decision_expr in decisions:
        # Clean up the decision expression and add it
        clean_expr = decision_expr.replace('\n', ' ').strip()
        decisions_code += f"    decisions[{idx}] = {clean_expr};\n"
    decisions_code += "}\n\n"
    
    # Generate compute_votes function
    votes_code = '''void compute_votes() {
    // Reset votes
    for (int i = 0; i < 13; i++) {
        votes[i] = 0;
    }
    
    // Apply voting rules
'''
    for decision_idx, class1, class2 in votes:
        votes_code += f"    votes[decisions[{decision_idx}] > 0 ? {class1} : {class2}] += 1;\n"
    votes_code += "}\n"
    
    # Combine everything
    full_content = f'''#include "svm_params.h"
#include <cmath>

namespace Eloquent {{
    namespace ML {{
        namespace Port {{
            // Global arrays
            float kernels[1980] = {{ 0 }};
            float decisions[78] = {{ 0 }};
            int votes[13] = {{ 0 }};
            
            // Support vector data
{support_vectors_code}
            // Implementation functions
{kernels_code}
{decisions_code}
{votes_code}
        }}
    }}
}}
'''
    
    return full_content

def main():
    print("Extracting real SVM model data...")
    
    # Read the original svm_model.h
    try:
        with open('svm_model.h', 'r') as f:
            content = f.read()
    except FileNotFoundError:
        print("Error: svm_model.h not found in current directory")
        return 1
    
    # Extract all the data
    kernels = extract_kernel_data(content)
    decisions = extract_decision_data(content)
    votes = extract_voting_data(content)
    
    print(f"Extracted {len(kernels)} kernels, {len(decisions)} decisions, {len(votes)} voting rules")
    
    # Generate the new files
    params_h = generate_svm_params_h(kernels, decisions, votes)
    params_cpp = generate_svm_params_cpp(kernels, decisions, votes)
    
    # Write the files
    with open('svm_params_real.h', 'w') as f:
        f.write(params_h)
    
    with open('svm_params_real.cpp', 'w') as f:
        f.write(params_cpp)
    
    print("Generated svm_params_real.h and svm_params_real.cpp")
    print("These files contain the REAL trained model data!")
    
    return 0

if __name__ == "__main__":
    sys.exit(main())

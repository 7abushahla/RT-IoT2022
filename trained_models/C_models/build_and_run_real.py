#!/usr/bin/env python3
"""
Build and run script for the REAL split SVM implementation.
This uses the actual extracted trained model data.
"""

import subprocess
import sys
import os
import argparse

def run_command(cmd, description):
    """Run a command and return success status."""
    print(f"Running: {description}")
    print(f"Command: {' '.join(cmd)}")
    
    try:
        result = subprocess.run(cmd, check=True, capture_output=True, text=True)
        print("✓ Success")
        if result.stdout:
            print("Output:", result.stdout)
        return True
    except subprocess.CalledProcessError as e:
        print(f"✗ Failed with exit code {e.returncode}")
        if e.stdout:
            print("Stdout:", e.stdout)
        if e.stderr:
            print("Stderr:", e.stderr)
        return False

def main():
    parser = argparse.ArgumentParser(description='Build and run REAL split SVM implementation')
    parser.add_argument('--opt', default='-O2', help='Optimization level (default: -O2)')
    parser.add_argument('--cflags', default='-march=native', help='Additional C++ flags (default: -march=native)')
    parser.add_argument('--run', action='store_true', help='Run the benchmark after building')
    
    args = parser.parse_args()
    
    # Build the real split SVM implementation
    cpp_files = ['svm_src/svm_params_real.cpp', 'bench_svm_real.cpp']
    include_dirs = ['-I', 'svm_src']
    cflags = [args.opt, args.cflags, '-std=c++17', '-ffast-math']
    
    build_cmd = ['g++'] + cflags + include_dirs + cpp_files + ['-o', 'bench_svm_real']
    
    if not run_command(build_cmd, "Building real split SVM implementation"):
        return 1
    
    if args.run:
        if not run_command(['./bench_svm_real'], "Running real split SVM benchmark"):
            return 1
    
    print("\n✓ Real split SVM implementation built successfully!")
    print("This implementation uses the ACTUAL trained model data extracted from svm_model.h")
    print("It should produce the same results as the original but with better performance.")
    
    return 0

if __name__ == "__main__":
    sys.exit(main())

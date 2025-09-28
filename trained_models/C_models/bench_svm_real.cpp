// bench_svm_real.cpp - timing for REAL split SVM implementation (host Linux/macOS)
#include <iostream>
#include <chrono>
#include <random>
#include "svm_src/svm_model_real.h"

using namespace std;
using namespace Eloquent::ML::Port;

int main() {
    SVM svm;
    
    // Generate random test data
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<float> dis(-10.0f, 10.0f);
    
    float x[94];
    for (int i = 0; i < 94; i++) {
        x[i] = dis(gen);
    }
    
    cout << "Testing REAL split SVM implementation..." << endl;
    
    // Warm up
    for (int i = 0; i < 100; i++) {
        svm.predict(x);
    }
    
    // Time the prediction
    auto start = chrono::high_resolution_clock::now();
    
    const int iterations = 10000;
    for (int i = 0; i < iterations; i++) {
        svm.predict(x);
    }
    
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end - start);
    
    double avg_time = duration.count() / (double)iterations;
    
    cout << "Real Split SVM Performance:" << endl;
    cout << "  Iterations: " << iterations << endl;
    cout << "  Total time: " << duration.count() << " microseconds" << endl;
    cout << "  Average time per prediction: " << avg_time << " microseconds" << endl;
    cout << "  Predictions per second: " << 1000000.0 / avg_time << endl;
    
    // Test prediction result
    int prediction = svm.predict(x);
    cout << "  Sample prediction: " << prediction << " (" << svm.predictLabel(x) << ")" << endl;
    
    return 0;
}

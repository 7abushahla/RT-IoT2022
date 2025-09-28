#pragma once
#include <cstdarg>
#include <cstdint>
#include <cmath>
#include "svm_params.h"

namespace Eloquent {
    namespace ML {
        namespace Port {
            class SVM {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        // Initialize arrays
                        for (int i = 0; i < 1980; i++) kernels[i] = 0;
                        for (int i = 0; i < 78; i++) decisions[i] = 0;
                        for (int i = 0; i < 13; i++) votes[i] = 0;

                        // Compute kernels
                        compute_kernels(x);

                        // Compute decisions
                        compute_decisions();

                        // Compute votes
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
                    }

                    /**
                    * Predict readable class name
                    */
                    const char* predictLabel(float *x) {
                        return idxToLabel(predict(x));
                    }

                    /**
                    * Convert class idx to readable name
                    */
                    const char* idxToLabel(uint8_t classIdx) {
                        switch (classIdx) {
                            case 0: return "0";
                            case 1: return "1";
                            case 2: return "2";
                            case 3: return "3";
                            case 4: return "4";
                            case 5: return "5";
                            case 6: return "6";
                            case 7: return "7";
                            case 8: return "8";
                            case 9: return "9";
                            case 10: return "10";
                            case 11: return "11";
                            case 12: return "12";
                            default: return "Houston we have a problem";
                        }
                    }

                protected:
                    /**
                    * Compute kernel between feature vector and support vector.
                    * Kernel type: rbf
                    */
                    float compute_kernel(float *x, ...) {
                        va_list w;
                        va_start(w, x);
                        float kernel = 0.0;

                        for (uint16_t i = 0; i < 94; i++) {
                            kernel += pow(x[i] - va_arg(w, double), 2);
                        }

                        va_end(w);
                        return exp(-0.05739522831237907 * kernel);
                    }

                    /**
                    * Compute all kernels - implemented in svm_params.cpp
                    */
                    void compute_kernels(float *x);

                    /**
                    * Compute all decisions - implemented in svm_params.cpp
                    */
                    void compute_decisions();

                    /**
                    * Compute all votes - implemented in svm_params.cpp
                    */
                    void compute_votes();
                };
            }
        }
    }

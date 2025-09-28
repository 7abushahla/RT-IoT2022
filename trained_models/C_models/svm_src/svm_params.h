#pragma once

// SVM model parameters - extern declarations
// These are defined in svm_params.cpp to avoid massive header files

namespace Eloquent {
    namespace ML {
        namespace Port {
            // Kernel computation results for each support vector
            extern float kernels[1980];

            // Decision function results
            extern float decisions[78];

            // Vote counts for each class
            extern int votes[13];

            // Support vector data for kernel computation
            // Each support vector has 94 features
            extern float support_vectors[1980][94];

            // Decision function coefficients
            extern float decision_coeffs[78];

            // Decision function intercepts
            extern float decision_intercepts[78];
        }
    }
}

#pragma once

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

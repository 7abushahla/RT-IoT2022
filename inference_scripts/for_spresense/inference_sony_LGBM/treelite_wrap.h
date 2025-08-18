#pragma once
#ifdef __cplusplus
extern "C" {
#endif

// Returns argmax class index (multiclass) or 0/1 for binary if probabilities
int    lgbm_predict_class_f32(const float* x, int n_features);

// Returns first score after postprocess (for binary/regression). For multiclass you’ll want the vector version below.
double lgbm_predict_score_f32(const float* x, int n_features);

// Optional: fill caller-provided buffer with postprocessed scores (multiclass)
int    lgbm_predict_vector_f32(const float* x, int n_features, double* out, int out_len);

#ifdef __cplusplus
}
#endif
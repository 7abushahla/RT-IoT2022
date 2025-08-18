#pragma once
#ifdef __cplusplus
extern "C" {
#endif

// Returns argmax class index; writes its probability to *out_prob (postprocessed)
int   xgb_predict_best_f32(const float* x, int n_features, float* out_prob);

// Fills caller-provided buffer with postprocessed scores; returns count written
int   xgb_predict_vector_f32(const float* x, int n_features, float* out, int out_len);

#ifdef __cplusplus
}
#endif

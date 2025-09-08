#include <math.h>
#include "header.h"   // <-- the Treelite-generated XGB header for THIS model

#ifndef MAX_N_CLASS
#define MAX_N_CLASS 16
#endif

static void fill_entry_float(union Entry* data, const float* x, int n) {
    for (int i = 0; i < n; ++i) {
        float v = x[i];
        if (isnan(v)) data[i].missing = 1;
        else { data[i].missing = 0; data[i].fvalue = (double)v; data[i].qvalue = 0; }
    }
}

static int nclasses(void) {
    int32_t k = 1;
    get_num_class(&k);
    if (k < 1) k = 1;
    if (k > MAX_N_CLASS) k = MAX_N_CLASS;
    return k;
}
static int nfeatures(void) { return get_num_feature(); }

int xgb_predict_vector_f32(const float* x, int n_features, float* out, int out_len) {
    if (n_features != nfeatures()) return 0;
    const int K = nclasses();
    union Entry row[n_features];
    float tmp[MAX_N_CLASS];  // <-- FLOAT buffer for XGB

    fill_entry_float(row, x, n_features);
    // XGB Treelite exports: predict(row, pred_margin, float* result)
    predict(row, /*pred_margin=*/1, tmp);   // get margins
    postprocess(tmp);                        // convert to probs (softmax/sigmoid)

    const int n = (K < out_len) ? K : out_len;
    for (int i = 0; i < n; ++i) out[i] = tmp[i];
    return n;
}

int xgb_predict_best_f32(const float* x, int n_features, float* out_prob) {
    float probs[MAX_N_CLASS];
    int k = xgb_predict_vector_f32(x, n_features, probs, MAX_N_CLASS);
    if (k <= 0) { if (out_prob) *out_prob = 0.0f; return 0; }
    int best = 0; for (int i = 1; i < k; ++i) if (probs[i] > probs[best]) best = i;
    if (out_prob) *out_prob = probs[best];
    return best;
}

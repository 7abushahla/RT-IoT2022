#include <math.h>
#include <string.h>
#include "header.h"   // Treelite-generated header

// Fill only fvalue/missing; NO quantize() calls.
static void fill_entry_float(union Entry* data, const float* x, int n) {
    for (int i = 0; i < n; ++i) {
        float v = x[i];
        if (isnan(v)) {
            data[i].missing = 1;
        } else {
            data[i].missing = 0;
            data[i].fvalue  = (double)v;
            data[i].qvalue  = 0;   // ignored for float thresholds
        }
    }
}

static int clamp_num_classes(void) {
    int32_t nclass = 1;
    get_num_class(&nclass);
    if (nclass < 1) nclass = 1;
    if (nclass > MAX_N_CLASS) nclass = MAX_N_CLASS; // safety
    return nclass;
}

static int check_dimension(int n_features) {
    int32_t nf = get_num_feature();
    return (nf == n_features) ? 1 : 0;
}

// Fills postprocessed scores into 'out' (length = min(nclass, out_len)).
// Returns actual number of scores written.
int lgbm_predict_vector_f32(const float* x, int n_features, double* out, int out_len) {
    if (!check_dimension(n_features)) {
        // dimension mismatch; write nothing
        return 0;
    }
    const int nclass = clamp_num_classes();
    union Entry row[n_features];
    double tmp[MAX_N_CLASS];

    fill_entry_float(row, x, n_features);

    // Get raw margins, then apply Treelite's postprocess (sigmoid/softmax/etc.)
    predict(row, /*pred_margin=*/1, tmp);
    postprocess(tmp);

    const int nwrite = (nclass < out_len) ? nclass : out_len;
    for (int i = 0; i < nwrite; ++i) out[i] = tmp[i];
    return nwrite;
}

double lgbm_predict_score_f32(const float* x, int n_features) {
    double scores[MAX_N_CLASS];
    int n = lgbm_predict_vector_f32(x, n_features, scores, MAX_N_CLASS);
    return (n > 0) ? scores[0] : 0.0;   // for binary/regression: first score after postprocess
}

int lgbm_predict_class_f32(const float* x, int n_features) {
    double scores[MAX_N_CLASS];
    int n = lgbm_predict_vector_f32(x, n_features, scores, MAX_N_CLASS);
    if (n <= 1) {
        // Binary/regression: threshold at 0.5 if probabilities. Adjust if your objective differs.
        return scores[0] >= 0.5 ? 1 : 0;
    } else {
        int best = 0;
        for (int i = 1; i < n; ++i)
            if (scores[i] > scores[best]) best = i;
        return best;
    }
}


#include "header.h"


static const int32_t num_class[] = {  13, };

int32_t get_num_target(void) {
  return N_TARGET;
}
void get_num_class(int32_t* out) {
  for (int i = 0; i < N_TARGET; ++i) {
    out[i] = num_class[i];
  }
}
int32_t get_num_feature(void) {
  return 94;
}
const char* get_threshold_type(void) {
  return "float64";
}
const char* get_leaf_output_type(void) {
  return "float64";
}

void predict(union Entry* data, int pred_margin, double* result) {
  unsigned int tmp;
  predict_unit0(data, result);
  predict_unit1(data, result);
  predict_unit2(data, result);
  
  // Apply base_scores
  result[0] += 0;
  result[1] += 0;
  result[2] += 0;
  result[3] += 0;
  result[4] += 0;
  result[5] += 0;
  result[6] += 0;
  result[7] += 0;
  result[8] += 0;
  result[9] += 0;
  result[10] += 0;
  result[11] += 0;
  result[12] += 0;
  
  // Apply postprocessor
  if (!pred_margin) { postprocess(result); }
}

// Apply postprocessor for a single target
static void postprocess_impl(double* target_result, int num_class) {
  double max_margin = target_result[0];
  double norm_const = 0.0;
  double t;
  for (int k = 1; k < num_class; ++k) {
    if (target_result[k] > max_margin) {
      max_margin = target_result[k];
    }
  }
  for (int k = 0; k < num_class; ++k) {
    t = exp(target_result[k] - max_margin);
    norm_const += t;
    target_result[k] = t;
  }
  for (int k = 0; k < num_class; ++k) {
    target_result[k] /= (double)norm_const;
  }
}

void postprocess(double* result) {
  // softmax
  postprocess_impl(&result[0], 13);
}


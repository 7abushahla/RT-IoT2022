#include <Arduino.h>
#include "xgb_wrap.h"
#include "xgb_labels.h"   // the header you just wrote

#define INPUT_DIM   94
#define NUM_ITERS   10000
#define BATCH       1      // increase if you still see 0.0000 ms

// Preprocessed sample from Python (make it NON-const because predict(float*) needs float*)
static const float Xf[INPUT_DIM] = {
  -1.4116956f, -0.18476674f, -0.039243355f, -0.57866377f, -0.51474041f, -0.54112536f, -0.32181111f, 0.12058315f,
  0.12065638f, 0.12062006f, 0.36582685f, -0.57956153f, -0.0058834325f, -0.30279472f, -0.44441816f, 0.172683f,
  -0.044832811f, -0.38126367f, 0.35925177f, 0.59046739f, -0.55538052f, -0.49170452f, -0.55805647f, -0.098239638f,
  0.0f, -0.016975235f, -0.016448833f, 1.0054787f, -0.65628535f, -0.59171414f, -0.18199365f, -0.62993717f,
  -0.26037058f, -0.74278361f, -0.21096753f, -0.60074139f, -0.71686429f, -0.27978122f, -0.69918746f, -0.31448436f,
  -0.55644727f, -0.54357797f, -0.01058036f, -0.26964867f, -0.039033215f, -0.10054152f, -0.16925305f, -0.016220458f,
  -0.30149484f, -0.040323764f, -0.07476715f, -0.11610999f, -0.025493743f, -0.26883566f, -0.039261725f, -0.13477188f,
  -0.16623086f, 0.13782649f, -0.57980216f, -0.46938577f, -0.61824411f, -0.16905496f, -0.59314102f, -0.15524092f,
  -0.5248313f, -0.21597643f, -0.094163395f, -0.13695471f, -0.45558763f, -0.39895615f, -0.14466932f, -0.46870884f,
  -0.13309336f, -0.21631862f, -0.21449991f, -0.026001193f, -0.21629414f, -0.034769282f, -0.54036176f, -0.42199826f,
  -0.43852174f, 0.0f, 1.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f,
  0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f
};

static float inference_times[NUM_ITERS];
static volatile int sink_cls;   // prevent optimization

// measure loop/micros overhead (same structure, no model call)
static inline float measure_baseline_ms() {
  unsigned long t0 = micros();
  for (int b = 0; b < BATCH; ++b) {
    asm volatile("" ::: "memory");
  }
  unsigned long t1 = micros();
  return (t1 - t0) / 1000.0f;   // ms per BATCH empty iters
}

void setup() {
  Serial.begin(115200); while (!Serial) {}

  // warm-up a few calls
  for (int k = 0; k < 5; ++k) {
    float p = 0.0f;
    sink_cls = xgb_predict_best_f32(Xf, INPUT_DIM, &p);
  }

  Serial.println("XGB timing with batching + baseline subtraction");

  float baseline_ms = measure_baseline_ms();

  float total = 0.0f;
  for (int i = 0; i < NUM_ITERS; ++i) {
    unsigned long start_us = micros();
    for (int b = 0; b < BATCH; ++b) {
      float p = 0.0f;
      sink_cls = xgb_predict_best_f32(Xf, INPUT_DIM, &p);
    }
    unsigned long end_us = micros();

    float window_ms = (end_us - start_us) / 1000.0f;
    float inf_ms = (window_ms - baseline_ms) / (float)BATCH;
    if (inf_ms < 0) inf_ms = 0;  // guard tiny negatives
    inference_times[i] = inf_ms;
    total += inf_ms;

    if (((i + 1) % 100) == 0) {
      Serial.print("Iteration "); Serial.print(i + 1);
      Serial.print(" - Inference Time: "); Serial.print(inf_ms, 6); Serial.println(" ms");
    }
  }

  // stats
  float avg = total / NUM_ITERS;
  float ssd = 0.0f;
  for (int i = 0; i < NUM_ITERS; ++i) {
    float d = inference_times[i] - avg; ssd += d * d;
  }
  float stddev = (NUM_ITERS > 1) ? sqrtf(ssd / (NUM_ITERS - 1)) : 0.0f;
  float fps = (avg > 0.0f) ? 1000.0f / avg : 0.0f;
  float fps_std = (avg > 0.0f) ? (1000.0f / (avg * avg)) * stddev : 0.0f;

  Serial.println("\n=== Timing Statistics (XGB) ===");
  Serial.print("Batch size: "); Serial.println(BATCH);
  Serial.print("Baseline per-batch: "); Serial.print(baseline_ms, 4); Serial.println(" ms");
  Serial.print("Average Inference Time: "); Serial.print(avg, 4); Serial.println(" ms");
  Serial.print("Std Dev: "); Serial.print(stddev, 4); Serial.println(" ms");
  Serial.print("Average FPS: "); Serial.print(fps, 4); Serial.println(" fps");
  Serial.print("FPS Std Dev: "); Serial.print(fps_std, 4); Serial.println(" fps");

  // optional: show one prediction with probs vector
  float prob_best = 0.0f;
  int cls = xgb_predict_best_f32(Xf, INPUT_DIM, &prob_best);
  Serial.print("class idx = "); Serial.print(cls);
  Serial.print(", prob = ");   Serial.println(prob_best, 6);
  Serial.print("label = ");    Serial.println(XGB_LABELS[cls]);

  // float probs[13];
  // int n = xgb_predict_vector_f32(Xf, INPUT_DIM, probs, 13);
  // for (int i=0;i<n;i++){ Serial.print("p[");Serial.print(i);Serial.print("]=");Serial.println(probs[i],6); }
}

void loop() {}

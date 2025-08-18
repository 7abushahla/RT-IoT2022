#include <Arduino.h>
#include "treelite_wrap.h"   // our wrapper


#define INPUT_DIM   94
#define NUM_ITERS   10000
#define BATCH       1         // bigger batch -> better resolution

// Preprocessed sample from Python (make it NON-const because predict(float*) needs float*)
static const float Xf[INPUT_DIM] = {
  0.27428052f, -0.17672582f, -0.038432702f, -0.56422305f, -0.53154075f, -0.52221757f, -0.33099365f, -0.61980534f,
  -0.619708f, -0.61975706f, 0.36481243f, -0.5845682f, -2.250771f, -1.6757277f, -0.49816912f, -1.4970684f,
  -1.3717427f, -0.38184038f, -1.080261f, -0.97402722f, -0.55476999f, -0.4910422f, -0.57775187f, -0.098205313f,
  0.0f, -0.016770789f, -0.016088003f, -0.36703146f, -0.79046935f, -0.59513569f, -0.95735919f, -0.62953931f,
  1.4027292f, -0.64097869f, -0.25363225f, -0.30419084f, -0.61629647f, 0.7230162f, -0.78043824f, -0.36963901f,
  -0.68464023f, -0.9011206f, -0.0096766278f, -0.27056411f, -0.038674243f, -0.10158525f, -0.17151634f, 0.26594937f,
  -0.29383266f, -0.03844725f, -0.020393107f, -0.11964304f, -0.022444366f, -0.26310834f, -0.038450573f, -0.11110002f,
  -0.15341039f, -0.60391611f, -0.55112898f, -0.44761351f, -0.62492746f, -0.16750014f, -0.59295428f, -0.1650911f,
  -0.52455825f, -0.23057461f, -0.095052831f, -0.13699888f, -0.43512595f, -0.38447893f, -0.13964027f, -0.44984534f,
  -0.13316634f, -0.21770799f, -0.21573913f, -0.025975097f, -0.21757007f, -0.035057396f, -0.5447976f, -0.42253691f,
  -0.4482443f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 1.0f, 0.0f,
  0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f
};

static float inference_times[NUM_ITERS];
static volatile int32_t sink_cls;   // prevent optimization


// Measure loop/micros overhead without the model call
static inline float measure_baseline_ms() {
  unsigned long t0 = micros();
  for (int b = 0; b < BATCH; ++b) {
    asm volatile("" ::: "memory");
  }
  unsigned long t1 = micros();
  return (t1 - t0) / 1000.0f;   // ms for BATCH empty iterations
}

void setup() {
  Serial.begin(115200); while (!Serial) {}

  // Warm-up to stabilize caches/branch prediction
  for (int k = 0; k < 5; ++k) sink_cls = lgbm_predict_class_f32(Xf, INPUT_DIM);

  Serial.println("LGBM timing with batching + baseline subtraction");

  // Baseline cost of empty loop (ms per BATCH)
  float baseline_ms = measure_baseline_ms();

  float total_time = 0.0f;
  for (int i = 0; i < NUM_ITERS; ++i) {
    unsigned long start_us = micros();
    for (int b = 0; b < BATCH; ++b) {
      sink_cls = lgbm_predict_class_f32(Xf, INPUT_DIM);
    }
    unsigned long end_us = micros();

    // Per-inference time in ms: (window - baseline)/BATCH
    float window_ms = (end_us - start_us) / 1000.0f;
    float inf_time = (window_ms - baseline_ms) / (float)BATCH;
    if (inf_time < 0) inf_time = 0; // guard tiny negatives from noise

    inference_times[i] = inf_time;
    total_time += inf_time;

    if (((i + 1) % 100) == 0) {
      Serial.print("Iteration ");
      Serial.print(i + 1);
      Serial.print(" - Inference Time: ");
      Serial.print(inf_time, 6);
      Serial.println(" ms");
    }
  }

  // Stats
  float avg_time = total_time / NUM_ITERS;
  float ssd = 0.0f;
  for (int i = 0; i < NUM_ITERS; ++i) {
    float d = inference_times[i] - avg_time;
    ssd += d * d;
  }
  float std_dev = (NUM_ITERS > 1) ? sqrtf(ssd / (NUM_ITERS - 1)) : 0.0f;
  float avg_fps = (avg_time > 0.0f) ? 1000.0f / avg_time : 0.0f;
  float std_fps = (avg_time > 0.0f) ? (1000.0f / (avg_time * avg_time)) * std_dev : 0.0f;

  Serial.println("\n=== Timing Statistics (LGBM) ===");
  Serial.print("Batch size: "); Serial.println(BATCH);
  Serial.print("Baseline per-batch: "); Serial.print(baseline_ms, 4); Serial.println(" ms");
  Serial.print("Average Inference Time: "); Serial.print(avg_time, 4); Serial.println(" ms");
  Serial.print("Std Dev: "); Serial.print(std_dev, 4); Serial.println(" ms");
  Serial.print("Average FPS: "); Serial.print(avg_fps, 4); Serial.println(" fps");
  Serial.print("FPS Std Dev: "); Serial.print(std_fps, 4); Serial.println(" fps");

  // (Optional) Show a single prediction and score once
  int cls = lgbm_predict_class_f32(Xf, INPUT_DIM);
  double s = lgbm_predict_score_f32(Xf, INPUT_DIM);
  Serial.print("class idx = "); Serial.println(cls);
  Serial.print("score = "); Serial.println(s, 4);
}

void loop() {}




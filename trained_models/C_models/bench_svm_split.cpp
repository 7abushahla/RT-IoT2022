// bench_svm_split.cpp - timing for split SVM implementation (host Linux/macOS)
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstdint>
#include <chrono>

#include "svm_src/svm_model_split.h"     // Split SVM implementation

using namespace std;
using clk = chrono::high_resolution_clock;

using namespace Eloquent::ML::Port;  // brings SVM into scope

// ---- match your Arduino settings ----
#define INPUT_DIM   94
#define NUM_ITERS   10000
#define BATCH       1

// One preprocessed sample (same vector you used on-device)
static float X[INPUT_DIM] = {
  -1.4110634f, -0.18461952f, -0.043484055f, -0.58630764f, -0.51419997f, -0.55216718f, -0.32109129f, 0.12219629f,
  0.12226898f, 0.12223294f, 0.36531693f, -0.58023912f, -0.0075954632f, -0.30413029f, -0.44346613f, 0.17217696f,
  -0.045220543f, -0.38211912f, 0.35834748f, 0.59023249f, -0.55542302f, -0.49049318f, -0.55770957f, -0.098205313f,
  0.0f, -0.016975235f, -0.016449537f, 1.0073147f, -0.65658224f, -0.59568542f, -0.18169956f, -0.63019639f,
  -0.26095688f, -0.74309605f, -0.21070656f, -0.60028261f, -0.71708763f, -0.28127944f, -0.69963104f, -0.31358472f,
  -0.55659568f, -0.54391086f, -0.010346594f, -0.26909763f, -0.043247309f, -0.10044012f, -0.16907178f, -0.016204832f,
  -0.30108973f, -0.039177321f, -0.075054303f, -0.11630663f, -0.022595281f, -0.2682929f, -0.043504938f, -0.1334336f,
  -0.16601279f, 0.13952224f, -0.57915133f, -0.46735573f, -0.61844939f, -0.16840823f, -0.58732027f, -0.15485236f,
  -0.52474123f, -0.21509591f, -0.091875561f, -0.13729002f, -0.4550617f, -0.39871994f, -0.1462857f, -0.46831927f,
  -0.13352387f, -0.21690595f, -0.21452676f, -0.028600182f, -0.21666253f, -0.034397677f, -0.54107481f, -0.42234224f,
  -0.43925253f, 0.0f, 1.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f,
  0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f
};

static float times_ms[NUM_ITERS];
static volatile int sink_cls = 0;

static inline float measure_baseline_ms() {
  auto t0 = clk::now();
  for (int b = 0; b < BATCH; ++b) {
    asm volatile("" ::: "memory");
  }
  auto t1 = clk::now();
  chrono::duration<double, std::milli> dt = t1 - t0;
  return static_cast<float>(dt.count());
}

int main() {
  SVM clf;

  // one-off prediction
  int cls0 = clf.predict(X);
  printf("SVM single inference -> class idx = %d\n", cls0);

  // warm-up
  for (int k = 0; k < 5; ++k) sink_cls = clf.predict(X);

  printf("SVM timing with batching + baseline subtraction\n");
  printf("NUM_ITERS=%d, BATCH=%d\n", NUM_ITERS, BATCH);

  float baseline_ms = measure_baseline_ms();
  printf("Baseline per-batch: %.6f ms\n", baseline_ms);

  double total = 0.0;

  for (int i = 0; i < NUM_ITERS; ++i) {
    auto t0 = clk::now();
    for (int b = 0; b < BATCH; ++b) {
      sink_cls = clf.predict(X);
    }
    auto t1 = clk::now();
    chrono::duration<double, std::milli> dt = t1 - t0;
    float window_ms = static_cast<float>(dt.count());
    float inf_ms = (window_ms - baseline_ms) / float(BATCH);
    if (inf_ms < 0) inf_ms = 0;
    times_ms[i] = inf_ms;
    total += inf_ms;

    if (((i + 1) % 100) == 0) {
      printf("Iteration %d - Inference Time: %.6f ms\n", i + 1, inf_ms);
    }
  }

  float avg = static_cast<float>(total / NUM_ITERS);
  double ssd = 0.0;
  for (int i = 0; i < NUM_ITERS; ++i) {
    double d = times_ms[i] - avg; ssd += d * d;
  }
  float stddev = (NUM_ITERS > 1) ? static_cast<float>(sqrt(ssd / (NUM_ITERS - 1))) : 0.0f;
  float fps = (avg > 0.0f) ? 1000.0f / avg : 0.0f;
  float fps_std = (avg > 0.0f) ? (1000.0f / (avg * avg)) * stddev : 0.0f;

  printf("\n=== Timing Statistics (SVM Split) ===\n");
  printf("Average Inference Time: %.4f ms\n", avg);
  printf("Std Dev: %.4f ms\n", stddev);
  printf("Average FPS: %.4f fps\n", fps);
  printf("FPS Std Dev: %.4f fps\n", fps_std);

  return 0;
}

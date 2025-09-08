#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <time.h>
#include "xgb_wrap.h"
#include "xgb_labels.h"

#define INPUT_DIM  94
#define NUM_ITERS  10000
#define BATCH      1        // bump (e.g., 50/100) if you want even smoother timing

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
static volatile int sink_cls;  // prevent optimization

static inline double now_ms(void) {
  struct timespec ts;
  clock_gettime(CLOCK_MONOTONIC, &ts);
  return ts.tv_sec * 1000.0 + ts.tv_nsec / 1e6;
}

// Measure loop overhead (no model call), for baseline subtraction
static inline double measure_baseline_ms(void) {
  double t0 = now_ms();
  for (int b = 0; b < BATCH; ++b) {
    __asm__ __volatile__("" ::: "memory");
  }
  double t1 = now_ms();
  return t1 - t0;  // ms for BATCH empty iterations
}

int main() {
  // warm-up
  for (int k = 0; k < 5; ++k) {
    float p = 0.0f;
    sink_cls = xgb_predict_best_f32(Xf, INPUT_DIM, &p);
  }

  printf("XGB timing (RPi) with batching + baseline subtraction\n");
  double baseline_ms = measure_baseline_ms();

  double total = 0.0;
  for (int i = 0; i < NUM_ITERS; ++i) {
    double t0 = now_ms();
    for (int b = 0; b < BATCH; ++b) {
      float p = 0.0f;
      sink_cls = xgb_predict_best_f32(Xf, INPUT_DIM, &p);
    }
    double t1 = now_ms();

    double window_ms = t1 - t0;
    double inf_ms = (window_ms - baseline_ms) / (double)BATCH;
    if (inf_ms < 0) inf_ms = 0;
    inference_times[i] = (float)inf_ms;
    total += inf_ms;

    if (((i + 1) % 100) == 0) {
      printf("Iteration %d - Inference Time: %.6f ms\n", i + 1, inf_ms);
      fflush(stdout);
    }
  }

  double avg = total / NUM_ITERS;
  double ssd = 0.0;
  for (int i = 0; i < NUM_ITERS; ++i) {
    double d = inference_times[i] - avg; ssd += d * d;
  }
  double stddev = (NUM_ITERS > 1) ? sqrt(ssd / (NUM_ITERS - 1)) : 0.0;
  double fps = (avg > 0.0) ? 1000.0 / avg : 0.0;
  double fps_std = (avg > 0.0) ? (1000.0 / (avg * avg)) * stddev : 0.0;

  printf("\n=== Timing Statistics (XGB / RPi) ===\n");
  printf("Batch size: %d\n", BATCH);
  printf("Baseline per-batch: %.4f ms\n", baseline_ms);
  printf("Average Inference Time: %.4f ms\n", avg);
  printf("Std Dev: %.4f ms\n", stddev);
  printf("Average FPS: %.4f fps\n", fps);
  printf("FPS Std Dev: %.4f fps\n", fps_std);

  // One labeled prediction, like on Arduino
  float prob_best = 0.0f;
  int cls = xgb_predict_best_f32(Xf, INPUT_DIM, &prob_best);
  printf("class idx = %d, prob = %.4f, label = %s\n", cls, prob_best, XGB_LABELS[cls]);

  return 0;
}

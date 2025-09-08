// bench_rf.c  —  Linux C benchmark for emlearn RandomForest
// Build example:
//   gcc -O2 -I . bench_rf.c -o bench_rf
// or if rf_model.c exists separately:
//   gcc -O2 -I . bench_rf.c rf_model.c -o bench_rf
//
// If rf_model.h expects int16_t features (common with emlearn),
// we quantize the float vector with SCALE.

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "rf_model.h"      // emlearn-generated header
// #include "rf_labels.h"  // optional if you exported labels

#define INPUT_DIM   94
#define NUM_ITERS   10000
#define BATCH       50          // bigger batch -> better resolution
#define SCALE       1024.0f     // float -> int16 quantization scale

// ---- timing helpers (monotonic clock) ----
static inline uint64_t now_us(void) {
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC_RAW, &ts);
    return (uint64_t)ts.tv_sec * 1000000ull + (uint64_t)ts.tv_nsec / 1000ull;
}

// ---- your preprocessed sample (float) ----
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

static int16_t Xi16[INPUT_DIM];
static float inference_times[NUM_ITERS];
static volatile int32_t sink_cls;   // prevent optimization

// measure cost of loop without model call
static inline float measure_baseline_ms(void) {
    uint64_t t0 = now_us();
    for (int b = 0; b < BATCH; ++b) {
        __asm__ __volatile__("" ::: "memory");
    }
    uint64_t t1 = now_us();
    return (float)(t1 - t0) / 1000.0f;
}

int main(void) {
    // quantize float -> int16 per emlearn header
    for (int i = 0; i < INPUT_DIM; ++i) {
        float v = Xf[i] * SCALE;
        if (v > 32767.0f)  v = 32767.0f;
        if (v < -32768.0f) v = -32768.0f;
        Xi16[i] = (int16_t)lrintf(v);
    }

    // warm-up
    for (int k = 0; k < 5; ++k) {
        sink_cls = rf_model_predict(Xi16, INPUT_DIM);
    }

    printf("RF timing (Linux) with batching + baseline subtraction\n");
    float baseline_ms = measure_baseline_ms();

    float total = 0.0f;
    for (int i = 0; i < NUM_ITERS; ++i) {
        uint64_t t0 = now_us();
        for (int b = 0; b < BATCH; ++b) {
            sink_cls = rf_model_predict(Xi16, INPUT_DIM);
        }
        uint64_t t1 = now_us();

        float window_ms = (float)(t1 - t0) / 1000.0f;
        float inf_ms = (window_ms - baseline_ms) / (float)BATCH;
        if (inf_ms < 0) inf_ms = 0.0f;

        inference_times[i] = inf_ms;
        total += inf_ms;

        if (((i + 1) % 100) == 0) {
            printf("Iteration %d - Inference Time: %.6f ms\n", i + 1, inf_ms);
            fflush(stdout);
        }
    }

    // stats
    float avg = total / (float)NUM_ITERS;
    float ssd = 0.0f;
    for (int i = 0; i < NUM_ITERS; ++i) {
        float d = inference_times[i] - avg;
        ssd += d * d;
    }
    float stddev = (NUM_ITERS > 1) ? sqrtf(ssd / (NUM_ITERS - 1)) : 0.0f;
    float fps = (avg > 0.0f) ? 1000.0f / avg : 0.0f;
    float fps_std = (avg > 0.0f) ? (1000.0f / (avg * avg)) * stddev : 0.0f;

    printf("\n=== Timing Statistics (RF) ===\n");
    printf("Batch size: %d\n", BATCH);
    printf("Baseline per-batch: %.4f ms\n", baseline_ms);
    printf("Average Inference Time: %.4f ms\n", avg);
    printf("Std Dev: %.4f ms\n", stddev);
    printf("Average FPS: %.4f fps\n", fps);
    printf("FPS Std Dev: %.4f fps\n", fps_std);

    // final class
    int32_t cls = rf_model_predict(Xi16, INPUT_DIM);
    printf("class idx = %d\n", cls);
    // #ifdef RF_NUM_CLASSES
    //   if (cls >= 0 && cls < RF_NUM_CLASSES) {
    //       printf("label = %s\n", RF_LABELS[cls]);
    //   }
    // #endif
    return 0;
}

#include <SDHCI.h>
#include <File.h>
#include <malloc.h> // For mallinfo()
#include <math.h>   // For sqrt()
#include <stdlib.h> // For atof()
#include <string.h> // For memcpy()

// Import TensorFlow stuff
#include "tensorflow/lite/micro/all_ops_resolver.h"
#include "tensorflow/lite/micro/micro_error_reporter.h"
#include "tensorflow/lite/micro/micro_interpreter.h"
#include "tensorflow/lite/micro/system_setup.h"
#include "tensorflow/lite/schema/schema_generated.h"
#include "best_AE_QAT_model.h"  // Your model file after conversion

// Globals, used for compatibility with Arduino-style sketches.
namespace {
  tflite::ErrorReporter* error_reporter = nullptr;
  const tflite::Model* model = nullptr;
  tflite::MicroInterpreter* interpreter = nullptr;
  TfLiteTensor* input = nullptr;
  TfLiteTensor* output = nullptr;
  int inference_count = 0;

  // Memory for TensorFlow Lite
  constexpr int kTensorArenaSize = (100 * 1024);
  uint8_t tensor_arena[kTensorArenaSize];
}

#define BAUDRATE 115200

SDClass SD;
File myFile;

// Define new constants for dummy inference
#define INPUT_SIZE 94   // New input dimension (1 x 94)
#define OUTPUT_SIZE 13  // New output dimension (1 x 13)
#define NUM_ITERATIONS 1000

// Global dummy sample array (size: 94)
// In this example, values are all zeros. (Change if needed.)
float dummy_sample[INPUT_SIZE] = {0};

// "Raw sample" to be copied from the dummy sample during setup.
float raw_sample[INPUT_SIZE];

// Array to hold inference times for export.
float inference_times[NUM_ITERATIONS];

/////////////////////////////////////////////
// Function to report memory usage.
void ReportMemoryUsage(const char* context) {
  struct mallinfo mi = mallinfo();
  Serial.print(context);
  Serial.print(" Free memory: ");
  Serial.println(mi.fordblks, DEC);
}

/////////////////////////////////////////////
// Setup the TensorFlow Lite model and print its input dimensions.
void setupModel() {
  tflite::InitializeTarget();
  memset(tensor_arena, 0, kTensorArenaSize * sizeof(uint8_t));

  static tflite::MicroErrorReporter micro_error_reporter;
  error_reporter = &micro_error_reporter;

  model = tflite::GetModel(model_tflite);
  if (model->version() != TFLITE_SCHEMA_VERSION) {
    Serial.println("Model version mismatch!");
    return;
  }

  static tflite::AllOpsResolver resolver;
  static tflite::MicroInterpreter static_interpreter(
      model, resolver, tensor_arena, kTensorArenaSize, error_reporter);
  interpreter = &static_interpreter;

  ReportMemoryUsage("Before AllocateTensors(): ");
  if (interpreter->AllocateTensors() != kTfLiteOk) {
    Serial.println("AllocateTensors() failed");
    while (1);
  }
  ReportMemoryUsage("After AllocateTensors(): ");
  Serial.println("Area used bytes: " + String(interpreter->arena_used_bytes()));

  input = interpreter->input(0);
  // Note: In your code, output is at index 1.
  output = interpreter->output(0);

  Serial.println("Model input:");
  Serial.print("Number of dimensions: ");
  Serial.println(input->dims->size);
  for (int n = 0; n < input->dims->size; ++n) {
    Serial.print("dims->data[");
    Serial.print(n);
    Serial.print("]: ");
    Serial.println(input->dims->data[n]);
  }
  Serial.print("Input type: ");
  Serial.println(input->type);

  Serial.println("\nModel output:");
  Serial.print("Number of dimensions: ");
  Serial.println(output->dims->size);
  for (int n = 0; n < output->dims->size; ++n) {
    Serial.print("dims->data[");
    Serial.print(n);
    Serial.print("]: ");
    Serial.println(output->dims->data[n]);
  }
  Serial.print("Output type: ");
  Serial.println(output->type);

  Serial.println("Completed TensorFlow setup");
  Serial.println();
}

/////////////////////////////////////////////
// Function to perform inference using the raw sample.
// The function runs inference NUM_ITERATIONS times and computes timing statistics.
// At the end, it exports all inference times and statistics to a text file on the SD card.
void performInference() {
  // Confirm that the input tensor's shape is [1, INPUT_SIZE]
  int batch = input->dims->data[0];   // Expected to be 1
  int size = input->dims->data[1];    // Expected to be INPUT_SIZE
  if (batch != 1 || size != INPUT_SIZE) {
    Serial.println("Error: Model input dimensions do not match expected dummy sample dimensions!");
    Serial.print("Model input dimensions: [");
    Serial.print(batch);
    Serial.print(", ");
    Serial.print(size);
    Serial.println("]");
    return;
  }

  float total_time = 0;
  for (int i = 0; i < NUM_ITERATIONS; ++i) {
    // Copy raw_sample into the model's input tensor.
    // This ensures we are using the same data every time.
    // memcpy(input->data.int8, raw_sample, sizeof(raw_sample));
    for (int j = 0; j < INPUT_SIZE; ++j) {
      input->data.f[j] = raw_sample[j];
    }

    unsigned long start_time = micros();
    if (interpreter->Invoke() != kTfLiteOk) {
      Serial.println("Inference failed.");
      return;
    }
    unsigned long end_time = micros();
    float inf_time = (end_time - start_time) / 1000.0; // Convert microseconds to milliseconds
    inference_times[i] = inf_time;
    total_time += inf_time;
    Serial.print("Iteration ");
    Serial.print(i + 1);
    Serial.print(" - Inference Time: ");
    Serial.print(inf_time, 4);
    Serial.println(" ms");
  }

  // Calculate average inference time and standard deviation.
  float avg_time = total_time / NUM_ITERATIONS;
  float sum_sq_diff = 0;
  for (int i = 0; i < NUM_ITERATIONS; ++i) {
    float diff = inference_times[i] - avg_time;
    sum_sq_diff += diff * diff;
  }
  float std_dev = (NUM_ITERATIONS > 1) ? sqrt(sum_sq_diff / (NUM_ITERATIONS - 1)) : 0;
  
  // Compute average FPS. (FPS = 1000 / t)
  float avg_fps = (avg_time > 0) ? 1000.0 / avg_time : 0;
  
  // Compute FPS standard deviation using error propagation:
  // If FPS = 1000 / t, then d(FPS)/dt = -1000 / t^2,
  // so std_fps ~ (1000 / avg_time^2) * std_dev.
  float std_fps = (avg_time > 0) ? (1000.0 / (avg_time * avg_time)) * std_dev : 0;

  Serial.println("\n=== Timing Statistics ===");
  Serial.print("Average Inference Time: ");
  Serial.print(avg_time, 4);
  Serial.println(" ms");
  Serial.print("Inference Time Standard Deviation: ");
  Serial.print(std_dev, 4);
  Serial.println(" ms");

  Serial.println("\n=== FPS Statistics ===");
  Serial.print("Average FPS: ");
  Serial.print(avg_fps, 4);
  Serial.println(" fps");
  Serial.print("FPS Standard Deviation: ");
  Serial.print(std_fps, 4);
  Serial.println(" fps");

  // Export all inference times to an SD file so you can manually remove outliers.
  File myFile = SD.open("dir/inference_results.txt", FILE_WRITE);
  if (myFile) {
    myFile.println("Iteration\tInference Time (ms)");
    for (int i = 0; i < NUM_ITERATIONS; i++) {
      myFile.print(i + 1);
      myFile.print("\t");
      myFile.println(inference_times[i], 4);
    }
    myFile.println();
    myFile.println("=== Timing Statistics ===");
    myFile.print("Average Inference Time: ");
    myFile.println(avg_time, 4);
    myFile.print("Inference Time Standard Deviation: ");
    myFile.println(std_dev, 4);
    myFile.println();
    myFile.println("=== FPS Statistics ===");
    myFile.print("Average FPS: ");
    myFile.println(avg_fps, 4);
    myFile.print("FPS Standard Deviation: ");
    myFile.println(std_fps, 4);
    myFile.close();
    Serial.println("Inference results saved to dir/inference_results.txt");
  } else {
    Serial.println("Error opening file for writing results.");
  }
}

/////////////////////////////////////////////
// Arduino setup function.
void setup() {
  Serial.begin(BAUDRATE);
  while (!Serial) { ; }

  Serial.println("Initializing SD card...");
  while (!SD.begin()) {
    Serial.println("Insert SD card.");
  }
  Serial.println("SD card initialized.");

  SD.mkdir("dir/");

  Serial.println("Dummy sample loaded.");

  // Copy the dummy sample to raw_sample once.
  memcpy(raw_sample, dummy_sample, sizeof(dummy_sample));
  
  // Setup the TensorFlow Lite model.
  setupModel();
}

/////////////////////////////////////////////
// Arduino main loop.
void loop() {
  Serial.println("Starting inference with raw sample...");
  performInference();
  
  Serial.println("\nInference complete. Halting execution.");
  while (true);
}




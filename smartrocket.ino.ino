#include <Wire.h>
#include <Arduino_LED_Matrix.h>
#include <Adafruit_BMP280.h>
ArduinoLEDMatrix matrix;
Adafruit_BMP280 bmp;

// Sea level pressure (adjust for your location if needed)
#define SEA_LEVEL_PRESSURE 1013.25

void setup() {
  Serial.begin(9600);
  Wire.begin();
  matrix.begin();

  if (!bmp.begin(0x76)) {   // Try 0x77 if needed
    Serial.println("Error: BMP280 sensor not found!");
    while (1);
  }

  Serial.println("=== Rocket Environmental System Ready ===");
}

void loop() {

  float temperatureC = bmp.readTemperature();
  float pressurePa = bmp.readPressure();
  float pressurehPa = pressurePa / 100.0;
  float altitudeM = bmp.readAltitude(SEA_LEVEL_PRESSURE);

  Serial.println("----- Sensor Data -----");

  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" °C");

  Serial.print("Pressure: ");
  Serial.print(pressurehPa);
  Serial.println(" hPa");

  Serial.print("Altitude: ");
  Serial.print(altitudeM);
  Serial.println(" meters");

  Serial.println("-----------------------");
  Serial.println();

  showRunningIndicator();

  delay(2000);
}

// Simple dot indicator on matrix
void showRunningIndicator() {
  uint8_t frame[8][8] = {
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,1,1,0,0,0},
    {0,0,0,1,1,0,0,0},
    {0,0,0,1,1,0,0,0},
    {0,0,0,1,1,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0}
  };

  matrix.renderBitmap(frame, 8, 8);
}
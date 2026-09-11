# Smart Rocket Telemetry & Stability Monitoring

A miniature avionics project that simulates **real-time rocket flight monitoring** using an **Arduino UNO R4 WiFi**, **MPU6050**, and **BMP280** sensors.

The system measures the rocket's **tilt and altitude**, processes sensor data in real time, and activates alerts when instability is detected. The project demonstrates practical concepts used in **aerospace telemetry, flight monitoring, sensor integration, and embedded systems**.

## Features

* Real-time rocket flight monitoring
* Tilt and orientation measurement using MPU6050
* Altitude measurement using BMP280
* Arduino UNO R4 WiFi-based processing
* Instability detection and alerts
* Real-time sensor data processing
* Embedded avionics system simulation

## Hardware Used

* Arduino UNO R4 WiFi
* MPU6050 Accelerometer & Gyroscope
* BMP280 Barometric Pressure Sensor
* Alert indicator/buzzer
* Jumper wires and breadboard

## Programming

The project is developed using **Arduino programming (C/C++)**.

## Working Principle

1. The **MPU6050** measures acceleration and rotational movement.
2. The **BMP280** measures atmospheric pressure and estimates altitude.
3. The Arduino processes the sensor readings in real time.
4. The system monitors the rocket's stability based on the collected data.
5. If the detected motion exceeds the defined stability limits, an **alert is activated**.
6. The processed telemetry data can be used to understand the simulated flight behavior.

## Applications

This project demonstrates concepts relevant to:

* Aerospace avionics
* Rocket flight monitoring
* Telemetry systems
* Flight stability monitoring
* Embedded sensor systems
* Educational aerospace projects

## Future Improvements

* Wireless telemetry dashboard
* Real-time graphical data visualization
* GPS integration
* SD card flight-data logging
* Additional environmental sensors
* More advanced stability algorithms
* Web-based monitoring using Wi-Fi

## Project Information

**Project:** Smart Rocket Telemetry & Stability Monitoring
**Platform:** Arduino UNO R4 WiFi
**Sensors:** MPU6050 + BMP280
**Domain:** Embedded Systems / Aerospace Telemetry

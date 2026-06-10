# Day 11 – Multi-Sensor Dashboard

## Overview

This project combines data from multiple sensors into a single dashboard running on an Arduino Uno. Sensor readings are collected and transmitted through the Serial Monitor in CSV format for real-time monitoring and analysis.

The dashboard integrates:

* LDR (Light Sensor)
* DHT22 Temperature & Humidity Sensor
* Soil Moisture Sensor
* HC-SR04 Ultrasonic Distance Sensor

---

## Objectives

* Integrate multiple sensors into a single Arduino sketch.
* Monitor environmental conditions in real time.
* Generate CSV-formatted output for logging and visualization.
* Prepare a unified sensor dashboard for future IoT and automation projects.

---

## Components Used

* Arduino Uno
* DHT22 Temperature & Humidity Sensor
* LDR with 10 kΩ Resistor
* Soil Moisture Sensor
* HC-SR04 Ultrasonic Sensor
* Breadboard and Jumper Wires

---

## CSV Output Format

```text
Temperature(C),Humidity(%),LDR,Soil,Distance(cm)
```

### Column Description

| Field          | Description                            |
| -------------- | -------------------------------------- |
| Temperature(C) | Ambient temperature in °C              |
| Humidity(%)    | Relative humidity percentage           |
| LDR            | Raw light sensor ADC value             |
| Soil           | Raw soil moisture ADC value            |
| Distance(cm)   | Distance measured by ultrasonic sensor |

---

## Sample Output

```text
Temperature(C),Humidity(%),LDR,Soil,Distance(cm)
33.10,79.90,411,1021,177.97
33.10,80.00,416,1023,178.27
33.10,79.90,421,1022,177.86
```

---

## Observations

* Temperature remained around 33°C.
* Humidity remained close to 80%.
* LDR values changed with light intensity.
* Soil moisture readings remained stable during testing.
* Ultrasonic sensor measured distance continuously in centimeters.

---

## Learning Outcomes

* Integrated multiple sensors into a single dashboard.
* Implemented CSV-based serial data logging.
* Learned multi-sensor data acquisition and monitoring.
* Improved sensor interfacing and debugging skills.
* Prepared a foundation for future IoT monitoring systems.

---

## Conclusion

A multi-sensor dashboard was successfully developed using Arduino Uno. The system continuously monitored temperature, humidity, light intensity, soil moisture, and distance, providing a centralized view of environmental conditions and a strong foundation for upcoming automation projects.


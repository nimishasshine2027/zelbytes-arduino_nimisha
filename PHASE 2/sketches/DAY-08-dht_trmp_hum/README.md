# Day 08 – DHT22 Temperature & Humidity Logger

## Objective

The objective of this experiment is to interface a DHT22 (AM2301) temperature and humidity sensor with an Arduino Uno and log environmental conditions in CSV format.

The DHT22 provides:

* Temperature in °C
* Relative Humidity (%RH)

The sensor uses a single-wire digital communication protocol and requires a minimum interval of 2 seconds between readings.

---

## Components Used

* Arduino Uno
* DHT22 / AM2301 Sensor
* 10 kΩ Pull-up Resistor
* Breadboard
* Jumper Wires

---

## Wiring

| DHT22 Pin | Arduino |
| --------- | ------- |
| VCC       | 5V      |
| DATA      | D4      |
| GND       | GND     |

10 kΩ resistor connected between:

DATA ↔ VCC

---

## Library Used

* Adafruit DHT Sensor Library
* Adafruit Unified Sensor Library

Installed using Arduino Library Manager.

---

## Features Implemented

✔ Temperature Measurement

✔ Humidity Measurement

✔ 2 Second Read Interval

✔ millis() Scheduling

✔ NaN Error Detection

✔ CSV Output Format

✔ External Configuration File

---

## CSV Output Format

ms,temp_c,humidity_pct

2000,29.4,74.8

4000,29.5,75.0

6000,29.4,75.2

---

## Error Handling

If a sensor read fails:

ERR,NaN,NaN

is printed to the Serial Monitor.

---

## Sensor Placement Notes

The sensor was mounted away from direct airflow and water droplets.

The sensor was not placed directly near mist, irrigation spray, or heat sources to avoid inaccurate humidity readings.

Recommended wire length is less than 20 cm.

---

## Quick Validation Test

Breathing gently near the sensor causes humidity readings to rise.

This confirms proper sensor operation.

---

## Observations

* Temperature remained stable during testing.
* Humidity increased when exposed to breath.
* 2-second intervals prevented stale readings.
* No NaN errors occurred after initialization.

---

## Conclusion

The DHT22 sensor was successfully interfaced with the Arduino Uno. Temperature and humidity values were measured and logged in CSV format while maintaining the required 2-second sampling interval and handling sensor read errors correctly.


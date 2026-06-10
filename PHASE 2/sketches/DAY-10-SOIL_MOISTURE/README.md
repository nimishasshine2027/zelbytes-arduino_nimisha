# Day 10 – Soil Moisture Analog Calibration

## Overview

This project demonstrates how to measure soil moisture using an analog soil moisture sensor and calibrate the sensor readings to a relative moisture percentage. The sensor output is read through an analog input pin, and the measured ADC values are mapped to a 0–100% moisture index using dry and wet calibration points.

This experiment introduces sensor calibration, analog signal processing, and moisture monitoring concepts that will be used in future irrigation and automation projects.

---

## Learning Objectives

* Understand the difference between capacitive and resistive soil moisture sensors.
* Read analog sensor values using a microcontroller.
* Record dry and wet calibration endpoints.
* Convert raw ADC readings into a moisture percentage.
* Store calibration values for future irrigation control logic.

---

## Components Required

* ESP32 / Arduino board
* Soil moisture sensor (capacitive or resistive)
* Jumper wires
* Breadboard (optional)
* USB cable
* Arduino IDE

---

## Wiring

### Soil Moisture Sensor

| Sensor Pin | ESP32 Connection                |
| ---------- | ------------------------------- |
| VCC        | 3.3V                            |
| GND        | GND                             |
| AO         | Analog Input Pin (e.g., GPIO34) |

> Note: If using a resistive sensor, power the sensor only during sampling to reduce probe corrosion.

---

## Calibration Procedure

### Dry Calibration

1. Keep the sensor probe completely dry and exposed to air.
2. Upload the sketch and monitor the ADC value.
3. Record the stable reading as:

```cpp
DRY_ADC
```

### Wet Calibration

1. Insert the sensor into saturated soil or water.
2. Observe the ADC value.
3. Record the stable reading as:

```cpp
WET_ADC
```

These values may vary depending on the sensor and soil type.

---

## Working Principle

The soil moisture sensor outputs an analog voltage proportional to the moisture content of the surrounding soil.

The microcontroller:

1. Reads the analog voltage.
2. Converts it into an ADC value.
3. Maps the value between dry and wet calibration limits.
4. Displays the moisture level as a percentage.

---

## Sample Output

```text
ADC: 215 | Moisture: 100%
ADC: 272 | Moisture: 100%
ADC: 251 | Moisture: 100%
```

---

## Observations

* Dry soil produces higher ADC values.
* Wet soil produces lower ADC values.
* Calibration improves measurement accuracy.
* Different soil types require different calibration values.

---

## Applications

* Smart irrigation systems
* Automated plant watering
* Agricultural monitoring
* Greenhouse automation
* IoT-based soil health monitoring

---

## Conclusion

This experiment successfully demonstrated soil moisture sensing and calibration using analog sensor readings. The calibrated moisture percentage provides a reliable basis for implementing automated irrigation and environmental monitoring systems in future projects.

# Day 09 – Ultrasonic Distance Sensing

## Objective

The objective of this experiment is to measure distance using the HC-SR04 ultrasonic sensor and Arduino Uno. The sensor calculates distance by measuring the time required for an ultrasonic pulse to travel to an object and return.

---

## Components Used

* Arduino Uno
* HC-SR04 Ultrasonic Sensor
* Breadboard
* Jumper Wires

---

## Wiring

| HC-SR04 | Arduino Uno |
| ------- | ----------- |
| VCC     | 5V          |
| GND     | GND         |
| TRIG    | D9          |
| ECHO    | D10         |

---

## Working Principle

The sensor sends an ultrasonic pulse through the TRIG pin.

The ECHO pin remains HIGH for the duration of the pulse's round trip.

Distance is calculated using:

Distance (cm) = (Pulse Time × 0.0343) / 2

The division by 2 compensates for the outgoing and returning travel path.

---

## Features Implemented

✔ Distance Measurement

✔ Timeout Protection

✔ Invalid Reading Detection

✔ Median Filter (3 Samples)

✔ CSV Output

---

## Validation Results

| Actual Distance | Measured Distance |
| --------------- | ----------------- |
| 10 cm           | 9.4cm             |
| 30 cm           | 28.2cm            |

Tolerance Requirement:

±2 cm

---

## Blind Zone

The HC-SR04 cannot accurately measure objects very close to the sensor.

Approximate blind zone:

2 cm

---

## Maximum Range

Approximately:

285 cm

Reliable indoor range:

2 cm – 285 cm

---

## Mounting Notes

* Sensor mounted perpendicular to target.
* Flat target surface used.
* Avoided soft cloth surfaces.
* Avoided water mist and moving objects.
* Kept wires short to reduce noise.

---

## Sample Output

distance_cm

10.3

10.1

10.2

29.8

30.0

INVALID
---

## Conclusion

The HC-SR04 sensor successfully measured distances using ultrasonic time-of-flight principles. Timeout protection prevented program hangs, while the median filter reduced measurement noise and improved stability.

# Smart Grow-Bench Automation System

## Overview

This project combines cloud connectivity, automated irrigation, and complete firmware documentation for a smart grow-bench prototype developed using Arduino Uno. The system demonstrates sensor-based automation, cloud telemetry, and professional project documentation practices.

---

# Task 8 – First Cloud Post

## Description

The Arduino Uno generates telemetry data and sends it through the serial port. A Python host application reads the serial data, converts it into JSON format, and uploads it to the Zelbytes IoT Learning Lab using a secure API key.

## Features

* Serial data acquisition from Arduino
* Python-based cloud gateway
* JSON telemetry upload
* Secure API key management
* Dashboard verification through Zelbytes IoT Lab

## Outcome

Telemetry data was successfully transmitted to the cloud platform and verified through the IoT Lab dashboard.

---

# Task 9 – Automated Grow-Bench Prototype

## Description

The Automated Grow-Bench Prototype is a smart irrigation system that monitors soil moisture and automatically controls watering using a relay-driven water pump.

## Features

* Automatic irrigation control
* Soil moisture monitoring
* Manual override button
* Serial commands:

  * STATUS
  * FORCE_ON
  * FORCE_OFF
* Emergency stop functionality
* Modular firmware architecture

## Working Principle

When soil moisture falls below a predefined threshold, the system activates the water pump. Irrigation stops automatically when the soil moisture reaches the desired level. Users can also manually control the system through push buttons or serial commands.

## Outcome

The system successfully automated irrigation while maintaining manual control and safety features.

---

# Task 10 – Final Firmware Documentation

## Description

Comprehensive technical documentation was prepared for the complete grow-bench system to support future maintenance and project handover.

## Documentation Includes

* Hardware Bill of Materials (BOM)
* Wiring diagrams and pin mappings
* Sensor calibration methodology
* Test results and observations
* Known limitations
* Firmware upload and reflash instructions

## Outcome

The documentation provides sufficient information for future interns to understand, reproduce, and maintain the project.

---

# Hardware Used

* Arduino Uno
* Soil Moisture Sensor
* Relay Module
* Water Pump / DC Motor
* Push Buttons
* Breadboard
* Jumper Wires
* ESP8266 (Optional)
* SD Card Module (Optional)

---

# Software Used

* Arduino IDE
* Python 3
* PySerial Library
* Requests Library
* Git & GitHub

---

# Conclusion

This project demonstrates the integration of embedded systems, automation, cloud connectivity, and technical documentation within a smart agriculture application. The grow-bench prototype successfully performs automated irrigation, supports remote data monitoring, and provides a complete documentation package for future development and deployment.

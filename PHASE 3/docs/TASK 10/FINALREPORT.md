\# FINAL REPORT



\# Automated Grow-Bench Prototype



\## 1. Introduction



The Automated Grow-Bench Prototype is an Arduino Uno-based smart irrigation system designed to automate plant watering using soil moisture measurements. The system continuously monitors soil moisture and automatically activates a relay-controlled pump whenever the soil becomes dry. Manual override and serial commands provide additional control and flexibility. The project demonstrates the application of embedded systems in smart agriculture and efficient water management.



\---



\# 2. Objectives



\* Monitor soil moisture continuously.

\* Automatically irrigate when soil becomes dry.

\* Provide manual override functionality.

\* Support serial commands for system control.

\* Develop a reliable and easy-to-maintain irrigation system.



\---



\# 3. Hardware Bill of Materials



| Sl.No | Component              | Quantity | Approx. Price (₹) | Function               |

| ----- | ---------------------- | -------- | ----------------- | ---------------------- |

| 1     | Arduino Uno            | 1        | 500               | Main controller        |

| 2     | Soil Moisture Sensor   | 1        | 80                | Measures soil moisture |

| 3     | 1-Channel Relay Module | 1        | 100               | Controls water pump    |

| 4     | Push Button            | 1        | 10                | Manual override        |

| 5     | Mini Water Pump        | 1        | 150               | Irrigation actuator    |

| 6     | Breadboard             | 1        | 100               | Circuit assembly       |

| 7     | Jumper Wires           | 10-15    | 50                | Connections            |

| 8     | USB Cable              | 1        | 50                | Programming and power  |

| 9     | External Power Supply  | 1        | 200               | Powers the pump        |



\### Total Estimated Cost



\*\*₹1200 – ₹1500\*\*



\---



\# 4. Hardware Connections



| Component               | Pin Connection |

| ----------------------- | -------------- |

| Soil Moisture Sensor AO | A0             |

| Relay Module IN         | D7             |

| Push Button             | D2             |

| Relay VCC               | 5V             |

| Relay GND               | GND            |

| Soil Sensor VCC         | 5V             |

| Soil Sensor GND         | GND            |



\---



\# 5. Wiring Diagram



Include:



\* Breadboard photograph

\* Circuit diagram

&#x20; 

```markdown

!\[Circuit Diagram](outputs/cwiring\_image.jpeg)



!\[Bench Setup](outputs/growbench\_sm.jpeg)

```



\---



\# 6. Working Principle



The soil moisture sensor continuously measures the moisture content of the soil. The Arduino Uno reads the analog value from the sensor through pin A0. If the moisture level exceeds the threshold value, indicating dry soil, the relay connected to pin D7 turns ON the water pump. Once sufficient moisture is achieved, the relay turns OFF the pump.



A push button connected to D2 enables manual override. The user can also control the system using serial commands through the Serial Monitor.



\---



\# 7. Serial Commands



\### STATUS



Displays:



\* Current mode

\* Soil moisture reading

\* Threshold value

\* Pump state



\### FORCE\_ON



Forces the pump to turn ON.



\### FORCE\_OFF



Forces the pump to turn OFF.



\---



\# 8. Calibration Methodology



The soil moisture sensor was calibrated under dry and wet conditions.



\### Dry Soil



Typical readings:



600 – 900



\### Wet Soil



Typical readings:



200 – 500



Based on experimental observations, a threshold value of 600 was selected.



\---



\# 9. Test Results



| Test Performed       | Status |

| -------------------- | ------ |

| Soil sensor reading  | Passed |

| Automatic irrigation | Passed |

| Relay operation      | Passed |

| Pump control         | Passed |

| Manual override      | Passed |

| STATUS command       | Passed |

| FORCE\_ON command     | Passed |

| FORCE\_OFF command    | Passed |



\---



\# 10. Known Limitations



\* Sensor readings vary with soil type.

\* Sensor probes may corrode over time.

\* Threshold value may require recalibration.

\* Single sensor measures only one location.

\* External power supply is required for the pump.



\---



\# 11. Reflashing Instructions



\### Step 1



Open Arduino IDE.



\### Step 2



Open:



```

automated\_growbench.ino

```



\### Step 3



Select:



```

Tools → Board → Arduino Uno

```



\### Step 4



Select the correct COM port.



\### Step 5



Upload the sketch.



\### Step 6



Open Serial Monitor at:



```

9600 baud

```



\### Step 7



Test using:



```

STATUS

FORCE\_ON

FORCE\_OFF

```

\---



\# 12. Conclusion



The Automated Grow-Bench Prototype successfully integrates soil moisture sensing, relay control, manual override, and serial communication into a single Arduino Uno-based system. The project provides an efficient and reliable solution for automated irrigation and demonstrates the practical application of embedded systems in smart agriculture. The modular design allows future enhancements such as IoT connectivity, cloud monitoring, and multi-sensor integration.


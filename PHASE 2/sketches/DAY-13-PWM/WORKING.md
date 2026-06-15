The system is controlled by the Arduino Uno, which receives commands from the Serial Monitor and controls the motor and valve accordingly. The L298N motor driver receives PWM and direction signals from the Arduino and drives the DC motor at the required speed. The relay module acts as a switch to control the solenoid valve independently of the motor. When the valve is activated, the relay energizes and opens the valve to allow fluid flow; when deactivated, the valve closes and stops the flow. An LED connected to the Arduino provides a visual indication by blinking while the motor is running and turns ON(without blinking) when the motor stops. For safety, an emergency stop push button is connected to an interrupt pin. Pressing the button immediately stops the motor, closes the valve, and places the system in an emergency state. The system can be restored to normal operation only after receiving a reset command from the Serial Monitor.



\### Functions of Serial Commands in the Code



\* \*\*`1` to `9` – Motor Speed Control\*\*



&#x20; When a number between `1` and `9` is entered through the Serial Monitor, the Arduino converts it into a PWM value and sends it to the L298N motor driver. Higher numbers result in higher motor speeds. The LED blinks indicating that the motor is running.Drive motor 0–255 PWM; ramp speed over 3 s. 



\* \*\*`0` – Motor OFF\*\*



&#x20; When `0` is entered, the Arduino sets the PWM value to zero, stopping the DC motor completely. The status LED also turns ON(still).



\* \*\*`o` – Valve OPEN\*\*



&#x20; When `o` is entered, the Arduino activates the relay module by setting the relay pin HIGH. This energizes the solenoid valve and opens it, allowing fluid to flow.



\* \*\*`f` – Valve CLOSE\*\*



&#x20; When `f` is entered, the Arduino deactivates the relay module by setting the relay pin LOW. This closes the solenoid valve and stops the fluid flow. The motor continues to run if it was already running.



\* \*\*`r` – Reset System\*\*



&#x20; When the system is in the emergency stop state, entering `r` clears the emergency condition and allows the system to operate normally again.



\### Emergency Stop Function



When the emergency stop button connected to pin 2 is pressed, an interrupt is triggered. The Arduino immediately:



\* Stops the DC motor.

\* Closes the solenoid valve.

\* Displays an emergency stop message on the Serial Monitor.



The system remains in this state until the user enters the \*\*`r`\*\* command.




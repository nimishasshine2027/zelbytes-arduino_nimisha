# Test Log

## Test 1: Motor Speed Control

* **Input:** Command `1–9`
* **Expected Result:** Motor runs at different speeds according to the input.
* **Observed Result:** Motor speed varied successfully.
* **Status:** PASS

## Test 2: Motor OFF

* **Input:** Command `0`
* **Expected Result:** Motor stops and LED stays still.
* **Observed Result:** Motor stopped successfully.
* **Status:** PASS

## Test 3: Valve ON

* **Input:** Command `o`
* **Expected Result:** Relay activates and solenoid valve opens.
* **Observed Result:** Valve opened successfully.
* **Status:** PASS

## Test 4: Valve OFF

* **Input:** Command `f`
* **Expected Result:** Relay deactivates and solenoid valve closes while the motor continues running.
* **Observed Result:** Valve closed successfully and motor operation was unaffected.
* **Status:** PASS

## Test 5: LED Indication

* **Input:** Motor running condition
* **Expected Result:** LED blinks while the motor is running.
* **Observed Result:** LED blinked correctly.
* **Status:** PASS

## Test 6: Emergency Stop

* **Input:** Press emergency stop button
* **Expected Result:** Motor stops, valve closes, and system enters emergency state.
* **Observed Result:** Emergency stop function operated successfully.
* **Status:** PASS

## Test 7: System Reset

* **Input:** Command `r`
* **Expected Result:** System exits emergency state and resumes normal operation.
* **Observed Result:** System reset successfully.
* **Status:** PASS
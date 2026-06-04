# VALVE SAFETY DOCUMENT

## Project

Relay-Controlled Solenoid Valve for Irrigation System

## Purpose

This document records the safety procedures followed while testing and operating the relay-controlled solenoid valve used in the Zelbytes IoT Learning Lab.

---

## Safety Requirements

### 1. Relay-Based Control Only

The solenoid valve is controlled through a 5V relay module.

The solenoid valve is **never connected directly to an Arduino GPIO pin**, as the valve requires more current than the microcontroller can safely provide.

---

### 2. Power-Up Safe State

The firmware is configured so that the valve remains OFF whenever the Arduino starts, resets, or loses power.

```cpp
setValve(false);
```

This prevents accidental water flow during startup.

Status: ✅ Verified

---

### 3. Emergency Stop (ESTOP)

An emergency stop command has been implemented.

Serial Command:

```text
e
```

Action Performed:

* Relay de-energized
* Solenoid valve closed
* Water flow stopped immediately

Status: ✅ Tested

---

### 4. Relay Verification Before Valve Connection

Before connecting the solenoid valve:

* Relay wiring was inspected.
* Relay module was powered.
* Relay click was verified using serial commands.
* Relay operation was confirmed without any load attached.

Status: ✅ Verified

---

### 5. Solenoid Valve Verification

After successful relay testing:

* Solenoid valve connected.
* Brief pulse test performed.
* Valve activation confirmed.
* Valve immediately returned to OFF state.

Status: ✅ Verified


---

## USB Disconnect Behavior

If USB power is disconnected:

* Arduino powers down.
* Relay de-energizes.
* Solenoid valve closes.
* Water flow stops.

This provides fail-safe operation.

Status: ✅ Verified


## Evidence Collected

* Relay wiring photo saved.
* Relay click verified.
* Solenoid pulse test completed.
* Mechanical layout photo saved.

Photo File:

```text
wiring-images/day-05-relay-solenoid.jpg
```

Status: ✅ Completed

---

## Final Safety Checklist

| Item                                         | Status |
| -------------------------------------------- | ------ |
| Relay wiring checked before valve connection | ✅      |
| Valve OFF at startup                         | ✅      |
| ESTOP tested                                 | ✅      |
| Manual shutoff identified                    | ✅      |
| Relay click verified                         | ✅      |
| Solenoid pulse verified                      | ✅      |
| Wiring photo saved                           | ✅      |
| Supervisor sign-off section included         | ✅      |

---

## Conclusion

The relay-controlled solenoid valve system was tested using fail-safe operating procedures. The valve remains de-energized during startup, can be shut down immediately using the ESTOP command, and includes manual plumbing isolation through an upstream ball valve. All required safety precautions were documented and verified.

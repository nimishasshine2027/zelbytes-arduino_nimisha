# Day 5 - Relay Controlled Solenoid Valve

## Objective

Learn safe control of a solenoid valve using a relay module and implement emergency stop functionality.

## Components Used

* Arduino Uno R3
* 5V Relay Module
* Solenoid Valve
* External Power Supply
* Jumper Wires
* USB Cable

## Safety Rules

* Never connect a solenoid directly to an Arduino GPIO pin.
* Always use a relay module.
* Verify relay operation before connecting the valve.
* Keep manual shutoff valve accessible.
* Use a drip tray under plumbing connections.

## Commands

| Command | Action             |
| ------- | ------------------ |
| v       | Briefly open valve |
| e       | Emergency stop     |

## Expected Output

Valve OFF. Commands: v=toggle, e=estop

v

Valve briefly energized.

e

ESTOP

## Learning Outcome

* Relay operation
* Active-low logic
* Safe startup behavior
* Emergency stop implementation
* Solenoid valve safety procedures

## Status

Completed

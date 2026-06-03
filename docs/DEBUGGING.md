# Debugging 

## Serial Communication Checklist

### 1. Check COM Port

Verify the correct Arduino COM port is selected:

Tools → Port

If the wrong port is selected:

* Upload may fail.
* Serial Monitor may not receive data.

---

### 2. Check Baud Rate

The baud rate in code and Serial Monitor must match.

Example:

```cpp
Serial.begin(9600);
```

Serial Monitor:

```text
9600 baud
```

Symptoms of mismatch:

```text
⸮⸮⸮⸮⸮⸮⸮⸮
```

or random unreadable characters.

---

### 3. Upload Before Opening Serial Monitor

Recommended workflow:

1. Upload sketch.
2. Wait for upload completion.
3. Open Serial Monitor.

This prevents confusion caused by automatic board reset.

---

### 4. Verify USB Cable

Check:

* USB cable firmly connected.
* Cable supports data transfer.
* No excessive strain on connector.

Common symptom:

* Board disconnects unexpectedly.
* COM port disappears.

---

### 5. Brownout and Power Issues

Possible symptoms:

* Random resets.
* Unexpected restart messages.
* LED flickering.
* Serial output restarting repeatedly.

Causes:

* Insufficient power supply.
* Faulty USB cable.
* High current loads.

---

### 6. Verify Command Reception

Test commands:

```text
?
l
o
```

Expected responses:

```text
l=LED on, o=off
ON
OFF
```

---

### 7. DEBUG Logging

Enable:

```cpp
#define DEBUG 1
```

Disable:

```cpp
// #define DEBUG 1
```

Use DEBUG logs only when troubleshooting.

Excessive logging can affect timing performance.

---

### 8. Heartbeat Monitoring

Periodic messages indicate the firmware is running normally:

```text
uptime_ms=2000
uptime_ms=4000
uptime_ms=6000
```

If messages stop unexpectedly:

* Firmware may be stuck.
* Board may have reset.
* Power issue may exist.

## Conclusion

Serial Monitor is the primary debugging tool for Arduino firmware development and should be used to verify program behavior before introducing more advanced debugging methods.

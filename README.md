# Aurangabad-logger

### Arduino logger for Aurangabad's microclimate.First reading:Saw my evaporative cooler breathe (30.2C and 72% humidity),Now I want to see my city breath

**Current Version: v1.0.0** | 27 May 2026

**Hardware:** Arduino Uno + DHT11 + LED + 330Ω resistor  
**Location:** Balcony, Aurangabad

**What it does NOW:**  
Monitors temp + humidity. LED blinks if ANY of these occur:
- Humidity > 70% 
- Humidity < 30%
- Temperature > 45°C 
- Temperature < 15°C

**Difficulties faced:**  
Got `NaN` readings. Thought code was wrong.  
Root cause: Loose jumper wires. Fixed hardware, not software.

**Key Insight:**  
Ran to my evaporative cooler. Readings: 72% RH, 30.2°C → LED blinked.  
Proof: The system responds to real-world changes in <2 seconds.

**Next:**
v1.1.0 will add 16*2 LCD for live readings.
---
*Mapping Aurangabad, one overheated bedroom at a time.*

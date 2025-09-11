# Soil-moisture-irrigation-system
Smart irrigation system using Arduino UNO, soil moisture sensor, LCD, LED, and buzzer. Reads soil moisture via ADC, controls irrigation through GPIO, and uses timer interrupts for efficient monitoring and automated water management.
The system continuously monitors the soil's moisture level using a sensor connected to an Arduino UNO. If the moisture level falls below a set threshold, the Arduino activates an LED (simulating a water pump) and a buzzer to indicate dry soil. At the same time, an LCD displays the current moisture reading and a status message. Once the soil is moist enough, the system turns off the pump and buzzer automatically.
# Project Overview
This project addresses the problem of water wastage in traditional irrigation.  
By measuring soil moisture in real time, the system decides when to turn irrigation ON or OFF.  
It alerts users with a buzzer and LED while displaying live data on an LCD screen.  
# Components Used
- Arduino UNO   
- 16x2 LCD Display  
- Buzzer  
- LED  
- Potentiometers (for LCD contrast & sensor calibration)  
- Resistors & jumper wires  
- Breadboard
- 
# Circuit diagram
![Circuit Diagram](./Circuit%20Diagram.png)

# Working Explanation
- The soil moisture sensor reads the soil water level (via ADC).
- Arduino processes the value:
  - If soil is dry → buzzer & LED alert, irrigation turns ON.
  - If soil is wet → irrigation stays OFF.
- The LCD shows soil condition and pump status.
- Timer interrupts ensure periodic monitoring without continuous polling.

# Applications
- Smart farming and agriculture 🌾
- Home gardening automation 🌱
- Water conservation systems 💧

# Future Improvements
- Adding IoT (ESP8266/ESP32) for remote monitoring
- Mobile app integration for control
- Solar-powered system for sustainability



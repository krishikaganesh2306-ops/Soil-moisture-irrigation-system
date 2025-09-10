# Soil-moisture-irrigation-system
Smart irrigation system using Arduino UNO, soil moisture sensor, LCD, LED, and buzzer. Reads soil moisture via ADC, controls irrigation through GPIO, and uses timer interrupts for efficient monitoring and automated water management.
The system continuously monitors the soil's moisture level using a sensor connected to an Arduino UNO. If the moisture level falls below a set threshold, the Arduino activates an LED (simulating a water pump) and a buzzer to indicate dry soil. At the same time, an LCD displays the current moisture reading and a status message. Once the soil is moist enough, the system turns off the pump and buzzer automatically.


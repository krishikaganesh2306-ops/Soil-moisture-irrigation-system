#include <LiquidCrystal.h>

// LCD pin configuration: RS, E, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int sensorPin = A0;     // Soil moisture sensor
const int pumpPin = 8;        // LED
const int buzzerPin = 7;      // Buzzer
const int threshold = 400;    // Moisture threshold
const unsigned long checkInterval = 1000;  // Every 5 sec
const unsigned long pumpDuration = 1000;   // Run pump for 5 sec

unsigned long lastCheckTime = 0;

void setup() {
  lcd.begin(16, 2);           // Initialize LCD
  pinMode(pumpPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  digitalWrite(pumpPin, LOW);
  digitalWrite(buzzerPin, LOW);
  Serial.begin(9600);
}

void loop() {
  unsigned long currentTime = millis();

  if (currentTime - lastCheckTime >= checkInterval) {
    lastCheckTime = currentTime;

    int moisture = analogRead(sensorPin);
    Serial.print("Moisture Level: ");
    Serial.println(moisture);

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Moisture: ");
    lcd.print(moisture);

    if (moisture < threshold) {
      lcd.setCursor(0, 1);
      lcd.print("Soil Dry - Watering");
      digitalWrite(pumpPin, HIGH);   // Turn on pump (LED)
      digitalWrite(buzzerPin, HIGH); // Buzz
      delay(pumpDuration);           // Wait
      digitalWrite(pumpPin, LOW);    // Turn off
      digitalWrite(buzzerPin, LOW);  // Stop buzz
    } else {
      lcd.setCursor(0, 1);
      lcd.print("Soil OK - No Water");
      digitalWrite(pumpPin, LOW);
      digitalWrite(buzzerPin, LOW);
    }
  }
}

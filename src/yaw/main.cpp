#include <Arduino.h>
#include "pins.h"



void setup() {
  pinMode(ENABLED_LED_PIN, OUTPUT);

  Serial.begin(115200);
  delay(1000);
  Serial.println("Hello World");
  // put your setup code here, to run once:

  digitalWrite(ENABLED_LED_PIN, HIGH);
}

void loop() {
  Serial.println("Blink!");
  digitalWrite(ENABLED_LED_PIN, HIGH);
  delay(500);
  digitalWrite(ENABLED_LED_PIN, LOW);
  delay(100);

  // put your main code here, to run repeatedly:
}
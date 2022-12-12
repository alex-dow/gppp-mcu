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

  int x = 50;
  do {
    x--;
    digitalWrite(ENABLED_LED_PIN, HIGH);
    delay(random(100, 1000));
    digitalWrite(ENABLED_LED_PIN, LOW);
    delay(random(100, 1000));
  } while (x > 0);

  delay(2000);

  x = 10;
  do {
    digitalWrite(ENABLED_LED_PIN, HIGH);
    delay(500);
    digitalWrite(ENABLED_LED_PIN, LOW);
    delay(500);
    x--;
  } while (x > 0);

  delay(1000);

  // put your main code here, to run repeatedly:
}
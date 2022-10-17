#include <Arduino.h>

#define INBUILD_PIN PC13

void setup() {
  Serial.begin(9600);
  pinMode(INBUILD_PIN, OUTPUT);
}

void loop() {
  Serial.println("Blinkind LED...");
  digitalWrite(INBUILD_PIN, HIGH);
  delay(1000);
  digitalWrite(INBUILD_PIN, LOW);
  delay(1000);
}

#include <Arduino.h>
#include "Class1.h"
const int INBUILD_PIN = 17;

void setup() {
  Serial.begin(9600);
  pinMode(INBUILD_PIN, OUTPUT);
  ClassExample1 myexample;
  // Serial.print(myexample.i);
  Serial.print(myexample.GetVal());
  myexample.Increaser(2);
  Serial.print(myexample.GetVal());

}

void loop() {
  // Serial.print(ClassExample1::i);
  // ClassExample1::TurnOff;
}

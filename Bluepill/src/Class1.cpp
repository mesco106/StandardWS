#include "Arduino.h"
#include "Class1.h"

const uint8_t counter = 1;

ClassExample1::ClassExample1(){
    changeme =0;
}

void ClassExample1::Hello(){
    Serial.println("Hello World");
}

int ClassExample1::Add(int Value1, int Value2){
    return Value1 + Value2;
}

void ClassExample1::TurnOn(const int pin){
    digitalWrite(pin, HIGH);
}

void ClassExample1::TurnOff(const int pin){
    digitalWrite(pin, LOW);
}

void ClassExample1::Increaser(int byhowmuch){
    ClassExample1::changeme += byhowmuch;
}

int ClassExample1::GetVal(){
    return ClassExample1::changeme;
}


ClassExample1 Class1 = ClassExample1();
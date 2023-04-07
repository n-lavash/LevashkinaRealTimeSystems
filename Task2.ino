#include <Arduino.h>
#include "TaskManagerIO.h"


const int pin1 = 3;  
const int pin2 = 5;  
const int pin3 = 6;
const int pin4 = 9;
const int pin5 = 10;
const int pin6 = 11;

int ledState1 = LOW;  
int ledState2 = LOW;
int ledState3 = LOW;
int ledState4 = LOW;
int ledState5 = LOW;
int ledState6 = LOW;

const long intervalMls1 = 10000;
const long intervalMls2 = 18500;
const long intervalMls3 = 29000;
const long intervalMls4 = 60500;
const long intervalMls5 = 100000;
const long intervalMls6 = 225000;

void setup() {
    
    pinMode(pin1, OUTPUT);
    pinMode(pin2, OUTPUT);
    pinMode(pin3, OUTPUT);
    pinMode(pin4, OUTPUT);
    pinMode(pin5, OUTPUT);
    pinMode(pin6, OUTPUT);
    
    taskManager.scheduleFixedRate(intervalMls1, [] {
      if (ledState1 == LOW) {
        ledState1 = HIGH;
        digitalWrite(pin1, ledState1);
      } else {
        ledState1 = LOW;
        digitalWrite(pin1, ledState1);
      }
    }, TIME_MICROS);

    taskManager.scheduleFixedRate(intervalMls2, [] {
      if (ledState2 == LOW) {
        ledState2 = HIGH;
        digitalWrite(pin2, ledState2);
      } else {
        ledState2 = LOW;
        digitalWrite(pin2, ledState2);
      }
    }, TIME_MICROS);

    taskManager.scheduleFixedRate(intervalMls3, [] {
      if (ledState3 == LOW) {
        ledState3 = HIGH;
        digitalWrite(pin3, ledState3);
      } else {
        ledState3 = LOW;
        digitalWrite(pin3, ledState3);
      }
    }, TIME_MICROS);

    taskManager.scheduleFixedRate(intervalMls4, [] {
      if (ledState4 == LOW) {
        ledState4 = HIGH;
        digitalWrite(pin4, ledState4);
      } else {
        ledState4 = LOW;
        digitalWrite(pin4, ledState4);
      }
    }, TIME_MICROS);

    taskManager.scheduleFixedRate(intervalMls5, [] {
      if (ledState5 == LOW) {
        ledState5 = HIGH;
        digitalWrite(pin5, ledState5);
      } else {
        ledState5 = LOW;
        digitalWrite(pin5, ledState5);
      }
    }, TIME_MICROS);

    taskManager.scheduleFixedRate(intervalMls6, [] {
      if (ledState6 == LOW) {
        ledState6 = HIGH;
        digitalWrite(pin6, ledState6);
      } else {
        ledState6 = LOW;
        digitalWrite(pin6, ledState6);
      }
    }, TIME_MICROS);
    
}

void loop() {
    taskManager.runLoop();
}

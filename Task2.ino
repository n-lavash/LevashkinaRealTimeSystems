#include <Arduino.h>
#include "TaskManagerIO.h"


int ledState1 = LOW;
int ledState2 = LOW;
int ledState3 = LOW;
int ledState4 = LOW;
int ledState5 = LOW;
int ledState6 = LOW;

void setup() {
    Serial.begin(115200);
    
    pinMode(3, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    
    taskManager.scheduleFixedRate(30, [] {
      if (ledState1 == LOW) {
        ledState1 = HIGH;
        digitalWrite(3, HIGH);
      } else {
        ledState1 = LOW;
        digitalWrite(3, LOW);
      }
    }, TIME_MICROS);

    taskManager.scheduleFixedRate(400, [] {
      if (ledState2 == LOW) {
        ledState2 = HIGH;
        digitalWrite(5, HIGH);
      } else {
        ledState2 = LOW;
        digitalWrite(5, LOW);
      }
    }, TIME_MICROS);

    taskManager.scheduleFixedRate(5000, [] {
      if (ledState3 == LOW) {
        ledState3 = HIGH;
        digitalWrite(6, HIGH);
      } else {
        ledState3 = LOW;
        digitalWrite(6, LOW);
      }
    }, TIME_MICROS);

    taskManager.scheduleFixedRate(10000, [] {
      if (ledState4 == LOW) {
        ledState4 = HIGH;
        digitalWrite(9, HIGH);
      } else {
        ledState4 = LOW;
        digitalWrite(9, LOW);
      }
    }, TIME_MICROS);

    taskManager.scheduleFixedRate(40000, [] {
      if (ledState5 == LOW) {
        ledState5 = HIGH;
        digitalWrite(10, HIGH);
      } else {
        ledState5 = LOW;
        digitalWrite(10, LOW);
      }
    }, TIME_MICROS);

    taskManager.scheduleFixedRate(100000, [] {
      if (ledState6 == LOW) {
        ledState6 = HIGH;
        digitalWrite(11, HIGH);
      } else {
        ledState6 = LOW;
        digitalWrite(11, LOW);
      }
    }, TIME_MICROS);
    
}

void loop() {
    taskManager.runLoop();
}

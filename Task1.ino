const int pin1 = 3;  
const int pin2 = 5;  
const int pin3 = 6;
const int pin4 = 9;
const int pin5 = 10;
const int pin6 = 11;

// Настраиваем светодиоды
int ledState1 = LOW;  
int ledState2 = LOW;
int ledState3 = LOW;
int ledState4 = LOW;
int ledState5 = LOW;
int ledState6 = LOW;


unsigned long previousMls1 = 0;
unsigned long previousMls2 = 0;
unsigned long previousMls3 = 0;
unsigned long previousMls4 = 0;
unsigned long previousMls5 = 0;
unsigned long previousMls6 = 0;

// Интервалы в миллисекундах
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
}

void loop() {
  unsigned long currentMillis = micros();
  
  if (currentMillis - previousMls1 >= intervalMls1) {
    
    // Сохраняем время мигания
    previousMls1 = currentMillis;

    // Включение и выключение светодиода
    if (ledState1 == LOW) {
      ledState1 = HIGH;
    } else if (ledState1 == HIGH) {
      ledState1 == LOW;
    }

    digitalWrite(pin1, ledState1);
  }

  if (currentMillis - previousMls2 >= intervalMls2) {
    previousMls2 = currentMillis;
    
    if (ledState2 == LOW) {
      ledState2 = HIGH;
    } else if (ledState2 == HIGH) {
      ledState2 == LOW;
    }

    digitalWrite(pin2, ledState2);
  }
  
    if (currentMillis - previousMls3 >= intervalMls3) {
    previousMls3 = currentMillis;

    if (ledState3 == LOW) {
      ledState3 = HIGH;
    } else if (ledState3 == HIGH) {
      ledState3 == LOW;
    }

    digitalWrite(pin3, ledState3);
  }

  if (currentMillis - previousMls4 >= intervalMls4) {
    previousMls4 = currentMillis;

    if (ledState4 == LOW) {
      ledState4 = HIGH;
    } else if (ledState4 == HIGH) {
      ledState4 == LOW;
    }

    digitalWrite(pin4, ledState4);
  }

  if (currentMillis - previousMls5 >= intervalMls5) {
    previousMls5 = currentMillis;

    if (ledState5 == LOW) {
      ledState5 = HIGH;
    } else if (ledState5 == HIGH) {
      ledState5 == LOW;
    }

    digitalWrite(pin5, ledState5);
  }

  if (currentMillis - previousMls6 >= intervalMls6) {
    previousMls6 = currentMillis;

    if (ledState6 == LOW) {
      ledState6 = HIGH;
    } else if (ledState6 == HIGH) {
      ledState6 == LOW;
    }

    digitalWrite(pin6, ledState6);
  }
}

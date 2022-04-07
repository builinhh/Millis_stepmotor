#include <Arduino.h>

#define STEP 5
#define DIR 4
unsigned long time;

void setup() {
  pinMode(STEP, OUTPUT);
  pinMode(DIR, OUTPUT);
  time = millis();
}

void loop() {
  if((unsigned long) (millis() - time) > 1)
  {
    if(digitalRead(STEP) == LOW)
      {
        digitalWrite(STEP, HIGH);
      }
    else
    {
      digitalWrite(STEP, LOW);
    }
    time = millis();
  }

}
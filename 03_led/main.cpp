#include <Arduino.h>

int led = 7;


void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);
  delay(500);    // milliseconds
  digitalWrite(led, LOW);
  delay(500);     
}

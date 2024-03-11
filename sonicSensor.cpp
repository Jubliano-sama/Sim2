#include <Arduino.h>

int trigPin = 9;    // TRIG pin
int echoPin = 8;    // ECHO pin
float duration_us, distance_cm;


void setupSonicSensor()
{
// configure the trigger pin to output mode
  pinMode(trigPin, OUTPUT);

// configure the echo pin to input mode
  pinMode(echoPin, INPUT);
}

double readDistanceSonicSensor()
{
  // generate 10-microsecond pulse to TRIG pin
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // measure duration of pulse from ECHO pin
  duration_us = pulseIn(echoPin, HIGH);

  // calculate the distance
  distance_cm = 0.017 * duration_us;
}


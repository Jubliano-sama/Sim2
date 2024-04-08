#pragma once

#include <Arduino.h>

// Define motor interface type and pins used for the A4988 driver
#define motorInterfaceType 1

//stepMotor
#define dirPin 22 
#define stepPin 8

//sepMotor settings
const int stepperAcceleration = 1000;
const int stepperMaxSpeed = 500;
const float stepperGearRatio = 3.7f; // x rotations per shoulder rotation
const int stepsPerRotation = 50;
const float shoulderRotationSteps = (float)stepsPerRotation * stepperGearRatio;

// Servo control pins 
#define ELBOW_SERVO_PIN 9
#define SHOULDER_SERVO_PIN 10
#define WRIST_SERVO_PIN 11
#define GRIP_SERVO_PIN 12

//servo limuts
const int GRIPPER_MINIMUM_POSITION = 70;
const int GRIPPER_MAXIMUN_POSITION = 120;


// field values going clockwise from starting position
const int fieldValues[] = {0, -1, 2, -9, 12, -15, 20, -21, 14, -17, 6, -7, 0, -3, 4, -11, 10, -13, 18, -22, 16, -19, 8, -5};
const int amountOfFieldValues = sizeof(fieldValues)/sizeof(int);

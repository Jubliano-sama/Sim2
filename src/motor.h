#ifndef motorLoaded
#define motorLoaded 1

#include <FastAccelStepper.h>
#include <Arduino.h>
#include <Servo.h>

void rotateShoulderAbsoluteAngle(float angle);
bool hasStepperReachedPosition();
void zeroStepperPosition();
void stopShoulder();
void setupMotors();
void testMotors();

void moveWristServo(int angle);
void moveServo(Servo, int angle);
void moveElbowServo(int angle);
void moveShoulderServo(int angle);
void moveGripServo(int angle);

#endif
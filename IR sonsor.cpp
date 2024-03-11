#include <Arduino.h>
// declerations
/*****************************************************/
const int ir_sensor_pin; /* = ? */
int irValue;
// funcions 
/*****************************************************/
void setupInfraRedSensor()
{
  pinMode(ir_sensor_pin, INPUT);
}

int readSensorValue()
{
  irValue = analogRead(ir_sensor_pin);
  return irValue;
}
/*****************************************************/

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
}

void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}
#include "servo.h"
#include "config.h"

void servoConfig();
void testServo();

//TODO make a timer independed on a milis timer inoder to move the servo without delay
//TODO use a class for reusing the functions

/**
* this class is for controlling all the servo functions
* @ servoPin is for attaching a 
*/
class Servo {
public:
  //servo values
  Servo myServo
  
  int servoPin;
  int servoPosition;
  int minimumPosition;
  int maximumPosition;

  //servo methodes

  /**
  * sets the pin to the servo
  */
  void servoConfig() {
    /*shoulderservo.attach(SHOULDER_SERVO_PIN);
    elbowServo.attach(ELBOW_SERVO_PIN);
    wristservo.attach(WRITS_SERVO_PIN);
    gripservo.attach(GRIP_SERVO_PIN);*/
    myServo.attach(serovPin);
  }

  /**
  * this function is for calculating the servo steps over a timestamp
  * @param currentPos is for knowing where the servo starts
  * @param targetPos is your target position, where you want to end 
  * @param timeSpan is the time it takes to get to the right position
  * @return steps 
  */
  double stepsToMove(double currentPos, double targetPos, int timeSpan){
    int steps = timeSpan / math.abs(currentPos - targetPos);
    return steps;
  }

  /**
  * this program is for moving the servo to a position
  */
  void moveServo (int angle){
    
    Seral.print("the servo step is ");
    Serial.println(angle);
  
  }
};



/**
* this program is for tseting the range of the servo's
* the program turns the servo between the max and min limits
*/
void testServo() {
  for (int i = max; i > min; i--) {
    myservo.write(i);
    Serial.println(i);
    delay(100);
  }
  for(int i = min; i < max; i++){
    myservo.write(i);
    Serial.println(i);
    delay(100);
  }
}

#include <Servo.h> //include the Servo library
Servo myServo; //create a Servo object to control the Servo
int delayTime = 4000; //delay period, in milliseconds

void setup(){
  myServo.attach(9); //Servo is connected to pin 9(~PWM)
}

void loop(){
  myServo.write(0); //Rotate servo to position 0
  delay(delayTime); //Wait delay as assigned above
  myServo.write(180); //Rotate servo to position 180
  delay(delayTime); //Wait again!
}
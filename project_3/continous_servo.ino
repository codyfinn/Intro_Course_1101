#include<Servo.h>
Servo myServo;
int delayTime = 4000;

void setup(){
  myServo.attach(9); //Servo is connected to in 9 (~PWM)
}

void loop(){
  myServo.write(0); //Rotate servo to position 0 (clockwise)
  delay(delayTime); //Wait delay as assigned above
  myServo.write(90); //Rotate servo to position 90(shouldn't move)
  delay(2000); //2 second delay for the next directional movemnet
  myServo.write(180); //Rotate servo to position 180(counter-clockwise)
  delay(delayTime); //Wait delay as assigned above
  myServo.write(90); //Rotate servo to position 90(stos servo)
  delay(3000); //3 second delay before loop restarts itself again!
}
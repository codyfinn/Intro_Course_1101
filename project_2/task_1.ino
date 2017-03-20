/*
DC Motor Fan
Code used to control a DC Motor Fan via Potentiometer
*/

// Project 2 - Simple Motor Control
int potPin = 0; //Analog in 0 connected to the potentiometer
int transitorPin = 9; //PWM Pin 9 connected to the base of the transitor
int potValue = 0; //value returned from the potentiometer

void setup(){
  //set the transitor pin as an output:
  pinMode(transitorPin, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  //read the potentiometer, convert it to 0-255:
  potValue = AnalogRead(potPin)/4;
  Serial.println(potValue);
  //use that to control the transitor:
  analogWrite(transitorPin, potValue);
}
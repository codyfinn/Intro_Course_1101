/*
Blink
Truns on an LED on for one second, then off for one second, repeatedly.
This example code is in the public domain.
*/

//Pin 13 has an LED connected on most Arduino boards.
//give it a name
int led = 13;
//the setup reoutine runs once when you press reset:
void setup(){
  //initalize the digital pin as an output.
  pinMode(led, OUTPUT);
}

//the loop routine runs over and over again forever:
void loop(){
  digitalWrite(led, HIGH);
  delay(1000);
  degitalWrite(led, LOW);
  delay(1000);
}

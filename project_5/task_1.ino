//Project 5 - Photoresistor
//Example: When you touch the photoresistor, the LED should turn on
int lightPin = 0; //define a pin for Photo resistor
int threshold = 400; //define a threshold value
int led = 13; //Pin 13 will be the LED
int value = 0; //Value will store the value from pin A0

void setup(){
  Serial.begin(9600);
  Serial.print("Values detected by the Photoresistor");
  pinMode(led, OUTPUT);
}

void loop(){
  value = analogRead(lightPin);
  Serial.println(value);

  if(value < threshold){
    digitalWrite(led, HIGH);
    Serial.println("high");
  }
  else{
    digitalWrite(led, LOW);
    Serial.println("low");
  }

  delay(100);
}

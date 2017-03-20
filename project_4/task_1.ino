//this constant wont change. It's the pin number of the sensor's output:
const int pingPin = 7;

void setup(){
  //initialize serial communication
  Serial.begin(9600);
}

void loop(){
  //establish variables for duration of the ping,
  //and the distance result in inches and centimeters:
  long durration, inches, cm;
  //the PING))) is triggered by a HIGH pulse of 2 or more microseconds.
  //Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  pinMode(pingPin, OUTPUT);
  digitalWrite(pingPin, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(pingPin, LOW);

  //The same pin is used to read the signal from the PING))): a HIGH
  //pulse whose durration is the time (in microseconds) from the sending
  //of the ping to the reception of its echo off an object.
  pinMode(pingPin, INPUT);
  duration = pulseIn(pingPin, HIGH);
  //convert the time into a distance
  inches = microsecondsToInches(duration);
  cm = microsecondsToCentimeters(duration);
  Serial.print("inches");
  Serial.print("in, ");
  Serial.print("cm");
  Serial.println();
  delay(100);  
}

long microsecondsToInches(long microseconds){
  //Accourding to Parallax's datasheet for the PING))), there are
  //73.746 microseconds per inch(i.e. sound travles at 1130 feet per second)
  //This gives the distance travelled by the ping, outbound
  //and  return, so we devide by 2 to get the distance of the obstacle.
  return microseconds/74/2;
}

long microsecondsToCentimeters(long microseconds){
  //The speed of sound is 340 m/s or 29 microseconds per centimeter.
  //The ping travles out and back, so to find the distance of the object
  //we take half the distance travelled.
  return microseconds/29/2;
}
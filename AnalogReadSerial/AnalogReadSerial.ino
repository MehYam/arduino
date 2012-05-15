/*
  AnalogReadSerial
 Reads an analog input on pin 0, prints the result to the serial monitor 
 
 This example code is in the public domain.
 */

const int led = 13;

void setup() {
  Serial.begin(9600);
  
  pinMode(led, OUTPUT);
}

void loop() {
  const int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  
  const int d = sensorValue/2 + 10;
  delay(d);
  digitalWrite(led, HIGH);
  delay(d);
  digitalWrite(led, LOW);
}

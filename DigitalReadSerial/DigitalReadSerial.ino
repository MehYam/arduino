/*
  DigitalReadSerial
 Reads a digital input on pin 2, prints the result to the serial monitor 
 
 This example code is in the public domain.
 */

void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);
}

int lastVal = 0;
void loop() {
  int sensorValue = digitalRead(2);
  if (sensorValue != lastVal)
  {
    Serial.print("Change to ");
    Serial.println(sensorValue);
    
    lastVal = sensorValue;
  }
}




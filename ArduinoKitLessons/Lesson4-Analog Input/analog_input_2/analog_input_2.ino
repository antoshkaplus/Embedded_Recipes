/*
 * Author: MIUZEI
 * IDE V1.6.9
 * Email:support@miuzeipro.com 
 */
int sensorPin = A0;    // select the input pin for the potentiometer
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  Serial.begin(9600);
}

void loop() {
  // could just print changes only, comparing with previous value.
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  delay(500);
}


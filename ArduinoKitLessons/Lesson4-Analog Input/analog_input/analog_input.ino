/*
 * Author: MIUZEI
 * IDE V1.6.9
 * Email:support@miuzeipro.com 
 */
int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin = 13;      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
    pinMode(ledPin, OUTPUT);
}

void loop() {
    sensorValue = analogRead(sensorPin);
    digitalWrite(ledPin, HIGH);
    // stop the program for <sensorValue> milliseconds:
    delay(sensorValue);
    // turn the ledPin off:
    digitalWrite(ledPin, LOW);
    // stop the program for for <sensorValue> milliseconds:
    delay(sensorValue);
}


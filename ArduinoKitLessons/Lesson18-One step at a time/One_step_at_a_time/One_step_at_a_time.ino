/*
 * Author: MIUZEI
 * IDE V1.6.9
 * Email:support@miuzeipro.com
 */
#include <Stepper.h>
const int stepsPerRevolution = 30;  // change this to fit the number of steps per revolution
// for your motor
// initialize the stepper library on pins 2 through 5:
Stepper myStepper(stepsPerRevolution, 2, 3, 4, 5);

int stepCount = 0;         // number of steps the motor has taken

void setup() {
  // initialize the serial port:
  Serial.begin(9600);
}

void loop() {
  // step one step:
  myStepper.step(1);
  stepCount++;
  delay(10);
}

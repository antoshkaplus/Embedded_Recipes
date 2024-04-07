/*
 * Author: MIUZEI
 * IDE V1.6.9
 * Email:support@miuzeipro.com 
 */

// An eight bit shift register accpets data from the serial input (DS) on
// each positive transition of the shift register clock (SHCP).

// Data from the input serial shift register is placed in the output register 
// with  a  rising  pulse  on  the  storages  resister  clock  (STCP).


// STCP
int latchPin = 5;
// SHCP
int clockPin = 6;
// DS  
int dataPin = 4; 
byte leds = 0;
 
void setup() 
{
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);  
  pinMode(clockPin, OUTPUT);
}

// Loop:
// * LEDs off
// * turn on LEDs one on by one in order.
void loop() 
{
  leds = 0;
  updateShiftRegister();
  delay(500);
  for (int i = 0; i < 8; i++)
  { 
    bitSet(leds, i);
    updateShiftRegister();
    delay(500);
  }
}
 
void updateShiftRegister()
{
    // Send `leds` bits through `dataPin` (DS) one at a time, using 
    // `clockPin` (SHCP) to cycle over Q0-Q7 outputs.
    shiftOut(dataPin, clockPin, LSBFIRST, leds);
    
    // Switch to HIGH to trigger input serial shift register 
    // be placed in the output register
    digitalWrite(latchPin, LOW);    
    digitalWrite(latchPin, HIGH);
}


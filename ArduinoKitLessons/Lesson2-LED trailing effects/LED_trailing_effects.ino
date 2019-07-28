/*
 * Author: MIUZEI
 * IDE V1.6.9
 * Email:support@miuzeipro.com
 */
int BASE = 2;               
int NUM = 6;             
void setup()
{
  for (int i = BASE; i < BASE + NUM; i ++)
  {
    pinMode(i, OUTPUT);      //set port ‘i’ as an output port 
  }
}
void loop()
{
  for (int i = BASE; i < BASE + NUM; i ++)
  {
    digitalWrite(i, LOW);      // Turn OFF the I/O board LED
    delay(200);             
  }
  for (int i = BASE; i < BASE + NUM; i ++)
  {
    digitalWrite(i, HIGH);    // Turn ON the I/O board LED
    delay(200);             
  }
}

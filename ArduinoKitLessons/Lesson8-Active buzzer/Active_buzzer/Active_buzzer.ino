/*
 * Author: MIUZEI
 * IDE V1.6.9
 * Email:support@miuzeipro.com 
 */
int buzzer=5; 
void setup()
{
    pinMode(buzzer,OUTPUT);
}
void loop()
{
    digitalWrite(buzzer, HIGH); // produce sound
}


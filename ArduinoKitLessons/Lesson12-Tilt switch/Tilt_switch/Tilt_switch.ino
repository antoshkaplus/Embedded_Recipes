/*
 * Author: MIUZEI
 * IDE V1.6.9
 * Email:support@miuzeipro.com
 */
int led = 11;
int val;
void setup()
{
  pinMode(led,OUTPUT);
}
void loop()
{
  val=analogRead(0); 
  if(val<512)
  {
    digitalWrite(led,HIGH);    
  }
  else
  digitalWrite(led,LOW);
}


void setup()
{
  pinMode(3, OUTPUT);
}

void loop()
{
  delay(1000);
  analogWrite(3, 0);
  delay(1000);
  analogWrite(3, 25);
  delay(1000);
  analogWrite(3, 50);
  delay(1000);
  analogWrite(3, 100);
  delay(1000);
  analogWrite(3, 150);
  delay(1000);
  analogWrite(3, 175);
  delay(1000);
  analogWrite(3, 200);
  delay(1000);
  analogWrite(3, 225);
  delay(1000);
  analogWrite(3, 250);
  
}
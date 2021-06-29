void setup()
{
  pinMode(7, OUTPUT);
}

void loop()
{
  delay(1000);
  tone(7, 264);
  delay(1000);
  tone(7, 1056);
}
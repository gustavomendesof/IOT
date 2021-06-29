void setup()
{
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  analogWrite(9, random(0,255));   //R(vermelho)
  analogWrite(11, random(0,255));  //G(verde)
  analogWrite(10, random(0,255));  //B(azul)
  delay(1000);
}
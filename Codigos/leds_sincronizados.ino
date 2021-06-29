void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  delay(250);
  digitalWrite(3,HIGH);
  delay(250);
  digitalWrite(3,LOW);
  delay(250);
  
  delay(250);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  delay(250);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  
  delay(250);
  digitalWrite(3,HIGH);
  delay(250);
  digitalWrite(3,LOW);
  delay(250);
  
  delay(250);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  delay(250);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  
  delay(250);
  digitalWrite(3,HIGH);
  delay(250);
  digitalWrite(3,LOW);
  delay(250);
  
  delay(250);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  delay(250);
  
  delay(250);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  delay(250);
  
}
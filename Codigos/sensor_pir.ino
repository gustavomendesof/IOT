// C++ code
//
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4, INPUT);
}

void loop()
{
  if(digitalRead(4)==HIGH){
    digitalWrite(3, HIGH);
    delay(10000);
  }else{
    digitalWrite(3, LOW);
  }
}
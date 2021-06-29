void setup()
{
  pinMode(3, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  delay(1000);
  int valorLido = analogRead(A0);
  Serial.println(valorLido);
  
  if(valorLido<174){
    digitalWrite(3, HIGH);
  }else{
    digitalWrite(3, LOW);
  }
  
}
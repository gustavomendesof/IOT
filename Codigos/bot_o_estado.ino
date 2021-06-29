bool estado = LOW;

void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4, INPUT_PULLUP);//PULLUP ignora qualquer valor que
  						  //não seja 5v ou 0v
}

void loop()
{
  //Push button (ou outro botão qualquer)
  //solto --> HIGH
  //pressisona --> LOW
  
  if(digitalRead(4)==LOW){
    estado = !estado;
    digitalWrite(3, estado);
    delay(500);
  }
  
}
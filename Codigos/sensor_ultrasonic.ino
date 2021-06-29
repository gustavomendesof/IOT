#include <Ultrasonic.h>

Ultrasonic sensor(7, 6);

void setup()
{
  serial.begin(9600);
}

void loop()
{
  delay(1000);
  int distancia = senso.Ranging(CM);
  Serial.print(distancia);
  Serial.println(" cm");
}
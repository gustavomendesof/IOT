#include <LiquidCrystal.h>

LiquidCrystal display(12,11,5,4,3,2);

void setup()
{
  display.begin(2,16);
}

void loop()
{
  delay(1000);
  display.clear();
  
  delay(1000);
  display.setCursor(0,0);
  display.print("QI - INTERNET");
  
  delay(1000);
  display.setCursor(5,1);
  display.print("DAS COISAS");
  
}
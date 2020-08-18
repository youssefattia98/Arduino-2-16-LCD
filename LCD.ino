/*
 Author: Youssef Attia
 Description: baby steps to control 2*16 LCD using arduino uno
*/
#include <LiquidCrystal.h>
LiquidCrystal lcd (2, 3, 4 , 5 , 6 , 7); //rs,E,d4,d5,d6,d7
int i;
void setup() {
  lcd.begin(16, 2);
}

void loop() {
  for (i = 0; i < 16; i++)
  {
    lcd.setCursor(i, 0);
    lcd.print("i love Arduino");
    delay(1000);
    lcd.clear();
  }
}

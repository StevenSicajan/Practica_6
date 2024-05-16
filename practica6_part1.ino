#include<LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 7, 6, 5, 4);

void setup(){
  lcd.begin(16, 2);
  lcd.clear();
  lcd.setCursor(4, 0);
  lcd.print("Steven");
  lcd.setCursor(4, 1);
  lcd.print("2023333");
}

void loop(){
}
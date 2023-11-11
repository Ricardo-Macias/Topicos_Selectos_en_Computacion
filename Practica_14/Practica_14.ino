#include <LiquidCrystal.h>

LiquidCrystal lcd(13,12,11,10,9,8);

void setup() {
  lcd.begin(16,2);
  lcd.print("Practica 14");
  delay(2000);
  lcd.clear();

}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print("Hora Encendido: ");

}

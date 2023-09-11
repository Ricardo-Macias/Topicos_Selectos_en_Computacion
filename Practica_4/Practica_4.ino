#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

float sensor, Temperatura;

void setup() {
  lcd.begin(16,2);
}

void loop() {
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Temperatura");
  lcd.setCursor(0,5);

  sensor = analogRead(4) * 5000.0 / 1023.0;
  Temperatura = sensor / 10;

  lcd.print(Temperatura);
  delay(3000);




}

#include <OneWire.h>
#include <DallasTemperature.h>
#include <LiquidCrystal.h>
#define Pin 2

OneWire ourWire(Pin);
DallasTemperature sensors(&ourWire);
LiquidCrystal lcd(12,11,7,6,5,4);

void setup() {
  delay(1000);
  Serial.begin(9600);
  lcd.begin(16,2);
  sensors.begin();
}

void loop() {
  sensors.requestTemperatures();

  Serial.print(sensors.getTempCByIndex(0));
  Serial.println(" Grados centigrados");

  lcd.setCursor(0,0);
  lcd.print("Temp: ");
  lcd.print(sensors.getTempCByIndex(0));
  lcd.print(" C");

  delay(1000);

}

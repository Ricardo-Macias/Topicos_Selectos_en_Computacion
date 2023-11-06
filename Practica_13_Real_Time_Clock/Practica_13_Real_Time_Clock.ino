#include <RTClib.h>
#include <LiquidCrystal.h>

RTC_DS1307 rtc;

LiquidCrystal lcd(12,11,5,4,3,2);

void setup() {
  lcd.begin(16,2);

  if(! rtc.begin()){
    Serial.print("No encontrado el RTC");
    while (1);
  }

  //rtc.adjust(DateTime(__DATE__,__TIME__));
  lcd.clear();
}

void loop() {
  DateTime fecha = rtc.now();

  lcd.setCursor(0, 0);
  lcd.print("Fecha: ");
  lcd.print(fecha.day());
  lcd.print("/");
  lcd.print(fecha.month());
  lcd.print("/");
  lcd.print(fecha.year());

  lcd.setCursor(0, 1);
  lcd.print("Hora: ");
  lcd.print(fecha.hour());
  lcd.print(":");
  lcd.print(fecha.minute());
  lcd.print(":");
  if (fecha.second() < 10){
    lcd.print("0");
  }
  lcd.print(fecha.second());

  delay(1000);
}

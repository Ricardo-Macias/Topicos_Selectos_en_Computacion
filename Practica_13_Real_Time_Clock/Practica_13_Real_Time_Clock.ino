#include <RTClib.h>

RTC_DS1307 rtc;

void setup() {
  Serial.begin(9600);

  if(! rtc.begin()){
    Serial.print("No encontrado el RTC");
    while (1);
  }

  rtc.adjust(DateTime(__DATE__,__TIME__));
}

void loop() {
  DateTime fecha = rtc.now();

  Serial.println("Fecha: " + fecha.timestamp(DateTime::TIMESTAMP_DATE));
  Serial.println("Hora: " + fecha.timestamp(DateTime::TIMESTAMP_TIME));


  delay(1000);

}

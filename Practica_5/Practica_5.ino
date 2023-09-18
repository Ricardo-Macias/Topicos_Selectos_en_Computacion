#include <OneWire.h>
#include <DallasTemperature.h>
#define Pin 2

OneWire ourWire(Pin);
DallasTemperature sensors(&ourWire);

void setup() {
  delay(1000);
  Serial.begin(9600);
  sensors.begin();
}

void loop() {
  // put your main code here, to run repeatedly:

}

#include <LiquidCrystal.h>
#include <Keypad.h>
#include <RTClib.h>

RTC_DS1307 rtc;

LiquidCrystal lcd(13,12,11,10,9,8);
const byte Row = 4;
const byte Column= 4;

char keys[Row][Column] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte pinRow[Row] = {7,6,5,4};
byte pinColumn[Column] = {3,A2,A1,0};
Keypad teclado = Keypad(makeKeymap(keys), pinRow, pinColumn, Row, Column);

int HoraEncendido=0, HoraApagado=0, MinutoEncendido=0, MinutoApagado=0;
String Encender, Apagado,minEncender, minApagado;

void setup() {
  lcd.begin(16,2);
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  if (! rtc.begin()){
    Serial.print("No se encontro el RTC");
    while(1);
  }
  rtc.adjust(DateTime(__DATE__,__TIME__));
  lcd.print("Practica 14");
  delay(1000);
  lcd.clear();

}

void loop() {

  if(HoraEncendido == 0 && HoraApagado == 0){

    lcd.setCursor(0, 0);
    lcd.print("Hora Encendido: ");
    lcd.setCursor(0,1);

    
    while(HoraEncendido != '*'){
    HoraEncendido = teclado.getKey();
      if (HoraEncendido != '*' && HoraEncendido != NULL){
        lcd.print(HoraEncendido-48);
        Encender += HoraEncendido - 48; 
      }
    }
    lcd.clear();

    lcd.setCursor(0, 0);
    lcd.print("Min Encendido: ");
    lcd.setCursor(0,1);

    while(MinutoEncendido != '*'){
    MinutoEncendido = teclado.getKey();
      if (MinutoEncendido != '*' && MinutoEncendido != NULL){
        lcd.print(MinutoEncendido-48);
        minEncender += MinutoEncendido - 48; 
      }
    }

    lcd.clear();
    MinutoEncendido = minEncender.toInt();
    HoraEncendido = Encender.toInt();

    lcd.setCursor(0, 0);
    lcd.print("Hora Apagado: ");
    lcd.setCursor(0,1);
    
    while(HoraApagado != '*'){
    HoraApagado = teclado.getKey();
      if (HoraApagado != '*' && HoraApagado != NULL){
        lcd.print(HoraApagado-48);
        Apagado += HoraApagado - 48; 
      }
    }

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Min Apagado: ");
    lcd.setCursor(0,1);
    
    while(MinutoApagado != '*'){
    MinutoApagado = teclado.getKey();
      if (MinutoApagado != '*' && MinutoApagado != NULL){
        lcd.print(MinutoApagado-48);
        minApagado += MinutoApagado - 48; 
      }
    }

    MinutoApagado = minApagado.toInt();
    HoraApagado = Apagado.toInt();
  }
  else{
    lcd.clear();
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

    if(HoraEncendido == fecha.hour() &&  MinutoEncendido == fecha.minute()){
      digitalWrite(2,HIGH);
      delay(1000);
    }
    else if(HoraApagado == fecha.hour() && MinutoApagado == fecha.minute()){
      digitalWrite(2,LOW);
      delay(1000);
    }
    else {
      delay(1000);
    }

    
  }

}

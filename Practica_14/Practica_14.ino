#include <LiquidCrystal.h>
#include <Keypad.h>

LiquidCrystal lcd(13,12,11,10,9,8);
const byte Row = 4;
const byte Column= 3;

char keys[Row][Column] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};

byte pinRow[Row] = {4,3,2,1};
byte pinColumn[Column] = {7,6,5};
Keypad teclado = Keypad(makeKeymap(keys), pinRow, pinColumn, Row, Column);
String HoraEncendido;

void setup() {
  lcd.begin(16,2);
  lcd.print("Practica 14");
  delay(1000);
  lcd.clear();

}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print("Hora Encendido: ");
  lcd.setCursor(0,1);
  
  while(HoraEncendido != '*'){
    HoraEncendido = teclado.getKey();
    if (HoraEncendido != NULL && HoraEncendido != '*'){
      lcd.print(HoraEncendido);
      HoraEncendido += HoraEncendido;
    }
  }
  delay(2000);

}

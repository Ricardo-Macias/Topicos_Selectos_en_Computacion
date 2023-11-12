#include <LiquidCrystal.h>
#include <Keypad.h>


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
byte pinColumn[Column] = {3,2,1,0};
Keypad teclado = Keypad(makeKeymap(keys), pinRow, pinColumn, Row, Column);

int HoraEncendido=0, HoraApagado=0;
String Encender, Apagado;

void setup() {
  lcd.begin(16,2);
  lcd.print("Practica 14");
  delay(1000);
  lcd.clear();

}

void loop() {

  if(HoraEncender == 0 && HoraApagar == 0){

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

    HoraApagado = Apagado.toInt();
  }
  else{

  }

}

#include <Keypad.h> //Importar libreria 
#include <LiquidCrystal.h>

LiquidCrystal lcd(8,9,10,11,12,13);

const byte Row = 4; //Numero de filas del teclado
const byte Column = 4; //Numero de columnas del teclado

char keys[Row][Column] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
}; //Definir un mapa de la distribucion del teclado

byte pinesRow[Row] = {7, 6, 5, 4}; //pines donde esta conectado
byte pinesColumn[Column] = {3, 2, 1, 0}; //pines donde esta conectado

Keypad teclado = Keypad(makeKeymap(keys), pinesRow, pinesColumn, Row, Column);

char tecla;

void setup() {
  lcd.begin(16,2);
  Serial.begin(9600);
  lcd.setCursor(0,0);
  lcd.print("Practica 6");
  lcd.setCursor(0, 1);
}

void loop() {
  tecla = teclado.getKey();
  if (tecla){
    lcd.print(tecla);
  }
  delay(1000);
}

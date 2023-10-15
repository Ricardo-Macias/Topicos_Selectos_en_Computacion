#include <Keypad.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(8, 9, 10, 11, 12, 13);
const byte Row = 4;
const byte Column = 4;

char keys[Row][Column] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte pinesRow = {7,6,5,4};
byte pinesColumn = {3,2,1,0};

Keypad teclado = Keypad(makeKeymap(keys),pinesRow, pinesColumn, Row, Colummn);

char tecla;


void setup() {
  lcd.begin(16,2);

}

void loop() {
  

}
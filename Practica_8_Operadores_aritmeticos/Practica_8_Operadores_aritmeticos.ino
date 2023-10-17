#include <Keypad.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(13,12,11,10,9,8);
const byte Row = 4;
const byte Column = 4;

char keys[Row][Column] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte pinesRow[Row] = {7,6,5,4};
byte pinesColumn[Column] = {3,2,1,0};

Keypad teclado = Keypad(makeKeymap(keys),pinesRow, pinesColumn, Row, Column);

char var, option;
String digito_1, digito_2, result;
float x, y;


void setup() {
  lcd.begin(16,2);
  lcd.print("ARDUINO");
  delay(1500);
}

void loop() {
  lcd.clear();
  lcd.print("Primer digito: ");
  lcd.setCursor(0, 1);

  while (var != '*'){
    var = teclado.getKey();
    if (var != NULL && var != '*'){
      lcd.print(var);
      digito_1 += var;
    }
  }
  x = digito_1.toFloat();

  lcd.clear();
  lcd.print("Segundo digito");
  lcd.setCursor(0, 1);
  var = "";

  while (var != '*'){
    var = teclado.getKey();
    if (var != NULL && var != '*'){
      lcd.print(var);
      digito_2 += var;
    }
  }
  y = digito_2.toFloat();
  var = "";

  lcd.clear();
  lcd.print("1.+ 2.-  3.* 4./");

  do {
    option = teclado.getKey();
    delay(50);
    switch(option){
      case '1':
        lcd.clear();
        result = digito_1 + " + " + digito_2 + " = ";
        lcd.print(result);
        lcd.setCursor(0,1);
        lcd.print( x + y);
        break;
      case '2':
        lcd.clear();
        result = digito_1 + " - " + digito_2 + " = ";
        lcd.print(result);
        lcd.setCursor(0,1);
        lcd.print( x - y);
        break;
      case '3':
        lcd.clear();
        result = digito_1 + " * " + digito_2 + " = ";
        lcd.print(result);
        lcd.setCursor(0,1);
        lcd.print( x * y);
        break;
      case '4':
        lcd.clear();
        result = digito_1 + " / " + digito_2 + " = ";
        lcd.print(result);
        lcd.print( x / y);
        break;
      default:
        break;
    }
  }while(option == NO_KEY);
  
  var = "";
  digito_1 = "";
  digito_2 = "";
  delay(3000);

}
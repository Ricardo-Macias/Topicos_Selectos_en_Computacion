#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); //Pines a utilizar

void setup() {
  lcd.begin(16,2); //columna 16 fila 2
  lcd.print("ARDUINO");
  delay(1000); //Pausa
  lcd.clear(); //Limpiar lcd

}

void loop() {
  lcd.clear();
  lcd.setCursor(0,0);  //Cursor en la posicion 0 en el lcd
  lcd.print("Probador de pilas");
  lcd.setCursor(0,1);
  lcd.print(analogRead(0)*5.00/1023.00); //Comvertir a Volage
  lcd.print("V=>");
  lcd.setCursor(8,1); 
  
  //Medir
  if((analogRead(0)*5.00/1023.00)>1.40){  
    lcd.print("Perfecto");
  }
  else if((analogRead(0)*5.00/1023.00)>1.20 && (analogRead(0)*5.00/1023.00)<1.40) {
    lcd.print("Bueno");
  }
  else if((analogRead(0)*5.00/1023.00)<1.20 && (analogRead(0)*5.00/1023.00)>0.30){
    lcd.print("Regular");
  }
  else if((analogRead(0)*5.00/1023.00)<0.3){
    lcd.print("Malo");
  }
  else{
    lcd.print("");
  }
  delay(500);
}

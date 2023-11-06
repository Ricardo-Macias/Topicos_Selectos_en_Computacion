#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);
int trig = 9;
int echo = 8;
float value;
float distancia;

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.print("Practica 12");
  delay(3000);
  lcd.clear();

}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print("Dist: ");
  lcd.setCursor(7, 0);
  digitalWrite(trig,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig, LOW);

  value = pulseIn(echo,HIGH);
  delay(100);

  distancia = (value/2)/29.1;

  if(distancia < 500){
    lcd.print(distancia/100);

    Serial.print("Distancia ");
    Serial.print(distancia/100);
    if(distancia < 100){
      lcd.print("cm");
      Serial.println(" cm");
    }
    else if(distancia >= 100){
      lcd.print(" m");
      Serial.println(" m");
    }
  }
  else{
    lcd.print("FUERA DE RANGO");
    Serial.println("FUERA DE RANGO");
    delay(500);
    lcd.clear();
  }

}

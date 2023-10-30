#include <LiquidCrystal.h>

int trig = 9;
int echo = 8;
float value;

LiquidCrystal lcd(12,11,5,4,3,2);

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

  Serial.begin(9600);
  lcd.begin(2,16);
  lcd.print("Practica 12");
  delay(3000);

}

void loop() {
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);

  value = pulseIn(echo,HIGH);
  delay(25);
  digitalWrite(trig, LOW);

  Serial.print("Distancia ");
  Serial.println(value);

}

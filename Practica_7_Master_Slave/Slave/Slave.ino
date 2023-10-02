
#include <Wire.h>

int LED = 2;
int x = 0;

void setup() {
  pinMode(LED, OUTPUT);
  Wire.begin(9); //Arranca el bus I2C como esclavo en la direcciob 9.
  Wire.onReceive() //Conecta una funcion para disparar cuando se recibe algo.

}

void loop() {
  // put your main code here, to run repeatedly:

}

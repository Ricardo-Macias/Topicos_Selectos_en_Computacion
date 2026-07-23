
#include <Wire.h>

int LED = 2;
int x = 0;

void setup() {
  pinMode(LED, OUTPUT);
  Wire.begin(9); //Arranca el bus I2C como esclavo en la direcciob 9.
  Wire.onReceive(receiveEvent); //Conecta una funcion para disparar cuando se recibe algo.

}

void receiveEvent(int bytes){
  x = Wire.read(); //Lee un caracter del I2C.
}

void loop() {
  
  if (x==0){
    digitalWrite(LED,HIGH);
    delay(200);
    digitalWrite(LED, LOW);
    delay(200);
  }

  if (x==3){
    digitalWrite(LED, HIGH);
    delay(400);
    digitalWrite(LED,LOW);
    delay(400);
  }
}

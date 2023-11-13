#include <Servo.h>

Servo servoMotor;
void setup() {
  Serial.begin(9600);
  servoMotor.attach(9); //Pin de coneccion
  servoMotor.write(0);
}

void loop() {
  for(int i=0;i<=180;i++){
    servoMotor.write(i);
    delay(25);
  }
  for(int i=179; i>0;i--){
    servoMotor.write(i);
    delay(25);
  }

}

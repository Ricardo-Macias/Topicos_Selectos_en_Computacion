int sensorPIR = 11;
int pinBuzzer = 9;
int pinLed = 12;
float mi = 329.63;

void setup() {
  pinMode(sensorPIR, INPUT);
  pinMode(pinBuzzer, OUTPUT);
  pinMode(pinLed, OUTPUT);

}

void loop() {
  int valor = digitalRead(sensorPIR);
  if(valor == 1){
    digitalWrite(pinLed, HIGH);
    for(int count=0; count < 3; count++){
      tone(pinBuzzer,mi);
      delay(250);
      noTone(pinBuzzer);
      delay(250);
    }
  }
  else{
    digitalWrite(pinLed, LOW);
  }
  delay(250);
}

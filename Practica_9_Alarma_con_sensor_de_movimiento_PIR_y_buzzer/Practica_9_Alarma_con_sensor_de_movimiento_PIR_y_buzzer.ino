int sensorPIR = 11;
int pinBuzzer = 9;
int pinLed = 12
float mi = 329.63;

void setup() {
  Serial.begin(9600);
  pinMode(sensorPIR, INPUT);
  pinMode(pinBuzzer, OUTPUT);
  pinMode(pinLed, OUTPUT);

}

void loop() {
  int valor = digitalRead(sensorPIR);
  Serial.println(valor);
  if(valor == 1){

  }
  

}

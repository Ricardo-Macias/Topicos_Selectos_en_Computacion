int sensorPIR = 12;
int pinBuzzer = 9;
float mi = 329.63;

void setup() {
  Serial.begin(9600);
  pinMode(sensorPIR, INPUT);
  pinMode(pinBuzzer, OUTPUT);

}

void loop() {
  int valor = digitalRead(sensorPIR);
  Serial.println(valor);
  delay(250);
  

}

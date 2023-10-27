int sensorPIR = 12;

void setup() {
  Serial.begin(9600);
  pinMode(sensorPIR, INPUT);

}

void loop() {
  int valor = digitalRead(sensorPIR);
  Serial.println(valor);
}

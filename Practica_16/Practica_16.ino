int pinLDR = A0;
int value;

void setup() {
  Serial.begin(9600);
  pinMode(pinLDR,INPUT);

}

void loop() {
  value = analogRead(pinLDR);
  Serial.println(value);
  delay(100);
}

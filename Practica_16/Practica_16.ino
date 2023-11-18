int pinLDR = A0;
int pinLed = 2;
int value;

void setup() {
  Serial.begin(9600);
  pinMode(pinLDR,INPUT);
  pinMode(pinLed,OUTPUT);
}

void loop() {
  value = analogRead(pinLDR);
  Serial.println(value);
  if(value < 15){
    digitalWrite(pinLed,HIGH);
  }
  else{
    digitalWrite(pinLed,LOW);
  }
  delay(100);
}

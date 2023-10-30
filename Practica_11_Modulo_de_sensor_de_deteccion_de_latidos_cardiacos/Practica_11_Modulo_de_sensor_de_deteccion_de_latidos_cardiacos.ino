int sensorPin = 0;
int latidos = 0;
int rawValue;

double alpha = 0.75;
double minval= 0.0;
double value;
double cambio;

float antes = 512;
float maxval = 0.0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  static unsigned long tiempoLMP = millis();
  static unsigned long latidosLPM = millis();

  rawValue = analogRead(sensorPin);

  value = alpha * antes + (1 - alpha) * rawValue;
  cambio = value - antes;
  antes = value;

  if((cambio >= maxval) && (millis() > latidosLPM + minval)){
    maxval = cambio;
    digitalWrite(13,HIGH);
    latidosLPM = millis();
    latidos++;
  }
  else{
    digitalWrite(13,LOW);
  }
  maxval = maxval * 0.97;

  if(millis() >= tiempoLMP + 10000){
    int L = latidos*6;
    Serial.print("Latidos: ");
    Serial.println(L);

    latidos = 0;
    tiempoLMP = millis();
  }

 delay(50);

}

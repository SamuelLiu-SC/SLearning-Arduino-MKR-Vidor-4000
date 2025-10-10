#define SEN_PIN A1
#define DAC_PIN A0
#define PWM_PIN 5   

int sensorValue = 0;  

void setup() {
  pinMode(DAC_PIN, OUTPUT);
  pinMode(PWM_PIN, OUTPUT);
  pinMode(SEN_PIN, INPUT);
  analogWriteResolution(10);
}

void loop() {
  sensorValue = analogRead(SEN_PIN);
  analogWrite(A0, sensorValue);
  analogWrite(PWM_PIN, sensorValue);
}

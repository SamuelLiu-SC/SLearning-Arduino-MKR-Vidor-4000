#define LED_PIN 5
#define analog_in_PIN A1

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(analog_in_PIN, INPUT);
}

int i;  

void loop() {
  i = analogRead(analog_in_PIN)/4;
  analogWrite(LED_PIN, i); 
}

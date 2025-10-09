#define LED_PIN 5

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

int i;  

void loop() {
  i = analogRead(A1)/4;
  analogWrite(LED_PIN, i); 
}

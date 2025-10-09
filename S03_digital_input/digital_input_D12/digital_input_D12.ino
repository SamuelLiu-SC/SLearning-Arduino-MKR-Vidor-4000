#define LED_PIN 5
#define PB_INPUT 12

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(PB_INPUT, INPUT);
}

int PB_state;

void loop() {
  PB_state = digitalRead(PB_INPUT);
  digitalWrite(LED_PIN, !PB_state);  
}

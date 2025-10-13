const int buttonPin = 5; 
const int ledPin = 6;    
volatile byte state = LOW;

void blink() {
  state = !state;
  digitalWrite(ledPin, state);
}

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  attachInterrupt(digitalPinToInterrupt(buttonPin), blink, FALLING);
}

void loop() {
  
}

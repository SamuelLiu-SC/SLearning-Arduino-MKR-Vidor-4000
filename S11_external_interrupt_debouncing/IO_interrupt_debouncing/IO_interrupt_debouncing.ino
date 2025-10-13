const int buttonPin = 5; 
const int ledPin = 6;    
volatile byte state = LOW;
int cnt = 0;
int cnt_old = 0;
int cnt_delay = 0;

void blink() {
  noInterrupts();
  state = !state;
  digitalWrite(ledPin, state);
  cnt++;
  do {
    delay(10);
    cnt_delay++;
    } while (digitalRead(buttonPin) == LOW);
  
  interrupts();
}

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  attachInterrupt(digitalPinToInterrupt(buttonPin), blink, FALLING);
  Serial.begin(115200);
}

void loop() {
  if (cnt != cnt_old){
    cnt_old = cnt;
    Serial.print(cnt);
    Serial.print(' ');
    Serial.println(cnt_delay);
  }
}

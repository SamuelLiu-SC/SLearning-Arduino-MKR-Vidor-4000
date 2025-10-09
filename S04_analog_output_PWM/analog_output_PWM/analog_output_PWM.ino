#define LED_PIN 5

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

int i;  // 0-255

void loop() {
  for (i=0;i<255;i+=5){
    analogWrite(LED_PIN, i); 
    delay(100);
  }   
}

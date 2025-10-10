#define PWM_PIN_R 3  
#define PWM_PIN_G 4  
#define PWM_PIN_B 5   

int randNumber_R;
int randNumber_G;
int randNumber_B;

void setup() {
  pinMode(PWM_PIN_R, OUTPUT);
  pinMode(PWM_PIN_G, OUTPUT);
  pinMode(PWM_PIN_B, OUTPUT);
}

void loop() {
  randNumber_R = random(255);
  randNumber_G = random(255);
  randNumber_B = random(255);
  analogWrite(PWM_PIN_R, randNumber_R);
  analogWrite(PWM_PIN_G, randNumber_G);
  analogWrite(PWM_PIN_B, randNumber_B);
  delay(1000);
}

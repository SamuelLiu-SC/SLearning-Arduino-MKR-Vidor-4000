
// Source adapted from https://github.com/wd5gnr/VidorFPGA
// Adaptions: Moved the define statements and the FPGA
//            setup routine to a separate file and changed
//            a few names in this file.
//            Added custom program logic.

#include <wiring_private.h>
#include "jtag.h"
#include "defines.h"

#define PIN_in1 4
#define PIN_in2 5

void setup()
{
  setup_fpga();
  Serial.begin(115200);
  pinMode(PIN_in1, OUTPUT);
  pinMode(PIN_in2, OUTPUT);
}

void loop()
{
  digitalWrite(PIN_in1, LOW);  
  digitalWrite(PIN_in2, LOW);                     
  Serial.println("00");
  delay(1000);     

  digitalWrite(PIN_in1, LOW);  
  digitalWrite(PIN_in2, HIGH);                     
  Serial.println("01");
  delay(1000);   

  digitalWrite(PIN_in1, HIGH);  
  digitalWrite(PIN_in2, LOW);                     
  Serial.println("10");
  delay(1000);  

  digitalWrite(PIN_in1, HIGH);  
  digitalWrite(PIN_in2, HIGH);                     
  Serial.println("11");
  delay(1000);       
}

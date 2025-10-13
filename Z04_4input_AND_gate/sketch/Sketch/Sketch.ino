
// Source adapted from https://github.com/wd5gnr/VidorFPGA
// Adaptions: Moved the define statements and the FPGA
//            setup routine to a separate file and changed
//            a few names in this file.
//            Added custom program logic.

#include <wiring_private.h>
#include "jtag.h"
#include "defines.h"

#define PIN_in1 2
#define PIN_in2 3
#define PIN_in3 4
#define PIN_in4 5

void setup()
{
  setup_fpga();
  Serial.begin(115200);
  pinMode(PIN_in1, OUTPUT);
  pinMode(PIN_in2, OUTPUT);
  pinMode(PIN_in3, OUTPUT);
  pinMode(PIN_in4, OUTPUT);
}

int cnt = 0;
int i1, i2, i3, i4;

void loop()
{
  for (cnt=0;cnt<0x10;cnt++){
    i1 = (cnt & ( 1 << 0 ));
    i2 = (cnt & ( 1 << 1 ));
    i3 = (cnt & ( 1 << 2 ));
    i4 = (cnt & ( 1 << 3 ));

    Serial.print(i1); 
    Serial.print(i2);
    Serial.print(i3);
    Serial.println(i4);

    digitalWrite(PIN_in1, i1);  
    digitalWrite(PIN_in2, i2); 
    digitalWrite(PIN_in3, i3);  
    digitalWrite(PIN_in4, i4); 
    delay(1000);   
  }     
}

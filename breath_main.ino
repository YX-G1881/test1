#include <Breath_LED.h>
#include "Arduino.h"

int pin=3;
int t=5;
breath breath1;
void setup() {
  breath1.setModes(pin,OUTPUT);
  
}

void loop() {
 breath1.setValue(t);
     
}

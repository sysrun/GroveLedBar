#include "GroveLedbar.h"

// Pin definition
int dataPin = 12;
int clockPin = 13;

GroveLedbar strip = GroveLedbar(dataPin, clockPin);

void setup(){
  Serial.begin(57600);
}

void loop() {
  uint8_t barNo = 0;
  while(barNo <= 10) {
    strip.setCmdMode();
    strip.setSingleBar(barNo); // Set LED States
    strip.latchData();
    barNo++;
   delay(100); 
  }
}
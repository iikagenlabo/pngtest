#include <M5Stack.h>

#include "tutan8.h"
#include "tutan16.h"

void setup() {
  M5.begin();

  M5.Lcd.pushImage (  0, 60, 160, 120, (uint8_t *)tutan8, true);
  M5.Lcd.drawBitmap(160, 60, 160, 120, (uint16_t *)tutan16);
}

void loop() {
}

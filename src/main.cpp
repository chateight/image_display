#include <M5Stack.h>

extern uint8_t panda[];

void setup() {
  M5.begin();
  M5.Power.begin();
  M5.Lcd.fillScreen(BLACK);
  M5.Lcd.drawJpg(panda, 10126, 60, 20);
  // M5.Lcd.drawJpg(const uint8_t *jpg_data, size_t jpg_len, uint16_t x, uint16_t y)
}

void loop() {

}

#include <LedControl.h>

// DIN=51, CLK=52, CS=53, one MAX7219
LedControl lc(51, 52, 53, 1);

void setup() {
  lc.shutdown(0, false);
  lc.setIntensity(0, 8);
  lc.clearDisplay(0);

  // Hardware test: show 12345678
  for (int i = 0; i < 8; i++) {
    lc.setDigit(0, 7 - i, i + 1, false);
  }
}

void loop() {
}

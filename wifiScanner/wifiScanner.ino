#include "wifi_finder.h"
#include "display.h"

TFT_eSPI tft;

void setup() {
  tft.init();
  tft.setRotation(0);

  tft.fillScreen(TFT_BLACK);

  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  tft.setTextFont(2);
  tft.setTextDatum(MC_DATUM);   // keskitys

  tft.drawString("Terve", 64, 80);
}

void loop() {

}
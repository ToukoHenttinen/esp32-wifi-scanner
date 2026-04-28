#include "display.h"

TFT_eSPI tft = TFT_eSPI();

void initializeDisplay() {
  tft.init();
  tft.setRotation(0);
  tft.fillScreen(TFT_BLACK);

  tft.setTextColor(TFT_WHITE);
  tft.setTextSize(1);
}

void showNetworks(Network networks[5]) {

  tft.fillScreen(TFT_BLACK);

  for (int i = 0; i < 5; i++) {

    tft.setCursor(10, 10 + i * 20);

    tft.print(networks[i].ssid);
    tft.print(" ");
    tft.print(networks[i].rssi);
  }
}
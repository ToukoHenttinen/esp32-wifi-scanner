#include "display.h"

TFT_eSPI tft = TFT_eSPI();


struct WifiNetwork {
  String ssid;
  int rssi;
};


void initializeDisplay() {
  tft.init();
  tft.setRotation(0);
  tft.fillScreen(TFT_BLACK);

  tft.setTextColor(TFT_WHITE);
  tft.setTextSize(1);
}

void showNetworks(WifiNetwork* networks) {

  tft.fillScreen(TFT_BLACK);

  for (int i = 0; i < 5; i++) {

    String ssid = networks[i].ssid;

    if (ssid.length() > 14) {
      ssid = ssid.substring(0, 14);
    }

    tft.setCursor(10, 10 + i * 20);

    tft.print(ssid);
    tft.print(" ");
    tft.print(networks[i].rssi);
  }
}
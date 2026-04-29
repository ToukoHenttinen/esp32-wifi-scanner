#include <WiFi.h>
#include "display.h"

struct WifiNetwork {
  String ssid;
  int rssi;
};


WifiNetwork networks[5];

void setup() {
  initializeDisplay();

  WiFi.mode(WIFI_STA);
  WiFi.disconnect();
  delay(100);
}

void loop() {

  int n = WiFi.scanNetworks();

  for (int i = 0; i < 5; i++) {
    if (i < n) {
      networks[i].ssid = WiFi.SSID(i);
      networks[i].rssi = WiFi.RSSI(i);
    } 
    
    else {
      networks[i].ssid = "";
      networks[i].rssi = 0;
    }
  }

  showNetworks(networks);

  delay(3000);
}
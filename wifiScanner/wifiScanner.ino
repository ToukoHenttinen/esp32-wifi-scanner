#include <WiFi.h>
#include "display.h"
#include "wifi_finder.h"


void setup() {
  initializeDisplay();

  WiFi.mode(WIFI_STA);
  WiFi.disconnect();
  delay(100);
}

void loop() {

  WifiNetwork* networks = getNetworks();
  showNetworks(networks);

  delay(3000);
}
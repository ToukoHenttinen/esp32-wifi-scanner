#ifndef wfi_finder_H
#define wfi_finder_H

#include <Arduino.h>

struct WifiNetwork {
  String ssid;
  int rssi;
};

WifiNetwork* getNetworks();
void handleNetworks();

#endif
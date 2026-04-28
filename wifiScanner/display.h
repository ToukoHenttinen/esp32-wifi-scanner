#ifndef DISPLAY_H
#define DISPLAY_H

#include <Arduino.h>
#include <TFT_eSPI.h>

struct Network {
  String ssid;
  int rssi;
};

void initializeDisplay();
void showNetworks(Network networks[5]);

#endif
#ifndef WIFI_FINDER_H
#define WIFI_FINDER_H

#include <Arduino.h>

struct Network {
  String ssid;
  int rssi;
};

void getTopNetworks(Network result[5]);

#endif
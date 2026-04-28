#include "wifi_finder.h"
#include <WiFi.h>
/*
void getTopNetworks(Network result[5]) {

  int n = WiFi.scanNetworks();

  // tyhjennys
  for (int i = 0; i < 5; i++) {
    result[i].ssid = "";
    result[i].rssi = -1000;
  }

  // järjestä signaalin mukaan
  for (int i = 0; i < n; i++) {

    String ssid = WiFi.SSID(i);
    int rssi = WiFi.RSSI(i);

    for (int j = 0; j < 5; j++) {
      if (rssi > result[j].rssi) {

        for (int k = 4; k > j; k--) {
          result[k] = result[k - 1];
        }

        result[j].ssid = ssid;
        result[j].rssi = rssi;
        break;
      }
    }
  }
} */
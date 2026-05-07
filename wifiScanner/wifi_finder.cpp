#include "wifi_finder.h"
#include <WiFi.h>


WifiNetwork networks[5];

WifiNetwork* getNetworks(){

  WiFi.mode(WIFI_STA);
  WiFi.disconnect();
  delay(100);
  
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

  return networks;

}
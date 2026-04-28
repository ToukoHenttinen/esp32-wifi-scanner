#include "display.h"

Network networks[5];

void setup() {

  initializeDisplay();

  networks[0] = {"WiFi_1", -40};
  networks[1] = {"WiFi_2", -50};
  networks[2] = {"WiFi_3", -60};
  networks[3] = {"WiFi_4", -70};
  networks[4] = {"WiFi_5", -80};

  showNetworks(networks);
}

void loop() {

}
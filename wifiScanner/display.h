#ifndef DISPLAY_H
#define DISPLAY_H

#include <Arduino.h>
#include <TFT_eSPI.h>


void initializeDisplay();
void showNetworks(struct WifiNetwork* networks);

#endif
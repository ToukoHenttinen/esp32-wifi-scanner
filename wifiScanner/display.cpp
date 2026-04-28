#include "display.h"

TFT_eSPI tft;


void initializeDisplay(){

  tft.init();
  tft.setRotation(0);

  tft.fillScreen(TFT_BLACK);

  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  tft.setTextFont(2);
}


void showNetworks(const char*){

}

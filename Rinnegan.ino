#include <Adafruit_ST7789.h> 
#include <Adafruit_GFX.h>
#include <Adafruit_I2CDevice.h>
#include <SPI.h>

#define TFT_DC 2 
#define TFT_RST 4 
#define TFT_MOSI 23 
#define TFT_SCLK 18 
#define TFT_CS  5  

Adafruit_ST7789 tft = Adafruit_ST7789(TFT_CS, TFT_DC, TFT_RST);

void setup(void) {
  Serial.begin(9600);

  tft.init(240, 240, SPI_MODE3); // initialize a ST7789 chip, 240×240 pixels
  tft.fillScreen(ST77XX_BLACK);
  // tft.setCursor(20, 50);
  tft.setTextColor(ST77XX_YELLOW);
  tft.setTextSize(2);
  tft.println("hello");
}

void loop (){

}
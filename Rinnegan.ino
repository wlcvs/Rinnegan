#include <Adafruit_ST7789.h> 
#include <Adafruit_GFX.h>
#include <Adafruit_I2CDevice.h>
#include <SPI.h>

#define TFT_DC 2 
#define TFT_RST 4 
#define TFT_MOSI 23 
#define TFT_SCLK 18 
#define TFT_CS  5  

// Color definitions
#define BLACK        0x0000
#define DARK_PURPLE  0x381F

Adafruit_ST7789 tft = Adafruit_ST7789(TFT_CS, TFT_DC, TFT_RST);

void setup(void) {
  Serial.begin(9600);

  tft.init(240, 240, SPI_MODE3); // initialize a ST7789 chip, 240×240 pixels
  tft.setRotation(1);
  tft.fillScreen(DARK_PURPLE); 

  int radius = 10;

  // Pupil
  tft.drawCircle(120, 120, radius, BLACK);
  tft.fillCircle(120, 120, radius, BLACK);

  // 4 lines
  for (int i = 0; i < 4; i++) {
    radius += 30;
    // Each line will be 5 pixels wide
    for (int j = 0; j < 5; j++) {
      tft.drawCircle(120, 120, radius + j, BLACK);
    }
  }

}

void loop (){
}
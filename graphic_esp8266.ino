#include <Adafruit_GFX.h>
#include <Adafruit_ST7789.h>
#include <SPI.h>
#include "photo_CHECK.c"

#define TFT_CLK 14
#define TFT_MOSI 13
#define TFT_DC 0
#define TFT_RST 2
#define TFT_CS 15
#define TFT_BACKLIGHT 5

Adafruit_ST7789 tft = Adafruit_ST7789(TFT_CS, TFT_DC, TFT_RST);

void setup() {
  pinMode(TFT_BACKLIGHT, OUTPUT);
  digitalWrite(TFT_BACKLIGHT, LOW);
  tft.init(240, 240, SPI_MODE3);
  tft.setRotation(2); // Переворот, если нужно

  // Выводим картинку только один раз
  tft.drawRGBBitmap(0, 0, photo_CHECK, 240, 240);
}

void loop() {

}

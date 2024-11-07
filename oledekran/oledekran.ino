#include <Wire.h>
#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define SCREEN_I2C_ADDRESS 0x3C
#define OLED_RESET_PIN -1
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT,&Wire,OLED_RESET_PIN);
int counter = 0;
int line = 0;

void setup()
{
  display.begin(SSD1306_SWITCHCAPVCC, SCREEN_I2C_ADDRESS);
  display.clearDisplay();
  display.setTextColor(WHITE);
  display.setTextSize(3);
  display.setCursor(0, 0);
  display.println("Merhaba");
  display.display();
  delay(1000);
}
void loop()
{
  counter++;
  display.clearDisplay();
  display.setTextColor(WHITE);
  display.setTextSize(2);
  display.setCursor(20, 0);
  display.println("Counter ");

  display.drawLine(0, 25, counter, 25, WHITE);
  
  display.setTextSize(3);
  display.setCursor(40,30);
  display.println(counter);
  display.display();
  delay(10);
  
  if(counter >= 128){
    counter = 0;
  }
  




}


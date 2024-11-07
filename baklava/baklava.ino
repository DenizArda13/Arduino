#include <Wire.h>
#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define SCREEN_I2C_ADDRESS 0x3C
#define OLED_RESET_PIN -1

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT,&Wire,OLED_RESET_PIN);
int x = 63;


void setup()
{
  display.begin(SSD1306_SWITCHCAPVCC, SCREEN_I2C_ADDRESS);
  display.clearDisplay();
  delay(10);
}
void loop(){
  int a = 0;
  for(int i=0; i <= 31; i++){
    display.drawPixel(x-i, i, SSD1306_WHITE);
    display.drawPixel(x+i, i, SSD1306_WHITE);
    display.display();
    for(int b =x-i; b <= x+i; b++){
      display.drawPixel(b, i, SSD1306_WHITE);
      display.display();
    }
  } 
  for(int j=63; j > 31; j--){
    display.drawPixel(x-a, j, SSD1306_WHITE);
    display.drawPixel(x+a, j, SSD1306_WHITE);
    display.display();
    a++; 
    for(int c = x-a; c <= x+a; c++){
      display.drawPixel(c, j, SSD1306_WHITE);
      display.display();      
    }
  } 
  //display.clearDisplay();
}
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define SCREEN_I2C_ADDRESS 0x3C
#define OLED_RESET_PIN -1
Adafruit_SSD1306 screen(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET_PIN);


void setup() {
  screen.begin(SSD1306_SWITCHCAPVCC, SCREEN_I2C_ADDRESS);
}

void loop() {
  
  screen.clearDisplay();
  screen.display();
  delay(500);
  writing("ASSAN", 30, 4);
  writing("ELEKTRONIK", 5, 24);
  writing("YATIRIMLAR", 5, 44);
  delay(500);

  screen.drawLine(0, 0, 127, 0, SSD1306_WHITE); // (başlangıç x, y, bitiş x, y)
  screen.display(); // İçeriği değişen ekranı tazeleyelim
  delay(500);
  screen.drawLine(127, 0, 127, 63, SSD1306_WHITE);
  screen.display();
  delay(500);
  screen.drawLine(127, 63, 0, 63, SSD1306_WHITE);
  screen.display();
  delay(500);
  screen.drawLine(0, 63, 0, 0, SSD1306_WHITE);
  screen.display();
  delay(500);

  screen.invertDisplay(true);
  delay(500);
  screen.invertDisplay(false);
  delay(500);
  screen.invertDisplay(true);
  delay(500);
  screen.invertDisplay(false);
  delay(500);

  screen.clearDisplay();
  screen.display();
  delay(500);

  writing("OLED", 35, 4);
  writing("EKRAN", 25, 24);
  writing("KULLANIMI", 10, 44);  
  delay(500);

  screen.invertDisplay(true);
  delay(500);
  screen.invertDisplay(false);
  delay(500);
  screen.invertDisplay(true);
  delay(500);
  screen.invertDisplay(false);
  delay(500);

  shiftTheText();
}
void writing (String text, int cx, int cy){
  screen.setTextSize(2);
  screen.setTextColor(SSD1306_WHITE);
  screen.setCursor(cx, cy);
  screen.println(text);
  screen.display();
}
void shiftTheText(void){
  screen.clearDisplay();
  delay(500);
  screen.setTextSize(2);
  screen.setTextColor(SSD1306_WHITE);
  screen.setCursor(10, 24);
  screen.println("ASN");
  screen.display();
  delay(500);

  // sağa, sola, çapraz sağa, çapraz sola kaydırma
  
  screen.startscrollright(0x00,0x0F);// kısaca bütün yazıyı kaydırıyo
  delay(2000);
  screen.stopscroll(); // Kaydırmayı durdur
  delay(500);
  screen.startscrollleft(0x00, 0x0F);
  delay(2000);
  screen.stopscroll();
  delay(500);
  screen.startscrolldiagright(0x00, 0x07);
  delay(2000);
  screen.startscrolldiagleft(0x00, 0x07);
  delay(2100);
  screen.stopscroll();
  delay(500);

}
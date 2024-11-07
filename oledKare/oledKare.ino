#include <Wire.h>
#include <SPI.h>
#include <Adafruit_SSD1306.h>
int genislik = 128; 
int yukseklik = 64; 
int adres = 0x3C;   // 128x64 için 0x3C (bazı modüllerde 0x3D)
 
Adafruit_SSD1306 ekran(genislik, yukseklik, &Wire); 
 
void setup() {
  ekran.begin(SSD1306_SWITCHCAPVCC, adres);

}

void loop() {
  ekran.clearDisplay();        // Ekranı temizleyelim
  ekran.display();             // Ekranı görüntüleyelim
  delay(500);

  ekran.drawRect(0, 0, 128, 64, SSD1306_WHITE);
  ekran.display();
  delay(500);

  // Köşeleri yuvarlak dikdörtgen çizimi (başlangıç x, y, bitiş x, y)
  ekran.clearDisplay();
  ekran.display();
  delay(500);
  ekran.drawRoundRect(0, 0, 128, 64, 8, SSD1306_WHITE);
  ekran.display();
  delay(500);

  // Çember çizimi (çember merkezi x, y, çember yarıçapı)
  ekran.clearDisplay();
  ekran.display();
  delay(500);
  ekran.drawCircle(16, 30, 6, SSD1306_WHITE);
  ekran.drawCircle(39, 30, 15, SSD1306_WHITE);
  ekran.drawCircle(87, 30, 30, SSD1306_WHITE);
  ekran.display();
  delay(500);  

}

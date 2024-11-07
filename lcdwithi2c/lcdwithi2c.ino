#include <LiquidCrystal_I2C.h>
#include <Wire.h>
LiquidCrystal_I2C lcd(0x27,16,2);//0x27 tanımlama


void setup() {
  lcd.init(); //başlatıyoruz
  lcd.backlight(); //arka plandaki ışığı açıyor I2C olmayınca farklı bir kod oluyor
  lcd.setCursor(0,0);
  lcd.print("Merhaba Dunya");
  lcd.setCursor(6,1);
  lcd.print("GiT");

  delay(2000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("LCD KAPANACAK");
  delay(2000);
  lcd.noDisplay();// ekrandaki yazıları siliyor
  //lcd.noBacklight();

  // kayan yazılar fonksiyonları
}

void loop() {


}

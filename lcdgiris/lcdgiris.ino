#include <LiquidCrystal.h>

LiquidCrystal lcd (12,11,5,4,3,2);

void setup() {
  lcs.begin(16,2);

}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("gorsel");
  delay(1000);
  lcd.setCursor(0,1);
  lcd.print("isitsel");
  delay(1000);
  lcd.setCursor(0,0);
  lcd.print("teknoloji");
  delay(1000);
  lcd.clear();//ekranı temizler

  lcd.display();// ekranı açar
  lcd.noDisplay();// ekranı kapatır



}

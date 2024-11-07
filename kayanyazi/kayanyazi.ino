#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup() {
  lcd.init();
  lcd.backlight();
}
void loop() {
  Yazdir("Robolink",1000); //Metin ve süre
}
void Yazdir(String msg,int sure){
  int size = msg.length();
  for(int i=0;i<=16-size;i++){
    lcd.clear();
    lcd.setCursor(i,0);
    lcd.print(msg);
    delay(sure);
  }
  for(int i=16-size;i>0;i--){
    lcd.clear();
    lcd.setCursor(i,0);
    lcd.print(msg);
    delay(sure);
  }
}
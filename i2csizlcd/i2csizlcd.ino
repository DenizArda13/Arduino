#include <LiquidCrystal.h>

LiquidCrystal lcd (12,11,5,4,3,2);

void setup() {
  lcd.begin(16,2);

}

void loop() { 
  lcd.display();
  lcd.setCursor(5,0);
  lcd.print("Assan");
  lcd.setCursor(3,1);
  lcd.print("Elektronik");
  delay(5000);
  lcd.clear();
  delay(5000);
  lcd.noDisplay();
 

}

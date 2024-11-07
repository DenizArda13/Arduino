#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#include <HCSR04.h>

LiquidCrystal_I2C lcd(0x27,16,2);

HCSR04 hc(9,8);

const int buzzer = 10;

void setup() {
  Serial.begin(9600);
  
  pinMode(buzzer, OUTPUT);
  
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Park sensor on");
  lcd.setCursor(4, 1);
  lcd.print("Welcome");
  delay(2000);
  lcd.clear();

  tone(buzzer, 3000, 4000);
}

void loop() {
  float distance;
  distance = hc.dist();
  delay(10);
  Serial.println(distance);

  if(distance >= 400 || distance <=2){
    lcd.clear();
    lcd.setCursor(3, 0);
    lcd.print("Out Of Range");
    delay(1000);
  }
  if(distance <= 20){
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Distance: ");
    lcd.print(distance);
    lcd.print("cm");
    lcd.setCursor(0,1);
    lcd.print("CAUTION");
    delay(1000);
    while(distance <= 10){
      float distance;
      distance = hc.dist();
      delay(10);
      Serial.println(distance);

      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Distance: ");
      lcd.print(distance);
      lcd.print("cm");
      lcd.setCursor(0, 1);
      lcd.print("STOP");
      map(distance, 0, 400, 4, 1);
      digitalWrite(buzzer, 1);
      delay(distance*25);
      digitalWrite(buzzer, 0);
      if(distance > 10){
        break;
      }      
      delay(distance*50);
    }
  }
  else{
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Distance:");
    lcd.print(distance);
    lcd.print("cm");
    delay(1000);
    lcd.clear();
  }
}

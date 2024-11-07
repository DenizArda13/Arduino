#include <LiquidCrystal_I2C.h>
#include <Wire.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

byte trigger = 9;
byte echo = 8;

unsigned long sure;
double Yol;
double Mesafe;
const int buzzer = 10;

void setup() {
  Serial.begin(9600);
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(buzzer, OUTPUT);

  lcd.init();
  lcd.backlight();
  lcd.setCursor(1,0);
  lcd.print("merhaba dunya");
  lcd.setCursor(6,1);
  lcd.print("GIT");
  delay(1000);
  lcd.clear();


  delay(1000);
  tone(buzzer, 3000, 4000);
}

void loop() {
  digitalWrite(trigger, HIGH);
  delay(10);
  digitalWrite(trigger, LOW);

  sure = pulseIn(echo, HIGH);

  Yol = (double)sure * 0.034;
  Mesafe = (double)Yol / 2;


  if (Mesafe >= 400 || Mesafe <= 2) {
    lcd.clear();
    lcd.setCursor(3, 0);
    lcd.print("Menzil disi");
    Serial.println("menzil disi");
    delay(1000);
  }

  if (Mesafe <= 20) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Mesafe:");
    lcd.print(Mesafe);
    lcd.print(" cm");
    lcd.setCursor(0, 1);
    lcd.print("Dikkatli olun");
    Serial.print("20den küçük");
    delay(1000);

    while (Mesafe <= 10) {
      digitalWrite(trigger, HIGH);
      delay(10);
      digitalWrite(trigger, LOW);

      sure = pulseIn(echo, HIGH);

      Yol = (double)sure * 0.034;
      Mesafe = (double)Yol / 2;

      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Mesafe:");
      lcd.print(Mesafe);
      lcd.print(" cm");
      lcd.setCursor(0, 1);
      lcd.print("Durunuz");
      Serial.println("10dan küçük");
      map(Mesafe, 0, 400, 4, 1);
      digitalWrite(buzzer, 1);
      delay(Mesafe * 25);
      digitalWrite(buzzer, 0);
      delay(Mesafe * 50);
      if (Mesafe > 10){
        break;}
    }
  } 
  else {
    Serial.println("else");
    lcd.setCursor(0, 0);
    lcd.print("Mesafe:");
    lcd.print(Mesafe);
    lcd.print(" cm");
    delay(1000);
    lcd.clear();
  }
}

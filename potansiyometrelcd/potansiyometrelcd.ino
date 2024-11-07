#include <LiquidCrystal.h>

LiquidCrystal lcd (12,11,5,4,3,2);

void setup() {
  pinMode(A0, INPUT);
  lcd.begin(16,2);
  lcd.display();

  Serial.begin(9600);


}

void loop() {
  int analogValue = analogRead (A0);
  Serial.println(analogValue);
  int percentageValue = map(analogValue, 90, 1000, 0, 100);
  Serial.println(analogValue);
  if (analogValue < 90){
    percentageValue = 0;
  }
  else if(analogValue > 1000){
    percentageValue = 100;
  }

  lcd.setCursor(2,0);
  lcd.print("Percentage :");
  lcd.setCursor(6,1);
  lcd.print("%");
  lcd.setCursor(7,1);
  lcd.print(percentageValue);
  delay(100); 
  lcd.clear();  




}

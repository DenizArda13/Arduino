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
  int percentageValue = map(analogValue, 0, 1023, 0, 4095);
  percentageValue = percentageValue/40;
  Serial.println(percentageValue);

  lcd.setCursor(2,0);
  lcd.print("Percentage :");
  lcd.setCursor(6,1);
  lcd.print("%");
  lcd.setCursor(7,1);
  lcd.print(percentageValue);
  delay(100); 
  lcd.clear();  




}

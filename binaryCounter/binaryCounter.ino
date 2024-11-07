#define redButton 2
#define whiteButton 3
#define redLight 4
#define greenLight 5
#define yellowLight 6
#define alarmLight 7
int number = 0;

void setup() {
  pinMode(redButton, INPUT);
  pinMode(whiteButton, INPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  while (digitalRead(redButton) == 1) {
    delay(200);
    number += 1;
  }
  if (digitalRead(whiteButton) == 1) {
    if (number == 0) {
      digitalWrite(redLight, 0);
      digitalWrite(greenLight, 0);
      digitalWrite(yellowLight, 0);
      delay(6000);
    } 
    else if (number == 1) {
      digitalWrite(redLight, 1);
      digitalWrite(greenLight, 0);
      digitalWrite(yellowLight, 0);
      delay(6000);
    } else if (number == 2) {
      digitalWrite(redLight, 0);
      digitalWrite(greenLight, 1);
      digitalWrite(yellowLight, 0);
      delay(6000);
    } else if (number == 3) {
      digitalWrite(redLight, 1);
      digitalWrite(greenLight, 1);
      digitalWrite(yellowLight, 0);
      delay(6000);
    } else if (number == 4) {
      digitalWrite(redLight, 0);
      digitalWrite(greenLight, 0);
      digitalWrite(yellowLight, 1);
      delay(6000);
    } else if (number == 5) {
      digitalWrite(redLight, 1);
      digitalWrite(greenLight, 0);
      digitalWrite(yellowLight, 1);
      delay(6000);
    } else if (number == 6) {
      digitalWrite(redLight, 0);
      digitalWrite(greenLight, 1);
      digitalWrite(yellowLight, 1);
      delay(6000);
    } else if (number == 7) {
      digitalWrite(redLight, 1);
      digitalWrite(greenLight, 1);
      digitalWrite(yellowLight, 1);
      delay(6000);
    } else {
      digitalWrite(alarmLight, 1);
      delay(1000);
      digitalWrite(alarmLight, 0);
      number = 0;
    }
    digitalWrite(redLight, 0);
    digitalWrite(greenLight, 0);
    digitalWrite(yellowLight, 0);
    number = 0;
  } 
}

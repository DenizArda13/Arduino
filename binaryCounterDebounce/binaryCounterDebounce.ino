#define redButton 2
#define whiteButton 3
#define redLight 4
#define greenLight 5
#define yellowLight 6
#define alarmLight 7
int number = 0;

int buttonState;
int lastButtonState = LOW;
unsigned long lastDebounceTime = 0;


int whiteButtonState;
int whiteLastButtonState = LOW;
unsigned long whiteLastDebounceTime = 0;

unsigned long debounceDelay = 50;

void setup() {
  pinMode(redButton, INPUT);
  pinMode(whiteButton, INPUT);
  pinMode(redLight, OUTPUT);
  pinMode(greenLight, OUTPUT);
  pinMode(yellowLight, OUTPUT);
  pinMode(alarmLight, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  //red button codeblock
  int reading = digitalRead(redButton);
  if(reading != lastButtonState){
    lastDebounceTime = millis();
  } 
  if (millis() - lastDebounceTime > debounceDelay){
    if(reading != buttonState){
      buttonState = reading;
      if(buttonState == HIGH){
        number += 1;
        Serial.println("inside of the red button codeblock:");// to control the code
        Serial.println(number);
      }
    }
  }
  lastButtonState = reading;
  //white button codeblock
  int whiteReading = digitalRead(whiteButton);
  if(whiteReading != whiteLastButtonState){
    whiteLastDebounceTime = millis();
  }
  if((millis() - whiteLastDebounceTime) > debounceDelay){
    if(whiteReading != whiteButtonState){
      whiteButtonState = whiteReading;
      if(whiteButtonState == HIGH){
        Serial.println("inside of the white button codeblock:");// to control the code
        Serial.println(number);
        if(number == 0){
          digitalWrite(redLight,LOW);
          digitalWrite(greenLight,LOW);
          digitalWrite(yellowLight,LOW);
          delay(1000);
        }
        else if (number == 1){
          digitalWrite(redLight,HIGH);
          digitalWrite(greenLight,LOW);
          digitalWrite(yellowLight,LOW);
          delay(1000);
        }
        else if (number == 2){
          digitalWrite(redLight,LOW);
          digitalWrite(greenLight,HIGH);
          digitalWrite(yellowLight,LOW);
          delay(1000);
        }
        else if (number == 3){
          digitalWrite(redLight,HIGH);
          digitalWrite(greenLight,HIGH);
          digitalWrite(yellowLight,LOW);
          delay(1000);
        }
        else if (number == 4){
          digitalWrite(redLight,LOW);
          digitalWrite(greenLight,LOW);
          digitalWrite(yellowLight,HIGH);
          delay(1000);
        }
        else if (number == 5){
          digitalWrite(redLight,HIGH);
          digitalWrite(greenLight,LOW);
          digitalWrite(yellowLight,HIGH);
          delay(1000);
        }
        else if (number == 6){
          digitalWrite(redLight,LOW);
          digitalWrite(greenLight,HIGH);
          digitalWrite(yellowLight,HIGH);
          delay(1000);
        }
        else if (number == 7){
          digitalWrite(redLight,HIGH);
          digitalWrite(greenLight,HIGH);
          digitalWrite(yellowLight,HIGH);
          delay(1000);
        }
        else{
          digitalWrite(alarmLight,HIGH);
          delay(500);
          digitalWrite(alarmLight,LOW);
          number = 0;
        }
        digitalWrite(redLight,LOW);
        digitalWrite(greenLight,LOW);
        digitalWrite(yellowLight,LOW);
        number = 0;
      }
    }
  }
  whiteLastButtonState = whiteReading;



}

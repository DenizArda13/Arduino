int redLed = 2;
int greenLed = 3;
int yellowLed = 4;
int buzzer = 5;
int button = 8;
int ldr = A0;
int delayTime = 500;


void setup() {
  Serial.begin(9600);
  pinMode(redLed,OUTPUT);
  pinMode(greenLed,OUTPUT);
  pinMode(yellowLed,OUTPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(button,INPUT);
  pinMode(ldr,INPUT);
}

void loop() {
  fonksiyon3();
  fonksiyon2();
  fonksiyon1();
  fonksiyon4();
}
void fonksiyon1(){
  digitalWrite(redLed,1);
  delay(delayTime);
}
void fonksiyon2(){
  digitalWrite(greenLed,1);
  delay(delayTime);
}
void fonksiyon3(){
  int buttonState =digitalRead(button);
  if(buttonState == 1){
    digitalWrite(yellowLed,1);
    digitalWrite(buzzer,1);
    delay(zaman - 450);
    digitalWrite(buzzer,0);
    delay(zaman - 450);

  }

}
void fonksiyon4(){
  digitalWrite(redLed,0);
  digitalWrite(greenLed,0);
  digitalWrite(yellowLed,0);
  delay(zaman);

}

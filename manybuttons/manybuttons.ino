#define button A0

int buttonNumber;

void setup() {
  Serial.begin(9600);
  pinMode(button, INPUT);


}

void loop() {
  buttonNumber = analogRead(button);
  Serial.println(buttonNumber);
  if(buttonNumber > 900){
    Serial.println("pressed to the button1");
  }
  else if(buttonNumber < 800 && buttonNumber >700){
    Serial.println("pressed to the button2");
  }
  else if(buttonNumber < 500 && buttonNumber >350){
    Serial.println("pressed to the button3");
  }
  else if(buttonNumber < 100 && buttonNumber >10){
    Serial.println("pressed to the button4");

  }
}

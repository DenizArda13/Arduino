byte rled = 2;
byte gled = 3;
byte redButton = 8;
byte greenButton = 9;
byte state = 0;
void setup() {
  Serial.begin(9600);
  pinMode(rled,OUTPUT);
  pinMode(gled,OUTPUT);
  pinMode(redButton,INPUT);
  pinMode(greenButton,INPUT);
}

void loop() {
  int redButtonState = digitalRead(redButton);
  int greenButtonState = digitalRead(greenButton);
  if(redButtonState == 1){
    if(state<=5){
      state++;
      delay(100);
    }
    
  }
  else if(greenButtonState ==1){
    if(state>0){
      state--;
      delay(100);
    }
  }
  switch(state)
  {
    case 1:
    digitalWrite(rled,1);
    digitalWrite(gled,0);
    break;

    case 2:
    digitalWrite(rled,0);
    digitalWrite(gled,1);
    break;

    case 3:
    digitalWrite(rled,1);
    digitalWrite(gled,1);
    break;

    case 4:
    digitalWrite(rled,0);
    delay(200);
    digitalWrite(rled,0);
    delay(200);
    digitalWrite(gled,1);
    break;

    case 5:
    digitalWrite(rled,1);
    digitalWrite(gled,0);
    delay(200);
    digitalWrite(gled,1);
    delay(200);
    break;   

    default:
    digitalWrite(rled,0);
    digitalWrite(rled,0);

  }




}

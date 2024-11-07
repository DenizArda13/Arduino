int kled = 2;
int yled = 3;

int bt1 = 8;
int bt2 = 9;
int bt3 = 10;
void setup() {
  pinMode(kled,OUTPUT);
  pinMode(yled,OUTPUT);

  pinMode(bt1,INPUT);
  pinMode(bt2,INPUT);
  pinMode(bt3,INPUT);


}

void loop() {
  int bt1Durum = digitalRead (bt1);

  int bt2Durum = digitalRead (bt2);

  int bt3Durum = digitalRead (bt3);

  if(bt1Durum == 1){
    digitalWrite(kled,1);
  }
  else if (bt2Durum == 1){
    digitalWrite(yled,1);
  }
  else if(bt3Durum == 1){
    digitalWrite(kled,1);
    digitalWrite(yled,1);

  }
  else{
    digitalWrite(kled,0);
    digitalWrite(yled,0);
  }


}

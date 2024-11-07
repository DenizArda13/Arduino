int buton1 = 2;
int sayac = 0;
int buton2 = 3;
int led = 6;

void setup() {
  pinMode(buton1,INPUT);
  pinMode(buton2,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);


}

void loop() {
  int bt1Durum = digitalRead(buton1);
  int bt2Durum = digitalRead(buton2);

  if (bt1Durum == 1)
  {
    sayac ++;
    delay(150);
    Serial.println("buton 1'e basildi");
  }

  if (bt2Durum == 1){
    sayac--;
    delay(150);
    Serial.println("buton 2'e basildi");
  }

  else if(sayac==5)
  {
    Serial.print("sayac degeri: ");
    Serial.println(sayac);
    digitalWrite(led,1);

  }
  else if(sayac==8)
  {
    Serial.print("sayac degeri: ");
    Serial.println(sayac);
    digitalWrite(led,1);
    delay(500);
    digitalWrite(led,0);
    delay(500);

  }  
  else
  {
    digitalWrite(led,0);
    Serial.println(sayac);
  }
  //Serial.println("Merhaba");//ln alt satıra atar



}

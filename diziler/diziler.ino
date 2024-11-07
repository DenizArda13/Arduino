int sayilar [] = {2, 3, 4, 5, 6, 7};
String isimler [] = {"görsel", "işitsel", "teknoloji"};
char karakterler [] = {'k','e','r','i','m'};

void setup() {
  for (int i=0;i<6;i++){
    pinMode(sayilar[i],OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {

  for(int k=0;k<6;k++){
    digitalWrite(sayilar[k], HIGH);
    delay(250);
  }

  for(int j=0;j<6;j++){
    digitalWrite(sayilar[j], LOW);
    delay(250);
  }

}

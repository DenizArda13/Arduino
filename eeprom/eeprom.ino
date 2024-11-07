#include <EEPROM.h>

int kayit_adresi, kaydedilecek_veri;
int okunacak_adres, okunan_veri;

#define k_led 2
#define s_led 3
#define y_led 4
#define button 8

int sayac;

 void setup() {
  Serial.begin(9600);
  pinMode(k_led, OUTPUT);
  pinMode(s_led, OUTPUT);
  pinMode(y_led, OUTPUT);
  pinMode(button, OUTPUT);

}

void loop() {
  int btn_durum = digitalRead(button);

  if (btn_durum == 1){
    sayac++;
    delay(200);
    if (sayac>4){
      sayac = 0;
    }
  kayit_adresi = 10;
  kaydedilecek_veri = sayac; //0-250 ile arasındaki sayıları tutabilir
  EEPROM.write(kayit_adresi, kaydedilecek_veri); 
  delay(10);   
  }


  okunacak_adres = 10;
  okunan_veri = EEPROM.read(okunacak_adres);
  delay(10);
  
  sayac = okunan_veri;
  Serial.println("okunan veri : ");
  Serial.println(okunan_veri);
  Serial.print("sayac degeri : ");
  Serial.println(sayac);
  delay(200);
  

  if (okunan_veri ==1){
    digitalWrite (k_led,HIGH);
    digitalWrite (y_led,LOW);
    digitalWrite (s_led,LOW);

  }
  else if(okunan_veri == 2){
    digitalWrite (k_led,LOW);
    digitalWrite (y_led,LOW);
    digitalWrite (s_led,HIGH);   
  }
    else if(okunan_veri == 3){
    digitalWrite (k_led,LOW);
    digitalWrite (y_led,HIGH);
    digitalWrite (s_led,LOW);   
  }
  else{
    digitalWrite (k_led,LOW);
    digitalWrite (y_led,LOW);
    digitalWrite (s_led,LOW);
  }
}

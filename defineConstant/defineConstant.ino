int sayi = 3;
const int sayac = 3;
int Buton = 3;
#define buton 4 //buton tanımlamada daha mantıklı yer kaplamıyo

void setup() {
  Serial.begin(9600);

}

void loop() {
  Serial.println(sayac);
  delay(2000);
  // sayac = 10; // şeklinde yazarsan kabul etmez const int şeklinde sabit olarak tanımladık
  int sayac = 10 ; // doğru tanımlama budur const olsa bile değiştirir 
  Serial.println(sayac);
  //buton = 5; //kabul etmez




}

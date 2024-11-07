int a = -5;
int b = 6;
int sonuc; 


void setup() {
  Serial.begin(9600);


}

void loop() {
  sonuc = sq(a);
  Serial.print("karesi = ");
  Serial.println(sonuc);
  sonuc = abs(a);
  Serial.print("mutlak deger = "); 
  Serial.println(sonuc);
  Serial.print("min değer = ");
  sonuc = min(sonuc,30);
  Serial.println(sonuc);
  Serial.print("max değer = ");  
  sonuc = max(sonuc,40);
  Serial.println(sonuc);  
  sonuc =  constrain (sonuc,30,60);
  Serial.println(sonuc);



}

int a = 2;
int b = 4;
int sonuc1 = 10;
int sonuc2 = 20;


void setup() {
  Serial.begin(9600);

}

void loop() {
  if (a>b){
    Serial.println("a buyuktur b");

  }
  else if (a<b){
    Serial.println("a kucuktur b"); 
  }
  else if (a<=b){
    Serial.println("a kucuk esit b");

  }
  
  else if(a>=b){
    Serial.println("a buyuk veya esit b ye");

  }
  else if(a==b){
    Serial.println("a eşittir b ye");
  }


  else {
    Serial.println("hiçbir şart sağlanmadı");
  }
  //a!=b // a bye eşit değilse
  //&& ve
  //|| veya
  //! değil
  //a<!b büyük değilse
    


}

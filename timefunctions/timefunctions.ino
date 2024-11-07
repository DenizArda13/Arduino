int sayac;
unsigned long simdikizaman;
unsigned long oncekizaman = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  simdikizaman = millis();

  if (simdikizaman-oncekizaman >= 2000){
    Serial.println(simdikizaman);
    oncekizaman = simdikizaman;

  }
  
  
  
  
  
  //Serial.println(sayac);
  //sayac++;
  //delay(1);
  //delayMicroseconds(16393); //delay(16)

}

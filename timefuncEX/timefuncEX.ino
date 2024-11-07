int sayac;
unsigned long simdikizaman;
unsigned long oncekizaman = 0;
unsigned long oncekizamanYesil = 0;
#define kirmizi 2
#define yesil 3
bool ledDurum = HIGH;
bool ledDurumYesil = HIGH;

void setup() {
  pinMode(kirmizi, OUTPUT);
  pinMode(yesil, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  simdikizaman = milis()
  if(simdikizaman-oncekizaman >= 500){
    Serial.print("KIRMIZI");
    Serial.print(simdikizaman);
    ledDurum = !ledDurum;
    digitalWrite(kirmizi, ledDurum);
    oncekizaman = simdikizaman;
  }
  if(simdikizaman-oncekizamanYesil >= 1000){
    Serial.print("YEŞİL");
    Serial.println(simdikizaman);
    ledDurumYesil = !ledDurumYesil;
    digitalWrite(yesil, ledDurumYesil);
    oncekizamanYesil = simdikizaman;
  }
}

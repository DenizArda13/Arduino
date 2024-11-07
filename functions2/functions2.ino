int redLed = 2;
int greenLed = 3;
int yellowLed = 4;
int buzzer = 5;
int button = 8;
int ldr = A0;
int delayTime;

void setup() {
  Serial.begin(9600);
  pinMode(redLed,OUTPUT);
  pinMode(greenLed,OUTPUT);
  pinMode(yellowLed,OUTPUT);
  pinMode(buzzer,OUTPUT);

  pinMode(button,INPUT);
  pinMode(ldr,INPUT);
}

void loop() {
  ornek(3,250); 


}

void ornek (int a,int b){
  for(int k = 0; k < a ;k++){
    digitalWrite(redLed,1);
    delay(delayTime);
    digitalWrite(buzzer,1);
    delay(50);
    digitalWrite(buzzer,0);
    delay(50); 
    digitalWrite(redLed,0);
    delay(delayTime);       
  }
  }
  int toplam(){ //değer döndürecek 
    int ldrValue = analogRad(ldr);
    delay(1000);
    return ldrValue;
  }   
  int toplam(int a,int b){ // değer alan değer döndüren
    int sonuc = a+b;
    return sonuc;
  }


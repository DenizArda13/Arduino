const int inputA1 = 2;
const int inputA2 = 3;
const int ENA = 9;




void setup() {
  pinMode(inputA1, OUTPUT);
  pinMode(inputA2, OUTPUT);
  pinMode(ENA, OUTPUT);

  
}

void loop() {

  // A motoru SAĞ
  analogWrite(ENA,180);
  digitalWrite(inputA1,HIGH);
  digitalWrite(inputA2,LOW);
  delay(4000);
  digitalWrite(inputA1,LOW);
  digitalWrite(inputA2,LOW);
  delay(1000); 
  // A motoru SOL
  analogWrite(ENA,180);
  digitalWrite(inputA1,LOW);
  digitalWrite(inputA2,HIGH);
  delay(3000);
  digitalWrite(inputA1,LOW);
  digitalWrite(inputA2,LOW);
  delay(1000);



}

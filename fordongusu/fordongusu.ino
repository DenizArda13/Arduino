

void setup() {
  Serial.begin(9600);
  for(int i=2; i<8 ;i++){
    pinMode(i,OUTPUT);
  }
  pinMode(A0, INPUT);

}

void loop() {
  int hiz = analogRead(A0);

  for(int i=2 ; i<8 ; i++)
{
  int hiz = analogRead(A0);
  digitalWrite(i,1);
  delay(hiz);

}
  for(int i=8 ; i>1 ; i--)
{
  int hiz = analogRead(A0);
  digitalWrite(i,0);
  delay(hiz);

}

}

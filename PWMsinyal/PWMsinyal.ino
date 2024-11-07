int led = 3;
int pot=A0;
void setup() {
  pinMode(led, OUTPUT);
  pinMode(pot,INPUT);
  Serial.begin(9600);



}

void loop() {
  int dimmer = analogRead(pot);
  dimmer = map(dimmer,0,1023,0,255); // map(değişken,kendi aralığı,kendi aralığı,istenilen aralık,istenilen aralık);
  Serial.println(dimmer);
  analogWrite(led,dimmer);
  /*
  analogWrite (led,0);
  delay(400);
  analogWrite(led,50);
  delay(400);
  analogWrite(led,75);
  delay(400);  
  analogWrite (led,100);
  delay(400);
  analogWrite(led,125);
  delay(400);
  analogWrite(led,150);
  delay(400);
  analogWrite(led,175);
  delay(400);
  analogWrite (led,200);
  delay(400);
  analogWrite(led,225);
  delay(400);
  analogWrite(led,255);
  delay(400);
  */
}

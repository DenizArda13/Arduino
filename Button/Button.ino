 void setup() {
  pinMode(2,OUTPUT);
  pinMode(7,INPUT);
  pinMode(8,OUTPUT);


}

void loop() {
  if(digitalRead(7) == 1)
  {
    digitalWrite(2,1);
    digitalWrite(8,0);
  }

  else
  {

    digitalWrite(2,0);
    digitalWrite(8,1);
  }

 
}

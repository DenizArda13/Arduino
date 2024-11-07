int led = 2;
int ldr = A0;

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(ldr,INPUT);
}

void loop() {
  int ldrValue = analogRead(ldr);
  Serial.println(ldrValue);
  do
  {
    digitalWrite(led,1);
    delay(250);
    digitalWrite(led,0);
    delay(250);
    Serial.println("while içindeyiz");
    ldrValue = analogRead(ldr);
    }
    while(ldrValue > 200);

  Serial.println("while -dışındayız");
  digitalWrite(led,1);
   delay(500);
   digitalWrite(led,0);
   delay(500);

   

}

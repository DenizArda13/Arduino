void setup() {
  pinMode(A0, INPUT);
  Serial.begin(9600);


}

void loop() {
  int analogDeger = analogRead (A0);
  Serial.println(analogDeger);
  delay(100);

}

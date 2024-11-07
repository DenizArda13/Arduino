#define xPin A0
#define yPin A1
#define buttonPin 2

int xPosition;
int yPosition;
int buttonStatus;

void setup() {
  Serial.begin(9600);
  pinMode(xPin, INPUT);
  pinMode(yPin,INPUT);
  pinMode(buttonStatus,INPUT_PULLUP);
}

void loop() {
  xPosition = analogRead(xPin);
  yPosition = analogRead(yPin);
  buttonStatus = digitalRead(buttonPin);
 
  Serial.print(" X position :");
  Serial.print(xPosition);
  Serial.print(" \t ");
  Serial.print(" Y position :");
  Serial.print(yPosition);
  Serial.print(" \t ");
  Serial.print("Buton : ");
  Serial.println(buttonStatus);
  delay(200); 
}

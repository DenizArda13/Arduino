#define xPin A0
#define yPin A1
#define buttonPin 8
#define gLed 6
#define rLed 7

const int IN1 = 2;
const int IN2 = 3;
const int IN3 = 4;
const int IN4 = 5;
const int ENA = 9;
const int ENB = 10;

int xPosition;
int yPosition;
int buttonState;
int counter = 0;

void setup() {
  Serial.begin(9600);
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
  pinMode(buttonPin, INPUT_PULLUP);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(gLed, OUTPUT);
  pinMode(rLed, OUTPUT);
}

void loop() {
  xPosition = analogRead(xPin);
  yPosition = analogRead(yPin);
  buttonState = digitalRead(buttonPin);
  Serial.print("\t button state : \t");
  Serial.println(buttonState);
  if (buttonState == 0) {
    counter++;
    delay(250);
    if (counter > 1) {
      counter = 0;
    }
  }
  Serial.print("\t counter : \t");
  Serial.println(counter);
  if (counter == 1) {
    digitalWrite(rLed, LOW);
    digitalWrite(gLed, HIGH);
  } else {
    digitalWrite(rLed, HIGH);
    digitalWrite(gLed, LOW);
  }
  //first motor's codes
  if (counter == 1 && xPosition < 490) {
    Serial.print("Turning upside");
    Serial.print("\t");
    Serial.print("Speed :");
    int turnUp = map(xPosition, 495, 0, 0, 255);
    Serial.println(turnUp);
    analogWrite(ENA, turnUp);
    digitalWrite(IN1, HIGH);  //MOTOR1 UP
    digitalWrite(IN2, LOW);   //MOTOR1 UP
    delay(100);
  } else if (counter == 1 && xPosition > 500) {
    Serial.print("Turning downside");
    Serial.print("\t");
    Serial.print("Speed :");
    int turnDown = map(xPosition, 495, 1023, 0, 255);
    Serial.println(turnDown);
    analogWrite(ENA, turnDown);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
  } else {
    Serial.println("Motor1 stoped");
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
  }
  //second motor's codes
  if (counter == 1 && yPosition < 490) {
    Serial.print("Turning Right");
    Serial.print("\t");
    Serial.print("Speed :");
    int turnRight = map(yPosition, 495, 0, 0, 255);
    Serial.println(turnRight);
    analogWrite(ENB, turnRight);
    digitalWrite(IN3, HIGH);  //MOTOR2 R
    digitalWrite(IN4, LOW);   //MOTOR2 R
    delay(100);
  } else if (counter == 1 && yPosition > 500) {
    Serial.print("Turning Left");
    Serial.print("\t");
    Serial.print("Speed :");
    int turnLeft = map(yPosition, 495, 1023, 0, 255);
    Serial.println(turnLeft);
    analogWrite(ENB, turnLeft);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
  } else {
    Serial.println("Motor2 stoped");
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
  }
}

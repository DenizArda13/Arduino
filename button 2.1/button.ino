#define led 2
#define button1 3
bool buttonStatus;
bool lastButton = 0;
bool ledStatus= 0;

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(button1, INPUT);


}

void loop() {

  buttonStatus = (digitalRead(button1));

  if(buttonStatus == 1 && lastButton == 0){
    ledStatus = !ledStatus;
    lastButton = 1;
    
  }
  else{
    lastButton = buttonStatus;
  }
  digitalWrite(led,ledStatus);

}

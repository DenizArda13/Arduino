int buttonState;            
int lastButtonState = LOW;  

unsigned long lastDebounceTime = 0; 
unsigned long debounceDelay = 50;   

void setup() {
  pinMode(buttonPin, INPUT);
}

void loop() {
  int reading = digitalRead(buttonPin);
  if (reading != lastButtonState) {
    lastDebounceTime = millis();
  }
  if ((millis() - lastDebounceTime) > debounceDelay) {
    if (reading != buttonState) {
      buttonState = reading;
      if (buttonState == HIGH) {
        //condition that you want to execute
      }
    }
  }
  lastButtonState = reading;
}




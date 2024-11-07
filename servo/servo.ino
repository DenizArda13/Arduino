#include <Servo.h>
#define pot A0
Servo servo1;
int position;

void setup() {
  servo1.attach(9);
  

}

void loop() {
  position = analogRead(pot);
  position = map(position,0,1023,0,180);

  servo1.write(position);
  delay(1000);

}

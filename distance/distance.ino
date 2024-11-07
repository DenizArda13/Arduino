#include <HCSR04.h>
HCSR04 hc(9,8);//HCSR04 hc(trig pin, echo pin)
#define redLed 2
#define yellowLed 3
#define greenLed 4

void setup() {
  Serial.begin(9600);
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
}

void loop() 
{
  float distance;
  distance = hc.dist();
  Serial.println(distance);
  //Serial.println(hc.dist());//return curent distance in serial

  if(distance < 30)
  {
    digitalWrite(redLed,HIGH);
    digitalWrite(yellowLed,LOW);
    digitalWrite(greenLed,LOW);
  }
  if(distance < 20)
  {
    digitalWrite(redLed,HIGH);
    digitalWrite(yellowLed,HIGH);
    digitalWrite(greenLed,LOW);
  }  
  if(distance < 10)
  {
    digitalWrite(redLed,HIGH);
    digitalWrite(yellowLed,HIGH);
    digitalWrite(greenLed,HIGH);
  }
  else if (distance > 30){
    digitalWrite(redLed,LOW);
    digitalWrite(yellowLed,LOW);
    digitalWrite(greenLed,LOW);    
  }

}

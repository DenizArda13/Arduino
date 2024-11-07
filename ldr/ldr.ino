#define ldr A0
#define redLed 3

int ldrValue;

byte level ;


void setup() {
  Serial.begin(9600);
  pinMode(redLed,OUTPUT);

}

void loop() {
  ldrValue = analogRead(ldr);
  Serial.print("ldr : ");
  Serial.print(ldrValue);
  Serial.print("\t seviye \t");
  Serial.println(level);
  level = map(ldrValue,0,1023,255,0);
  analogWrite(redLed,level);

  if(level < 25){
    level = 0;
    analogWrite(redLed,level);
  
  }
  if(level > 180){
    level = 255;
    analogWrite(redLed,level);
  }

}

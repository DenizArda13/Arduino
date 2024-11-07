#define led 2
#define button1 3
#define button2 4

bool plus;
bool minus;

int counter;

void setup() {
  Serial.begin(9600);

  pinMode(button1, INPUT);
  pinMode(button2, INPUT);


}
void loop() {
  Serial.println(counter);
  plus = digitalRead(button1);
  minus = digitalRead(button2);
  if (plus == 1){
    counter++;
    delay(10);
    }
    while(plus == 1){
      plus = digitalRead(button1);
      Serial.println(counter); 
  }

  if (minus == 1){
    counter--;
    delay(10);
    }
    while(minus == 1){
      minus = digitalRead(button2);
      Serial.println(counter); 
  }  
}

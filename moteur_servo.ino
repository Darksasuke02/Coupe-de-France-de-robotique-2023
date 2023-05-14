#include <Servo.h>

Servo myservo; 

int pos = 90; 



void setup() {
  myservo.attach(10);
  myservo.write(pos);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
   if (digitalRead(5) == HIGH){
  myservo.write(0);

  }


  // put your main code here, to run repeatedly:

}

/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.
 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo;
Servo myservo1;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 87;    // variable to store the servo position


void setup() {
  myservo.attach(10);
  myservo1.attach(8);
  pinMode(10, OUTPUT );
  pinMode(8, OUTPUT );
  pinMode(5, INPUT);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  if (digitalRead(5) == HIGH){
  myservo.write(pos);
  myservo1.write(pos+2);
  delay(1200);
  myservo.write(90);
  myservo1.write(92);
  delay(5000);
  }

  else{
    myservo.write(90);
    myservo1.write(92); 
  }
}

// Un des deux moteurs possède un décallage de deux WTFF mais vrai

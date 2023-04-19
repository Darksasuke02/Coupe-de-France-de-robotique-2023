#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  //Pins où on va connecter l'écran (RS, E, D4, D5, D6, D7)

int compteur= 0;
const int ProxSensor=7;


void setup() {
  lcd.begin(16, 1);   //on initialise l'écran
  Serial.begin(9600);
  // initialize the digital pin as an output.
  // Pin 13 has an LED connected on most Arduino boards:
  pinMode(13, OUTPUT);
  //Pin 2 is connected to the output of proximity sensor
  pinMode(ProxSensor,INPUT);
  lcd.setCursor(2, 0);  
  lcd.write("billes");
}

void loop() {
    if(digitalRead(ProxSensor)==HIGH)      //Check the sensor output
  {
    digitalWrite(13, HIGH);   // set the LED on

  }
  else
  {
    digitalWrite(13, LOW);// set the LED off
    compteur=compteur + 1;
    Serial.println(compteur);
    delay(600);
    lcd.setCursor(0, 0);
    lcd.print(compteur);
  }
  lcd.setCursor(0,0); 
  lcd.print(compteur);
  delay(10); 

  
}
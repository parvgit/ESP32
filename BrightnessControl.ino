#include <dummy.h>
/*
 * https://circuits4you.com
 * ESP32 LED Blink Example
 * Board ESP23 DEVKIT V1
 * 
 * ON Board LED GPIO 2
 */


#define RED 4
#define GREEN 16
#define BLUE 17

void setup() {
  // Set pin mode
  pinMode(RED,OUTPUT);
  pinMode(GREEN,OUTPUT);
  pinMode(BLUE,OUTPUT);
}

void loop() {
  //  analogWrite(RED,0);
  //  delay(1000);
  //  analogWrite(RED,50);
  //  delay(1000); 
  //  analogWrite(RED,100);
  //  delay(1000);
  //  analogWrite(RED,150);
  //  delay(1000); 
  //  analogWrite(RED,200);
  //  delay(1000); 
  //  analogWrite(RED,255);
  //  delay(1000);
  for(int i=0;i<255;i++)
  {
    analogWrite(RED,i);
    delay(10);
    
  }
  delay(1000);
}
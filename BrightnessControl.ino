#include <dummy.h>


#define RED 4  //Connect LED on this 
#define GREEN 16
#define BLUE 17

void setup() {
  // Set pin mode
  pinMode(RED,OUTPUT);
  pinMode(GREEN,OUTPUT);
  pinMode(BLUE,OUTPUT);
}

void loop() {

  for(int i=0;i<255;i++)
  {
    analogWrite(RED,i);
    delay(10);
    
  }
  delay(1000);
}

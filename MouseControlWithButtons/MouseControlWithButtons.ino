#include "Mouse.h"

// set pin numbers for the five buttons:
const int upButton = 2;
const int downButton = 3;
const int leftButton = 4;
const int rightButton = 5;


void setup() {
  // put your setup code here, to run once:
  pinMode(upButton, INPUT);
  Mouse.begin();
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int upState = digitalRead(upButton);
  if (upState == HIGH) {
    //Move Cursor Up The Screen, so subtract pixels from it's current position
    Mouse.move(0, -5, 0);

  }

  // Implement The rest of your code here 

  delay(20);
}

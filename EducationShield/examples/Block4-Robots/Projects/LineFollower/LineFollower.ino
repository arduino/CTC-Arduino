/*
  LineFollower  
  The Line Follower does exactly what the name suggests, 
  it follows a line. Make it go where ever you want by 
  showing the way with a 3 cm wide, black line. 
  
  (c) 2014 Arduino Verkstad
*/


#include <CapacitiveSensor.h>
#include <SPI.h>
#include <SD.h>
#include <EducationShield.h>

//Servo.h is necessary to be included here
#include <Servo.h>

//IRArray(IR1, IR2, IR3)
IRArray ir = IRArray(A1, A2, A3);
//Wheels(left, right)
Wheels wheels=Wheels(6, 9);

void setup(){
  wheels.begin();

  //Use this line to set the threshold of the IR sensors. The default is 380. If you're using Arduino 101 board, use 550 instead.
  //Use test() to check the values of each sensor in loop()
  ir.setThreshold(530);
  
  delay(1000);
}

void loop(){
  int dir = ir.readLine();
  wheels.follow(dir);
}

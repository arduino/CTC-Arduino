/*  Player
  You can play a sound from an SD card using the Player class.
  The sound file need to be 8bit, uncompressed WAV. Follow this
  tutorial to record and prepare your sound correctly: 
  http://kreatech.verkstad.cc/en/course-literature/prepare-wav-sound/
  
  Or use one of the .wav files in the BoomBox example. 
  
  (c) 2014 Arduino Verkstad
*/

#include <EducationShield.h>

//We need to include the SD library to be able to read from an SD card
#include <SD.h>


Player player=Player();

void setup(){
  //Initialize serial communication
  Serial.begin(9600);
  //Initialize the sound player
  player.begin();
}

void loop(){
  //play(filename)
  //  filename: filename of the sound stored in SD card
  //		must be a .wav file
  //
  //Play the file named "0.wav" on SD card
  player.play("0.wav");
  delay(1000);
}

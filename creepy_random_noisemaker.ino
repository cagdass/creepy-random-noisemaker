/*
 * ***Creepy Random Noisemaker***
 * author: dunkucoder
 * very straightforward code, designed for two buzzers,
 * however sounds better proportional to the number of 
 * buzzers!
 */
 
void setup()
{
}

// change these two according to the slots you connect your buzzers
int firstBuzzer = 8;
int secondBuzzer = 7;

// this is the maximum frequency passed to tone function, open to experiment!
int maxPitch = 1200;

// (in ms) designates how long a note will play and how long the delay is, open to experiment!
int duration = 120;

// to play around with delay duration
int delayCoefficient = 1.00;

// code is in loop, 50's sci-fi sound will go on until you stop it
void loop()
{
  // plays the random note through the firstBuzzer throughout the duration
  tone(firstBuzzer, random(maxPitch), duration);
  // silence for the time being
  delay(duration / delayCoefficient);
  noTone(firstBuzzer);
  
  tone(secondBuzzer, random(maxPitch), duration);
  
  delay(duration * delayCoefficient);
  noTone(secondBuzzer);
}

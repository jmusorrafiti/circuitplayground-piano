#include<Adafruit_CircuitPlayground.h>
//left octave
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
//right octave
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
//Creating the capacitor readings variables
#define cap0 CircuitPlayground.readCap(0)
#define cap1 CircuitPlayground.readCap(1)
#define cap2 CircuitPlayground.readCap(2)
#define cap3 CircuitPlayground.readCap(3)
#define cap6 CircuitPlayground.readCap(6)
#define cap9 CircuitPlayground.readCap(9)
#define cap10 CircuitPlayground.readCap(10)
#define cap12 CircuitPlayground.readCap(12)


void setup() {
  // put your setup code here, to run once:
  CircuitPlayground.begin();
}

void silentNoteRed(int p) {
  CircuitPlayground.setPixelColor(p, 255, 0, 0);
}

void silentNoteYellow(int p) {
  CircuitPlayground.setPixelColor(p, 255, 255, 0);
}

void silentNoteBlue(int p) {
  CircuitPlayground.setPixelColor(p, 0, 0, 255);
}

void playNote(int f) {
  CircuitPlayground.playTone(f, 500, false);
}


void loop() {
  //C3-B3
  //C  (Cap1 on)
  //if(cap0 < 300 && cap1 < 300 && cap2 < 300 && cap3 > 300){
  if (cap1 > 30 && cap0 < 30 && cap3 < 30 && cap2 < 30) {
    //CircuitPlayground.playTone(NOTE_C3,100, false);
    silentNoteRed(0);
    playNote(NOTE_C4);
  }
  //C#  (Cap0 on)
  //else  if(cap0 < 300 && cap1 < 300 && cap2 > 300 && cap3 < 300){
  else if (cap0 > 30 && cap1 < 30 && cap2 < 30 && cap3 < 30) {
    //CircuitPlayground.playTone(NOTE_CS3,100,false);
    silentNoteYellow(0);
    playNote(NOTE_CS4);
  }
  //D  (Cap 0 and 1 On)
  else if (cap0 > 30 && cap1 > 30 && cap2 < 30 && cap3 < 30) {
    silentNoteRed(1);
    playNote(NOTE_D4);
  }
  //D# (cap2 on)
  else if (cap2 > 30 && cap0 < 30 && cap1 < 30 && cap3 < 30) {
    silentNoteYellow(1);
    playNote(NOTE_DS4);
  }
  //E  (cap 2 and 1 on)
  else if (cap2 > 30 && cap1 > 30 && cap0 < 30 && cap3 < 30) {
    silentNoteRed(2);
    playNote(NOTE_E4);
  }
  //F  (cap 0 and 2 on)
  else if (cap0 > 30 && cap2 > 30 && cap1 < 30 && cap3 < 30) {
    silentNoteRed(3);
    playNote(NOTE_F4);
  }
  //F# (cap 2 and 0 and 1 on)
  else if (cap2 > 25 && cap0 > 25 && cap1 > 25 && cap3 < 30) {
    silentNoteYellow(2);
    playNote(NOTE_FS4);
  }
  //G  (cap 3 on)
  else if (cap3 > 30 && cap0 < 30 && cap1 < 30 && cap2 < 30) {
    silentNoteRed(4);
    playNote(NOTE_G4);
  }
  //G#  (cap3 and 1 on)
  else if (cap3 > 30 && cap1 > 30 && cap0 < 30 && cap2 < 30) {
    silentNoteYellow(3);
    playNote(NOTE_GS4);
  }
  //A   (cap 0 and 3 on)
  else if (cap0 > 30 && cap3 > 30 && cap1 < 30 && cap2 < 30) {
    silentNoteBlue(0);
    playNote(NOTE_A4);
  }
  //A#  (cap3 and 0 and 1 on)
  else if (cap3 > 25 && cap0 > 25 && cap1 > 25 && cap2 < 30) {
    silentNoteYellow(4);
    playNote(NOTE_AS4);
  }
  //B  (cap 3 and 2 on)
  else if (cap3 > 30 && cap2 > 30 && cap0 < 30 && cap1 < 30) {
    silentNoteBlue(1);
    playNote(NOTE_B4);
  }

  //C4-B4
  //C  (Cap12 on)
  //if(cap0 < 300 && cap1 < 300 && cap2 < 300 && cap3 > 300){
  if (cap12 > 30 && cap10 < 30 && cap9 < 30 && cap6 < 30) {
    //CircuitPlayground.playTone(NOTE_C3,100, false);
    silentNoteRed(5);
  }
  //C#  (Cap6 on)
  //else  if(cap0 < 300 && cap1 < 300 && cap2 > 300 && cap3 < 300){
  else if (cap6 > 30 && cap10 < 30 && cap9 < 30 && cap12 < 30) {
    //CircuitPlayground.playTone(NOTE_CS3,100,false);
    silentNoteYellow(5);
  }
  //D  (Cap 6 and 12 On)
  else if (cap6 > 30 && cap12 > 30 && cap10 < 30 && cap9 < 30) {
    silentNoteRed(6);
  }
  //D# (cap9 on)
  else if (cap9 > 30 && cap10 < 30 && cap12 < 30 && cap6 < 30) {
    silentNoteYellow(6);
  }
  //E  (cap 9 and 12 on)
  else if (cap9 > 30 && cap12 > 30 && cap6 < 30 && cap10 < 30) {
    silentNoteRed(7);
  }
  //F  (cap 9 and 6 on)
  else if (cap9 > 30 && cap6 > 30 && cap10 < 30 && cap12 < 30) {
    silentNoteRed(8);
  }
  //F# (cap 9 and 6 and 12 on)
  else if (cap9 > 30 && cap6 > 30 && cap12 > 30 && cap10 < 30) {
    silentNoteYellow(7);
  }
  //G  (cap 10 on)
  else if (cap10 > 30 && cap9 < 30 && cap6 < 30 && cap12 < 30) {
    silentNoteRed(9);
  }
  //G#  (cap10 and 12 on)
  else if (cap10 > 30 && cap12 > 30 && cap6 < 30 && cap9 < 30) {
    silentNoteYellow(8);
  }
  //A   (cap 10 and 6 on)
  else if (cap10 > 30 && cap6 > 30 && cap12 < 30 && cap9 < 30) {
    silentNoteBlue(5);
  }
  //A#  (cap10 and 6 and 12 on)
  else if (cap10 > 30 && cap6 > 30 && cap12 > 30 && cap9 < 30) {
    silentNoteYellow(9);
  }
  //B  (cap 10 and 9 on)
  else if (cap10 > 30 && cap9 > 30 && cap12 < 30 && cap6 < 30) {
    silentNoteBlue(6);
  }
  Serial.print("Cap 3:   ");
  Serial.print(cap3);
  Serial.print(" - Cap 2:  ");
  Serial.print(cap2);
  Serial.print(" - Cap 0:   ");
  Serial.print(cap0);
  Serial.print(" - Cap 1:  ");
  Serial.println(cap1);
  CircuitPlayground.clearPixels();
  delay(100);
}

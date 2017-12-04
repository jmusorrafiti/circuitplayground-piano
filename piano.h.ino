#include<Adafruit_CircuitPlayground.h>
//right octave
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 739
#define NOTE_G5  783
#define NOTE_GS5 830
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
//left octave
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
  CircuitPlayground.playTone(f, 100, false);
}


void loop() {
  int thresholdON = 35;
  int thresholdOFF = 30;
  //C4-B4
  //C  (Cap1 on)
  if (cap1 > thresholdON && cap0 < thresholdOFF && cap3 < thresholdOFF && cap2 < thresholdOFF && cap12 < thresholdOFF && cap6 < thresholdOFF && cap9 < thresholdOFF && cap10 < thresholdOFF) {
    //CircuitPlayground.playTone(NOTE_C3,100, false);
    silentNoteRed(0);
    playNote(NOTE_C4);
  }
  //C#  (Cap0 on)
  else if (cap0 > thresholdON && cap1 < thresholdOFF && cap2 < thresholdOFF && cap3 < thresholdOFF && cap12 < thresholdOFF && cap6 < thresholdOFF && cap9 < thresholdOFF && cap10 < thresholdOFF) {
    //CircuitPlayground.playTone(NOTE_CS3,100,false);
    silentNoteYellow(0);
    playNote(NOTE_CS4);
  }
  //D  (Cap 0 and 1 On)
  else if (cap0 > thresholdON && cap1 > thresholdON && cap2 < thresholdOFF && cap3 < thresholdOFF && cap12 < thresholdOFF && cap6 < thresholdOFF && cap9 < thresholdOFF && cap10 < thresholdOFF) {
    silentNoteRed(1);
    playNote(NOTE_D4);
  }
  //D# (cap2 on)
  else if (cap2 > thresholdON && cap0 < thresholdOFF && cap1 < thresholdOFF && cap3 < thresholdOFF && cap12 < thresholdOFF && cap6 < thresholdOFF && cap9 < thresholdOFF && cap10 < thresholdOFF) {
    silentNoteYellow(1);
    playNote(NOTE_DS4);
  }
  //E  (cap 2 and 1 on)
  else if (cap2 > thresholdON && cap1 > thresholdON && cap0 < thresholdOFF && cap3 < thresholdOFF && cap12 < thresholdOFF && cap6 < thresholdOFF && cap9 < thresholdOFF && cap10 < thresholdOFF) {
    silentNoteRed(2);
    playNote(NOTE_E4);
  }
  //F  (cap 0 and 2 on)
  else if (cap0 > thresholdON && cap2 > thresholdON && cap1 < thresholdOFF && cap3 < thresholdOFF && cap12 < thresholdOFF && cap6 < thresholdOFF && cap9 < thresholdOFF && cap10 < thresholdOFF) {
    silentNoteRed(3);
    playNote(NOTE_F4);
  }
  //F# (cap 1 and 12 on)
  else if (cap1 > 25 && cap12 > 25 && cap3 < thresholdOFF && cap2 < thresholdOFF && cap0 < thresholdOFF  && cap6 < thresholdOFF && cap9 < thresholdOFF && cap10 < thresholdOFF) {
    silentNoteYellow(2);
    playNote(NOTE_FS4);
  }
  //G  (cap 3 on)
  else if (cap3 > thresholdON && cap0 < thresholdOFF && cap1 < thresholdOFF && cap2 < thresholdOFF && cap10 < thresholdOFF ) {
    silentNoteRed(4);
    playNote(NOTE_G4);
  }
  //G#  (cap3 and 1 on)
  else if (cap3 > thresholdON && cap1 > thresholdON && cap0 < thresholdOFF && cap2 < thresholdOFF && cap10 < thresholdOFF) {
    silentNoteYellow(3);
    playNote(NOTE_GS4);
  }
  //A   (cap 0 and 3 on)
  else if (cap0 > thresholdON && cap3 > thresholdON && cap1 < thresholdOFF && cap2 < thresholdOFF && cap10 < thresholdOFF) {
    silentNoteBlue(0);
    playNote(NOTE_A4);
  }
  //A#  (cap0 and 6 on)
  else if (cap3 > 25 && cap0 > 25 && cap1 > 25 && cap2 < thresholdOFF && cap10 < thresholdOFF) {
    silentNoteYellow(4);
    playNote(NOTE_AS4);
  }
  //B  (cap 3 and 2 on)
  else if (cap3 > thresholdON && cap2 > thresholdON && cap0 < thresholdOFF && cap1 < thresholdOFF && cap10 < thresholdOFF) {
    silentNoteBlue(1);
    playNote(NOTE_B4);
  }

  //C5-B5
  //C  (Cap12 on)
  if (cap12 > thresholdON && cap10 < thresholdOFF && cap9 < thresholdOFF && cap6 < thresholdOFF) {
    //CircuitPlayground.playTone(NOTE_C3,100, false);
    silentNoteRed(5);
    playNote(NOTE_C5);
  }
  //C#  (Cap6 on)
  else if (cap6 > thresholdON && cap10 < thresholdOFF && cap9 < thresholdOFF && cap12 < thresholdOFF) {
    //CircuitPlayground.playTone(NOTE_CS3,100,false);
    silentNoteYellow(5);
    playNote(NOTE_CS5);
  }
  //D  (Cap 6 and 12 On)
  else if (cap6 > thresholdON && cap12 > thresholdON && cap10 < thresholdOFF && cap9 < thresholdOFF) {
    silentNoteRed(6);
    playNote(NOTE_D5);
  }
  //D# (cap9 on)
  else if (cap9 > thresholdON && cap10 < thresholdOFF && cap12 < thresholdOFF && cap6 < thresholdOFF && cap0 < thresholdOFF && cap1 < thresholdOFF && cap3 < thresholdOFF && cap2 < thresholdOFF) {
    silentNoteYellow(6);
    playNote(NOTE_DS5);
  }
  //E  (cap 9 and 12 on)
  else if (cap9 > thresholdON && cap12 > thresholdON && cap6 < thresholdOFF && cap10 < thresholdOFF && cap0 < thresholdOFF && cap1 < thresholdOFF && cap3 < thresholdOFF && cap2 < thresholdOFF) {
    silentNoteRed(7);
    playNote(NOTE_E5);
  }
  //F  (cap 9 and 6 on)
  else if (cap9 > thresholdON && cap6 > thresholdON && cap10 < thresholdOFF && cap12 < thresholdOFF && cap0 < thresholdOFF && cap1 < thresholdOFF && cap3 < thresholdOFF && cap2 < thresholdOFF) {
    silentNoteRed(8);
    playNote(NOTE_F5);
  }
  //F# (cap 9 and 2 on)
  else if (cap9 > thresholdON && cap2 > thresholdON && cap10 < thresholdOFF && cap6 < thresholdOFF && cap0 < thresholdOFF && cap1 < thresholdOFF && cap3 < thresholdOFF) {
    silentNoteYellow(7);
    playNote(NOTE_FS5);
  }
  //G  (cap 10 on)
  else if (cap10 > thresholdON && cap9 < thresholdOFF && cap6 < thresholdOFF && cap12 < thresholdOFF && cap3 < thresholdOFF) {
    silentNoteRed(9);
    playNote(NOTE_G5);
  }
  //G#  (cap10 and 12 on)
  else if (cap10 > thresholdON && cap12 > thresholdON && cap6 < thresholdOFF && cap9 < thresholdOFF && cap3 < thresholdOFF) {
    silentNoteYellow(8);
    playNote(NOTE_GS5);
  }
  //A   (cap 10 and 6 on)
  else if (cap10 > thresholdON && cap6 > thresholdON && cap12 < thresholdOFF && cap9 < thresholdOFF && cap3 < thresholdOFF) {
    silentNoteBlue(5);
    playNote(NOTE_A5);
  }
  //A#  (cap10 and 3 on)
  else if (cap10 > thresholdON && cap3 > thresholdON && cap12 < thresholdOFF && cap9 < thresholdOFF && cap0 < thresholdOFF && cap1 < thresholdOFF && cap2 < thresholdOFF) {
    silentNoteYellow(9);
    playNote(NOTE_AS5);
  }
  //B  (cap 10 and 9 on)
  else if (cap10 > thresholdON && cap9 > thresholdON && cap12 < thresholdOFF && cap6 < thresholdOFF && cap3 < thresholdOFF) {
    silentNoteBlue(6);
    playNote(NOTE_B5);
  }
  Serial.print("Cap 3:   ");
  Serial.print(cap3);
  Serial.print(" - Cap 2:  ");
  Serial.print(cap2);
  Serial.print(" - Cap 0:   ");
  Serial.print(cap0);
  Serial.print(" - Cap 1:  ");
  Serial.print(cap1);
  
  Serial.print("  Cap 10:   ");
  Serial.print(cap10);
  Serial.print(" - Cap 9:  ");
  Serial.print(cap9);
  Serial.print(" - Cap 6:   ");
  Serial.print(cap6);
  Serial.print(" - Cap12 :  ");
  Serial.println(cap12);
  CircuitPlayground.clearPixels();
  delay(1000);
}




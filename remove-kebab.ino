
#define NOTE_C3 131
#define NOTE_CS3 139
#define NOTE_D3 147
#define NOTE_DS3 156
#define NOTE_E3 165
#define NOTE_F3 175
#define NOTE_FS3 185
#define NOTE_G3 196
#define NOTE_GS3 208
#define NOTE_A3 220
#define NOTE_AS3 233
#define NOTE_B3 247
#define NOTE_C4 262
#define NOTE_CS4 277
#define NOTE_D4 294
#define NOTE_DS4 311
#define NOTE_E4 330
#define NOTE_F4 349
#define NOTE_FS4 370
#define NOTE_G4 392
#define NOTE_GS4 415
#define NOTE_A4 440
#define NOTE_AS4 466
#define NOTE_B4 494

#define WHOLE 1
#define HALF 0.5
#define QUARTER 0.25
#define EIGHTH 0.125
#define SIXTEENTH 0.0625
#define THIRTY_SECOND 0.03125

int tune1[] = {NOTE_B4, NOTE_B4,  NOTE_AS4, NOTE_B4, NOTE_AS4,
               NOTE_B4, NOTE_GS4, NOTE_GS4, NOTE_A4, NOTE_A4,
               NOTE_A4, NOTE_A4,  NOTE_A4,  NOTE_A4};
int tune2[] = {
    NOTE_G4,  NOTE_G4, NOTE_G4,  NOTE_FS4, NOTE_E4,  NOTE_E4,
    NOTE_G4,  NOTE_E4, NOTE_FS4, NOTE_FS4, NOTE_FS4, NOTE_B3,
    NOTE_GS4, NOTE_A4, NOTE_GS4, NOTE_AS4,
};
int tune3[] = {NOTE_G4, NOTE_G4, NOTE_FS4, NOTE_FS4, NOTE_E4,
               NOTE_E4, NOTE_G4, NOTE_E4,  NOTE_FS4};
/*
int tune4[] = {
0, p, 0, p, 0, p, 0, p, 2, p, 2, p, 4, p,
};
*/
int time = 150;

int length;
int length1;
int length2;
int length3;
void setup() {
  pinMode(8, OUTPUT);
  length1 = sizeof(tune1) / sizeof(tune1[0]);
  length2 = sizeof(tune2) / sizeof(tune2[0]);
  length3 = sizeof(tune3) / sizeof(tune3[0]);
}
void loop() {
  for (int x = 0; x < length1; x++) {
    tone(8, tune1[x]);
    delay(time);
    noTone(8);
  }
  for (int x = 0; x < length2; x++) {
    tone(8, tune2[x]);
    delay(time);
    noTone(8);
  }
  for (int x = 0; x < length1; x++) {
    tone(8, tune1[x]);
    delay(time);
    noTone(8);
  }
  for (int x = 0; x < length3; x++) {
    tone(8, tune3[x]);
    delay(time);
    noTone(8);
  }
}
#include <Arduino.h>

#define qn 800*2/3
#define dqn 1200*2/3
#define de 500*2/3
#define en 360*2/3
#define enn 400*2/3
#define sn 200*2/3

/*void setup() {
  pinMode(PB1, OUTPUT);
}

void loop() {
  digitalWrite(PB1, HIGH);
  delay(500);
  digitalWrite(PB1, LOW);
  delay(500);
}*/
const int a = 220;
const int b = 233;
const int c = 261;
const int d = 294;
const int e = 329;
const int f = 349;
const int g = 392;
const int aH = 440;
const int bH = 494;
const int cH = 523;
const int dH = 587;
const int eH = 659;
const int fH = 698;
const int gH = 784;
const int aHH = 880;
 
const int buzzerPin = PA3;
const int ledPin1 = 12;
const int ledPin2 = 13;
 
int counter = 0;

void firstSection();
 
void setup()
{
  //Setup pin modes
  pinMode(buzzerPin, OUTPUT);
}
 
void loop()
{
  delay(700);
  firstSection();
  delay(6000);
}
 
void beep(int note, int duration)
{
  //Play tone on buzzerPin
  tone(buzzerPin, note, duration);
  delay(duration);
  noTone(buzzerPin);
}
 
void firstSection()
{
  beep(cH, qn);
  beep(g, de);
  beep(aH, sn);
  beep(bH, qn);
  beep(e, en);
  delay(10);
  beep(e, en);
  beep(aH, qn);
  beep(g, de);
  beep(f, sn);
  beep(g, qn);
  beep(c, en);
  delay(10);
  beep(c, en);
  beep(d, qn);
  delay(10);
  beep(d, enn);
  beep(e, enn);
  beep(f, qn);
  delay(10);
  beep(f, enn);
  beep(g, enn);
  beep(aH, qn);
  beep(bH, enn);
  beep(cH, enn);
  beep(dH, dqn);

  //beep(, );
}
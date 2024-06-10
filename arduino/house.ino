#include <SPI.h>

#define SPEED_1      6 
#define DIR_1        7

const int ptmrPin = A2;

int tumblrState = 0;
int ptmrState = 0;

int speed = 0;
int direction = 0;
                                
void setup(){
  Serial.begin(9600);

  pinMode(ptmrPin, INPUT);
  pinMode(9, OUTPUT); 
  pinMode(8, OUTPUT);

  for (int i = 4; i < 8; i++) {     
    pinMode(i, OUTPUT);
  }
}
void loop(){

  ptmrState = analogRead(ptmrPin);
  int speed = 0; 
  int light = 0;
  if (ptmrState > 2*1200/3)
  {
    digitalWrite(DIR_1, LOW); 
    speed = 255;
    light = 1;

  }
  if (ptmrState < 1200/3)
  {
    digitalWrite(DIR_1, HIGH); 
    speed = 255;
    light = -1;
  }
  if (ptmrState > 1200/3 && ptmrState < 2*1200/3)
  {
    speed = 0;
    light = 0;
  }
  if (light == 1){
    digitalWrite(9, HIGH); 
    digitalWrite(8, LOW);  // зажигаем светодиод
  }
  if (light == 0){
    digitalWrite(9, LOW); 
    digitalWrite(8, LOW);  // зажигаем светодиод
  }
  if (light == -1){
    digitalWrite(8, HIGH); 
    digitalWrite(9, LOW);  // зажигаем светодиод
  }
  analogWrite(SPEED_1, speed);
}
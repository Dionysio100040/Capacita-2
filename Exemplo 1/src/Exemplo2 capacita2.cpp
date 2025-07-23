#include <Arduino.h>
void AumentaBrilo(int pino);
void DiminuiBrilho (int pino);

void setup(){
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop(){
  AumentaBrilho(13);
  DiminuiBrilho(13);
}

void AumentaBrilho(int pino){
  for(int i = 0; i < 255; i++){
    analogWrite(13, i);
    delay(50);
    Serial.println(i);
  }
}

void DiminuiBrilho(int pino){
  for(int c = 255; c > 0; c--){
    analogWrite(13, c);
    delay(50);
    Serial.println(c);
  }
}
#include <Arduino.h>

void setup(){
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop(){
  for(int i = 0; i < 255; i++){
     analogWrite(13, i);
     delay(50);
     Serial.println(i);
  }
  
  for (int c = 255; c > 0; c--){
      analogWrite(13,c);
      delay(50);
      Serial.println(c);
  }
}

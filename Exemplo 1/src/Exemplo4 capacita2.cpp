#include <Arduino.h>
#define led_branco 2
#define led_vermelho 3
#define led_azul 4

#define intervalo 1000
void setup(){
  Serial.begin(9600);
  pinMode(led_branco,OUTPUT);
  pinMode(led_vermelho,OUTPUT);
  pinMode(led_azul,OUTPUT);

}

void loop(){
  digitalWrite(led_branco, HIGH);
  delay(intervalo); 
  digitalWrite(led_vermelho, HIGH);
  delay(intervalo);
  digitalWrite(led_azul, HIGH);
  delay(intervalo);

  
  digitalWrite(led_branco, LOW);
  delay(intervalo);
  digitalWrite(led_vermelho, LOW);
  delay(intervalo);
  digitalWrite(led_azul, LOW);
  delay(intervalo);
}
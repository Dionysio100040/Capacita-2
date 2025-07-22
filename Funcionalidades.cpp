#include <Arduino.h>
void setup(){
 /* Aqui você irá inicializar as entradas e 
 saidas utilizadas no projeto*/
    Serial.begin(9600); // Inicializa a comunicação serial
    pinMode(9, OUTPUT); //pino 9 como saída (podemos usar define no lugar do número do pino)
    pinMode(10, INPUT); //pino 10 como entarada
    Serial.println("Setup completo!"); // Mensagem de confirmação é imprimida no monitor serial
}

void loop(){
 /* Aqui você irá implementar a lógica do 
 seu projeto */

 digitalWrite(9, HIGH); // Liga o pino 9 em nível alto
 delay(1000); // Espera 1 segundo
 delayMicroseconds(500); // Espera 500 microssegundos
 digitalWrite(9, LOW); // Desliga o pino 9 em nível baixo

 int PinoDig = digitalRead(10); // Lê o estado do pino 10
 Serial.print("Estado do pino 10: ");

 int PinoAnalog = analogRead(A0); // Lê o valor do pino analógico A0
 Serial.print("Valor do pino A0: ");

 analogWrite(PinoAnalog, 255); // Escreve um valor PWM no pino analógico A0
 Serial.println(PinoAnalog); // Imprime o valor lido do pino A0
}
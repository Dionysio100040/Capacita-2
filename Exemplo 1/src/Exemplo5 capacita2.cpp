#include <Arduino.h> 
// --- Definição da Estrutura ---
// Uma estrutura para representar um LED RGB e seus pinos associados.
struct LedRGB {
    int pinoVermelho;
    int pinoVerde;
    int pinoAzul;
};

// --- Funções Auxiliares (Opcional, mas útil para organizar o código) ---

// Função para configurar os pinos do LED RGB como OUTPUT
void configurarLed(LedRGB led) {
    pinMode(led.pinoVermelho, OUTPUT);
    pinMode(led.pinoVerde, OUTPUT);
    pinMode(led.pinoAzul, OUTPUT);
}

// Função para definir a cor do LED RGB
// Os valores de cor (0-255) controlam a intensidade de cada componente (PWM)
void definirCor(LedRGB led, int vermelho, int verde, int azul) {
    analogWrite(led.pinoVermelho, vermelho);
    analogWrite(led.pinoVerde, verde);
    analogWrite(led.pinoAzul, azul);
}

// --- Setup (Executado uma vez ao iniciar o Arduino) ---
void setup() {
    // 1. Criando uma variável do tipo LedRGB
    // e associando-a aos pinos do Arduino onde o LED RGB está conectado.
    // (Ajuste esses números de pino conforme sua ligação física)
    LedRGB meuLedRGB = {9, 10, 11}; // Exemplo: Pino 9 para Vermelho, 10 para Verde, 11 para Azul

    // 2. Configura os pinos do LED como saída.
    configurarLed(meuLedRGB);

    // 3. Define uma cor inicial para o LED.
    definirCor(meuLedRGB, 255, 0, 0); // Acende o LED em vermelho (intensidade máxima)
}

// --- Loop (Executado repetidamente após o setup) ---
void loop() {
    // Nesta seção, você pode adicionar lógica para mudar a cor do LED ao longo do tempo.
    // Por exemplo, piscar, alternar cores, etc.

    // Para este exemplo simples, vamos apenas manter a cor definida no setup.
    // Se você quiser ver uma mudança, pode adicionar algo como:

    
    // Exemplo: pisca entre vermelho e azul a cada segundo
    LedRGB meuLedRGB = {9, 10, 11}; // Reinstancie ou passe a struct se for usá-la aqui

    definirCor(meuLedRGB, 255, 0, 0); // Vermelho
    delay(1000);                      // Espera 1 segundo

    definirCor(meuLedRGB, 0, 0, 255); // Azul
    delay(1000);                      // Espera 1 segundo
    
}
#include <Arduino.h>

template <class TIPOD>
void mostrarAbs(TIPOD numero);

template <class TIPOD>
void mostrarAbs(TIPOD numero) {
    if (numero < 0) {
        numero = -numero;
    }
    Serial.print("El valor absoluto del numero es: ");
    Serial.println(numero);
}

void setup() {
    Serial.begin(115200);
    int num1 = -4;
    float num2 = -60.5;
    double num3 = -123.56;

    mostrarAbs(num1);
    mostrarAbs(num2);
    mostrarAbs(num3);
}

void loop() {
    
}
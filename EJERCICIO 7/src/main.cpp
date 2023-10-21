#include <Arduino.h>

bool estaOrdenado(int arr[], int size) {
    for (int i = 1; i < size; ++i) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

void setup() {
    Serial.begin(115200);
    int vector[] = {3, 5, 2, 1, 4}; // Ejemplo de un vector desordenado

    int size = sizeof(vector) / sizeof(vector[0]);

    if (estaOrdenado(vector, size)) {
        Serial.println("El vector está ordenado crecientemente.");
    } else {
        Serial.println("El vector no está ordenado crecientemente.");
    }
}

void loop() {
}

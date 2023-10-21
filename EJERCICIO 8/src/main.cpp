#include <Arduino.h>

void setup() {
    Serial.begin(115200);
    int num, *dir_num;
    num = 20;
    dir_num = &num;

    Serial.print("Numero: ");
    Serial.println(*dir_num);  // direccion del dato
    Serial.print("Direccion de memoria: ");
    Serial.println((uintptr_t)dir_num, HEX);  // Utiliza uintptr_t para imprimir la dirección como un valor hexadecimal
}

void loop() {
    
}

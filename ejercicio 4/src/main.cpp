#include <Arduino.h>
#include <DataCapture.h>

using namespace DataCapture;

void setup() 
{
    Serial.begin(115200); 
    int filas, columnas;

    Serial.println("Ingrese el número de filas:");
    filas =captureInteger("FILAS -> "); 

    Serial.println("Ingrese el número de columnas:");
    columnas = captureInteger("COLUMNAS -> "); 
    srand(millis());

    
    int matriz[filas][columnas];
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 100; 
    }

    
    int matrizCopia[filas][columnas];
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matrizCopia[i][j] = matriz[i][j];
        }
    }

    //  matriz original
    Serial.println("Matriz Original:");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            Serial.print(matriz[i][j]);
            Serial.print("\t");
        }
        Serial.println();
    }

    // matriz copia
    Serial.println("Matriz Copia:");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            Serial.print(matrizCopia[i][j]);
            Serial.print("\t");
        }
        Serial.println();
    }
}

}

void loop() {
      
}

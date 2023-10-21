#include <Arduino.h>
#include <DataCapture.h>

using namespace DataCapture;

void pedirDatos(int **&puntero_matriz, int &fil, int &col);
void mostrarMatriz(int **puntero_matriz, int fil, int col);

void pedirDatos(int **&puntero_matriz, int &fil, int &col) {
  Serial.begin(115200);
  Serial.println("MATRIZ DINAMICA");
  col = captureInteger("DIGITE EL NUMERO DE COLUMNAS: ");
  fil = captureInteger("DIGITE EL NUMERO DE FILAS: ");

  puntero_matriz = new int *[fil];
  for (int i = 0; i < fil; i++) {
    puntero_matriz[i] = new int[col];
    for (int j = 0; j < col; j++) {
      Serial.print("DIGITE UN NUMERO para [" + String(i) + "][" + String(j) + "]: ");
      puntero_matriz[i][j] = captureInteger("");
    }
  }
}

void mostrarMatriz(int **puntero_matriz, int fil, int col) {
  Serial.println("IMPRIMIENDO MATRIZ: ");
  for (int i = 0; i < fil; i++) {
    for (int j = 0; j < col; j++) {
      Serial.print(puntero_matriz[i][j]);
      Serial.print("\t");
    }
    Serial.println();
  }
}

void setup() {
  int **puntero_matriz;
  int fil, col;

  pedirDatos(puntero_matriz, fil, col);
  mostrarMatriz(puntero_matriz, fil, col);

  for (int i = 0; i < fil; i++) {
    delete[] puntero_matriz[i];
  }
  delete[] puntero_matriz;
}

void loop() {
  // put your main code here, to run repeatedly:
}


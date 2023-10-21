#include <Arduino.h>
#include <DataCapture.h>

using namespace DataCapture;

void convertirAMayusculas(String &cadena) {
  for (int i = 0; i < cadena.length(); i++) {
    cadena[i] = toupper(cadena[i]);
  }
}

void setup() {
  Serial.begin(115200);

  String cadena1=captureString("CADENA #1: ");
  convertirAMayusculas(cadena1); 

  String cadena2=captureString("CADENA #2: ");
  convertirAMayusculas(cadena2); 

  if (cadena1 == cadena2) {
    Serial.println("Las cadenas son iguales.");
  } else {
    Serial.println("Las cadenas no son iguales.");
  }
}

void loop() {
  // Nada que hacer aquí
}

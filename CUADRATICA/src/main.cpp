#include <Arduino.h>
#include <cmath>
#include <DataCapture.h>

using namespace DataCapture;
void setup() {
  Serial.begin(115200);
  Serial.println("Ingrese los valores de la cuadratica");

  float a = captureFloat("Ingrese los valores de a:");
  float b = captureFloat("Ingrese los valores de b:");
  float c = captureFloat("Ingrese los valores de c:");
  

  float discriminante = pow(b, 2) - 4 * a * c;

  if (discriminante > 0) {
    float x1 = (-b + sqrt(discriminante)) / (2 * a);
    float x2 = (-b - sqrt(discriminante)) / (2 * a);

    Serial.print("Las soluciones reales son: x1 = ");
    Serial.print(x1);
    Serial.print(", x2 = ");
    Serial.println(x2);
  } else if (discriminante == 0) {
    float x = -b / (2 * a);
    Serial.println("La solucion real doble es: x = ");
    Serial.println(x);
  }
}

void loop() {
  // Nada que hacer aquí
}



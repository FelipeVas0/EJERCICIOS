#include <Arduino.h>
#include <DataCapture.h>
using namespace DataCapture;

void setup() {
  Serial.begin(115200); 
  int numAlumnos;
  int contadorAprobadosTodos = 0;
  int contadorAprobadosAlMenosUno = 0;
  int contadorAprobadosUltimo = 0;

  //Serial.println("Ingrese el número de alumnos:");
  numAlumnos = captureInteger("Ingrese el número de alumnos:");

  for (int i = 1; i <= numAlumnos; i++) {
    int examen1, examen2, examen3;

    
    Serial.print("Ingrese la calificación del examen 1 para el alumno ");
    Serial.println(i);
    examen1 = captureInteger("CALIFICACION: ");
    Serial.print("Ingrese la calificación del examen 2 para el alumno ");
    Serial.println(i);
    examen2 = captureInteger("CALIFICACION: ");

    Serial.print("Ingrese la calificación del examen 3 para el alumno ");
    Serial.println(i);
    examen3 = captureInteger("CALIFICACION: "); 

    // Verificar si el alumno aprobó todos los exámenes
    if (examen1 >= 3 && examen2 >= 3 && examen3 >= 3) {
      contadorAprobadosTodos++;
    }

    // Verificar si el alumno aprobó al menos un examen
    if (examen1 >= 3 || examen2 >= 3 || examen3 >= 3) {
      contadorAprobadosAlMenosUno++;
    }

    // Verificar si el alumno aprobó el último examen
    if (examen3 >= 3) {
      contadorAprobadosUltimo++;
    }
  }

  // resultados
  Serial.print("Número de alumnos que aprobaron todos los exámenes: ");
  Serial.println(contadorAprobadosTodos);

  Serial.print("Número de alumnos que aprobaron al menos un examen: ");
  Serial.println(contadorAprobadosAlMenosUno);

  Serial.print("Número de alumnos que aprobaron el último examen: ");
  Serial.println(contadorAprobadosUltimo);
}

void loop() {
 
}


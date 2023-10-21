#include <Arduino.h>
#include <DataCapture.h>

using namespace DataCapture;

struct Nodo {
  int dato;
  Nodo *siguiente;
};

bool cola_vacia(Nodo *);

//INSERTAR ELEMENTOS 

void insertarCola(Nodo *&frente, Nodo *&fin, int n) {
  Nodo *nuevo_nodo = new Nodo();
  nuevo_nodo->dato = n;
  nuevo_nodo->siguiente = NULL;
  if (cola_vacia(frente)) {
    frente = nuevo_nodo;
  } else {
    fin->siguiente = nuevo_nodo;
  }
  fin = nuevo_nodo;
  Serial.println("ELEMENTO INSERTADO A COLA CORRECTAMENTE");
}

//funcion para determinar si la cola esta vacia

bool cola_vacia(Nodo *frente) {
  return (frente == NULL) ? true : false;
}

void setup() {
  Serial.begin(115200);
  Nodo *frente = NULL;
  Nodo *fin = NULL;

  int dato = captureInteger("DIGITE UN NUMERO: ");
  insertarCola(frente, fin, dato);

  int dato2 = captureInteger("DIGITE UN NUMERO: ");
  insertarCola(frente, fin, dato);
    
  int dato3 = captureInteger("DIGITE UN NUMERO: ");
  insertarCola(frente, fin, dato);

}

void loop() {
 
}

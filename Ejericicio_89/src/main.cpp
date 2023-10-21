#include <Arduino.h>
#include <DataCapture.h>
#include <stdlib.h> //para utilizar el new y delete

using namespace DataCapture;
using namespace std;

//prototipo de funcion
void pedirDatos ();
void ordenarArreglo(int *, int);
void mostrarArreglo (int *, int);

int nElementos, *elemento;

void setup() {
  pedirDatos();
  ordenarArreglo(elemento, nElementos);
  mostrarArreglo (elemento, nElementos);

  delete [] elemento; //Liberar la memoria utilizda para el arreglo dinamico 
  
}

void pedirDatos (){
  Serial.println("Digite el numero de elementos del arreglo: ");
  int nElementos = captureInteger ("");

  elemento = new int [nElementos];

  for (int i=0; nElementos;i++){
       float numero = captureFloat ("Digite un numero :" + i);
       int elemento = captureInteger ("*elemento " + i);

  }

}

void ordenarArreglo (int *elemento, int nElementos){
     
     int aux;
     for (int i=0; i<nElementos;i++);{
         for(int j=0; j<nElementos-1;j++){
             if(*(elemento+j) > *(elemento+j+1)){
                 aux = *(elemento+j);
                 *(elemento+j) = *(elemento+j+1);
                 *(elemento+j+1) = aux;
             }
         }
     }

}

void mostrarArreglo (int *elemento, int nElementos){
    Serial.println("Mostrando arreglo ordenado: ");
    for (int i=0; i<nElementos;i++){
       int elemento = captureInteger ("elemento"+i);
    }
}

void loop() {
  
}

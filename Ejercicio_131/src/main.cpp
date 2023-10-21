#include <Arduino.h>
#include <String.h>
#include <stdlib.h>
#include <DataCapture.h>

using namespace DataCapture;
using namespace std;

 class perro {
      private:
            string nombre, raza;
      public:
            perro (string,string);
           ~perro(); //Destructor 
            void mostrarDatos();
            void jugar ();
};

//Constructor
perro::perro(string _nombre, string _raza){
     nombre = _nombre;
     raza = _raza;
} 

perro::~perro(){
}

void perro::mostrarDatos(){
  int nombre = captureInteger ("Nombre");
  int raza = captureInteger ("Raza"); 
 

}

void perro::jugar(){

 Serial.println("El perro: ");
 int nombre = captureInteger ("El nombre del perro");
 Serial.println("Esta jugando");

}

void setup() {
  perro perro1("Fido", "Doberman");

  perro1.mostrarDatos();
  perro1.jugar();

  Serial.println();

  
}

void loop() {
  

}



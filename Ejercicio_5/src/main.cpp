#include <Arduino.h>



void setup() {
 Serial.begin(115200); 
 Serial.println();
 int edad;
 char sexo[10];
 float altura;

 Serial.println("Digite su edad: ");
 while (!Serial.available()) 
 int edad = Serial.parseInt();
 Serial.println("valor de x:" + String(edad)); 

 Serial.println("Digite su sexo: ");
 while (!Serial.available()) 
 char sexo  = Serial.parseInt();
 Serial.println("valor de x:" + String(sexo)); 

 Serial.println("Digite su altura: ");
 while (!Serial.available()) 
 float altura = Serial.parseInt();
 Serial.println("valor de x:" + String(altura)); 
 
 Serial.println("Su edad es: " + String(edad));
 Serial.println("Su sexo es: " + String(sexo));
 Serial.println("Su altura: " + String(altura));


}

void loop() {
  
}

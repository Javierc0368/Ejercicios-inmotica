#include <Arduino.h>
Using namespace;

void setup() {
 Serial.begin(115200);
 Serial.println();
 int Numero, Factorial = 1, i;
 
 Serial.println("Digite un numero: ");
 while (!Serial.available()) 
 int Numero = Serial.parseInt();
 Serial.println("valor de x:" + String(Numero)); 

for(int i=1; i<=Numero;i++);{
 Factorial = Factorial * i;

}
Serial.println("El factorial del numero es : ");
 while (!Serial.available()) 
 int factorial = Serial.parseInt();
 Serial.println("valor de x:" + String(Factorial)); 

 
}

void loop() {
  
}


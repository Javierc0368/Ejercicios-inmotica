#include <Arduino.h>
#include <String.h>


void setup() {
  Serial.begin(115200);
  Serial.println();

  char palabra [] = "PROGRAMACIONATS";

  strlwr (palabra);

  Serial.println(palabra);

  
  
}

void loop() {
  

}



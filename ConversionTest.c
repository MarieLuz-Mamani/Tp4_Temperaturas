#include <stdio.h>
#include <assert.h>
#include "Conversion.h"


int main(){
  printf("\n\n");
  assert(farenheit(0)==32); //0°C es igual a 32°F
  assert(celsius(200)==93);//200°F es igual a 93°C
  assert(celsius(43)==6);//43°F es igual a 6°C
  assert(celsius(44)==6);//44°F es igual a 6°C
  assert(celsius(392)==200);//392°F es igual a 200°C
  
  assert(farenheit(93)==200);//93°C es igual a 200°F
  assert(farenheit(6)==43);//43°F es igual a 6°C
  assert(farenheit(6)==44);//44°F es igual a 6°C
  assert(farenheit(200)==392);//200°C es igual a 392°F
  
  printf("--Paso las pruebas --");
   
  
  return 0;
}

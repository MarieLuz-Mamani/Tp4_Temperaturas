#include <stdio.h>
#include "Conversion.h"



void crearTabla(int op,double t_max){
  double grados;
  switch(op){
    case 0:
      printf("CELSIUS\tFARENHEIT\n");
      for(grados=0;grados<=t_max;grados++){
        printf("%.2f \t %.2f \n",grados,farenheit(grados));
      }
    break;
    case 1:
      printf("FARENHEIT\tCELSIUS\n");
      for(grados=0;grados<=t_max;grados++){
        printf("%.2f \t %.2f \n",grados,celsius(grados));
      }
    break;
    default: 
      printf("---- ERROR ----");
  }
  printf("\n\n");
}
int main() {
    const int CELSIUS=0;
    const int FARENHEIT=1;
    const double t_max_celsius=200;
    const double t_max_farenheit=392;
  
   crearTabla(FARENHEIT,t_max_farenheit);
   crearTabla(CELSIUS,t_max_celsius);
  printf("\n\n");
    return 0;
}
  

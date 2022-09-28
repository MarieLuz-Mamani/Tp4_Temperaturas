#include "Conversion.h"

double farenheit(t_celsius){
  return (t_celsius * 9/5) + 32;
}
double celsius(t_farenheit){
  return (t_farenheit -32)*5 / 9 ;
}

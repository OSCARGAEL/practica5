#include <stdio.h>
#include "misfunciones.h"
int main () {
    
  int suma = 0, resta = 0, numero1, numero2, x, y;
  do
    {
      printf ("Escriba dos numeros para las operaciones: ");
      scanf ("%d %d", &x, &y);

      printf ("La suma de %d + %d = %d\n", x, y, sumar_enteros(x,y));
  printf ("La resta de %d - %d = %d\n", x, y, restar_enteros(x,y));
    }
  while (x != 0 || y != 0);
  
  return 0;
}

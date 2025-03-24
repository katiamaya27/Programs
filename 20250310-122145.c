#include <stdio.h>

int main() {
   int x = 1;
   while( x <= 500){
   int cuadrado = x*x;
   int cubo = x*x*x;
   if ( x <= 500){
   printf ("%d,%d, %d\n ",x, cuadrado,cubo);
   }else{
   printf("%d,%d,%d\n, ",x,cuadrado,cubo);
   }
   x ++;
   }
   
  return 0;
}
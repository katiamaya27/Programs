#include <stdio.h>

int main() {
   int descuento = 10;
   int descuentocliente = 20;
   int cliente = 0;
   int z = 0;
   
   z = (cliente) ? descuentocliente : descuento;
   printf ("El descuento es de %d\% \n", z);
   
   printf ("Fin del programa\n");
   return 0;

}
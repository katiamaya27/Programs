#include <stdio.h>

int main() {
   int i;
   int j;

   for (int i = 0; i < 6; i++) {
   printf("para 1: %d\t", i);
      for(j=0; j<3; j++){
        printf ("j%d,", j);
   }
   printf("\n\n");
   }
return 0;
}
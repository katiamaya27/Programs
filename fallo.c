#include <stdio.h>

int main (){
 int HST;
 int PH;
  
 if (HST <= 40)
    printf(HST * 40);
     printf("salario semanal");
  else
      if (HST > 40)
    printf(40 * PH + (PH * 1.5 *(HST-40)));
    
      printf("Fin del programa\n");
      system ("Pause");
      return 0;
  }
  
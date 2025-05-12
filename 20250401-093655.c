#include <stdio.h>
int main (){
int N;
int M;
  
  printf("Tabla de multiplicar \n",N);
  for(N=1; N<=10; N++){
  for(M=1; M<=10; M++)
  printf("%d\t", M*N);
  printf("\n\n");
  }
  printf("\n");
  
  return 0;
}
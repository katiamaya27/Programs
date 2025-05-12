#include <stdio.h>
int main (){
int N;
int i;
int p;
  printf("introduce los pisos:" );
  scanf("%d",&N);
  
  for(i=0; i<=N; i++){
  for(p=0; p<i; p++){
  printf("*");
  }
  printf("\n");
  }
  return 0;
  }
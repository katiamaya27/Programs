#include <stdio.h>

int main() {
    int N;
    int suma = 0;
    int i=1;
    
    printf("Ingrese un número N: ");
    scanf("%d", &N);
    
    for (i = 1; i <= N; i++) {
        suma += i;
    }
    
    printf("La suma de los números desde 1 hasta %d es: %d\n", N, suma);
    
    return 0;
}
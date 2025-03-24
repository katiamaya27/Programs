#include <stdio.h>

float suma_fracciones(float num1, float den1, float num2, float den2, float num3, float den3) {
    float resultado = (num1 / den1) + (num2 / den2) + (num3 / den3);
    return resultado;
}

float expresion_compleja() {
    float parte1 = 5 + (2.0 / 1);
    float parte2 = 1 + (2.0 / (2 - (1.0 / 4)));
    return parte1 / parte2;
}

int main() {
    float resultado1 = suma_fracciones(1, 3, 3, 5, 1, 30);
    float resultado2 = expresion_compleja();

    printf("Resultado de la suma de fracciones: %.4f\n", resultado1);
    printf("Resultado de la expresión compleja: %.2f\n", resultado2);

    return 0;
}
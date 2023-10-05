#include <stdio.h>

void obtenerMultiplesValores(int *a, int *b, int *c);

int main() {
    int valor1, valor2, valor3;

    obtenerMultiplesValores(&valor1, &valor2, &valor3);

    printf("Valor 1: %d\n", valor1);
    printf("Valor 2: %d\n", valor2);
    printf("Valor 3: %d\n", valor3);

    return 0;
}

void obtenerMultiplesValores(int *a, int *b, int *c) {
    // Asignar valores a través de los punteros
    *a = 10;
    *b = 20;
    *c = 30;
}
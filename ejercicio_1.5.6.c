#include <stdio.h>

void imprimir_binario(int num) {
    if (num == 0) {
        printf("0");
        return;
    }

    int binario[32];
    int index = 0;

    while (num > 0) {
        binario[index] = num % 2;
        num /= 2;
        index++;
    }

    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binario[i]);
    }
}

int main() {
    int numero = 42; // Número por el que se quiera representar en binario

    printf("Representación binaria de %d: ", numero);
    imprimir_binario(numero);
    printf("\n");

    return 0;
}
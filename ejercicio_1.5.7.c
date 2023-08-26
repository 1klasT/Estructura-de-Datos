#include <stdio.h>

int entero_invertido(int num) {
    int invertido = 0;

    while (num != 0) {
        int digito = num % 10;
        invertido = invertido * 10 + digito;
        num /= 10;
    }

    return invertido;
}

int main() {
    int numero = 12345; // Cambia este número por el que quieras invertir

    int numero_invertido = entero_invertido(numero);

    printf("Número invertido: %d\n", numero_invertido);

    return 0;
}
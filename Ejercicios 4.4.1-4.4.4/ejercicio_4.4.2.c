#include <stdio.h>

void ingresarElementos(int *arreglo, int n);
void imprimirElementos(int *arreglo, int n);

int main() {
    int n;

    // Solicitar al usuario el tamaño del arreglo
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);

    // Declarar un arreglo de enteros de tamaño n
    int arreglo[n];

    // Ingresar elementos en el arreglo
    printf("Ingrese %d elementos en el arreglo:\n", n);
    ingresarElementos(arreglo, n);

    // Imprimir elementos del arreglo usando punteros
    printf("Elementos del arreglo:\n");
    imprimirElementos(arreglo, n);

    return 0;
}

// Función para ingresar elementos en el arreglo
void ingresarElementos(int *arreglo, int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &arreglo[i]);
    }
}

// Función para imprimir elementos del arreglo usando punteros
void imprimirElementos(int *arreglo, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arreglo + i));
    }
    printf("\n");
}
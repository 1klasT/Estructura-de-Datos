#include <stdio.h>

int buscarElemento(int *arreglo, int n, int elemento);

int main() {
    int n, elemento;

    // Solicitar al usuario el tamaño del arreglo
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);

    // Declarar un arreglo de enteros de tamaño n
    int arreglo[n];

    // Ingresar elementos en el arreglo
    printf("Ingrese %d elementos en el arreglo:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arreglo[i]);
    }

    // Solicitar al usuario el elemento a buscar
    printf("Ingrese el elemento a buscar: ");
    scanf("%d", &elemento);

    // Buscar el elemento en el arreglo usando punteros
    int *ptr = arreglo;
    int posicion = buscarElemento(ptr, n, elemento);

    if (posicion != -1) {
        printf("El elemento %d se encuentra en la posición %d del arreglo.\n", elemento, posicion);
    } else {
        printf("El elemento %d no se encuentra en el arreglo.\n", elemento);
    }

    return 0;
}

// Función para buscar un elemento en el arreglo y devolver su posición (o -1 si no se encuentra)
int buscarElemento(int *arreglo, int n, int elemento) {
    for (int i = 0; i < n; i++) {
        if (*(arreglo + i) == elemento) {
            return i;
        }
    }
    return -1; // El elemento no se encuentra en el arreglo
}
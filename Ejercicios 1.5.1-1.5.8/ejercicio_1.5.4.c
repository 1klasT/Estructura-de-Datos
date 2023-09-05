#include <stdio.h>

void eliminar_elemento(int a[], int *count, int posicion) {
    if (posicion < 0 || posicion >= *count) {
        printf("La posicion no existe.\n");
        return;
    }

    for (int i = posicion; i < *count - 1; i++) {
        a[i] = a[i + 1];
    }

    (*count)--;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int count = sizeof(arr) / sizeof(arr[0]);

    int posicion = 2; // posición del elemento a eliminar
    eliminar_elemento(arr, &count, posicion);

    printf("Arreglo después de eliminar: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
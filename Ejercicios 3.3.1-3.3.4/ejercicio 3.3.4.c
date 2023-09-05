#include <stdio.h>
#include <stdlib.h>

void merge(int arr1[], int size1, int arr2[], int size2, int resultado[]) {
    int i = 0, j = 0, k = 0;

    // Mezclar los dos arreglos ordenados
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            resultado[k] = arr1[i];
            i++;
        } else {
            resultado[k] = arr2[j];
            j++;
        }
        k++;
    }

    // Copiar los elementos restantes de arr1, si esque hay
    while (i < size1) {
        resultado[k] = arr1[i];
        i++;
        k++;
    }

    // Copiar los elementos restantes de arr2, si esque hay
    while (j < size2) {
        resultado[k] = arr2[j];
        j++;
        k++;
    }
}

int main() {
    int arr1[] = {1, 3, 5, 7, 9};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 4, 6, 8, 10};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int resultado[size1 + size2]; // El resultadoado tendrá el tamaño total

    merge(arr1, size1, arr2, size2, resultado);

    printf("Arreglo mezclado: ");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", resultado[i]);
    }

    return 0;
}
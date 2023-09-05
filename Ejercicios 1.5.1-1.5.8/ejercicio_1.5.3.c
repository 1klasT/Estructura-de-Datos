#include <stdio.h>

void imprimir_elementos_impares(int a[], int count) {
    printf("Elementos impares: ");
    for (int i = 0; i < count; i++) {
        if (a[i] % 2 != 0) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int count = sizeof(arr) / sizeof(arr[0]);

    imprimir_elementos_impares(arr, count);

    return 0;
}
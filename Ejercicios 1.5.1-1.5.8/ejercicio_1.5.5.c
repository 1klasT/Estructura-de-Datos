#include <stdio.h>

int segundo_menor(int a[], int count) {
    if (count < 2) {
        printf("El arreglo debe tener minimo dos elementos.\n");
        return -1;
    }

    int menor = a[0];
    int segundo_menor = a[1];

    if (segundo_menor < menor) {
        int temp = menor;
        menor = segundo_menor;
        segundo_menor = temp;
    }

    for (int i = 2; i < count; i++) {
        if (a[i] < menor) {
            segundo_menor = menor;
            menor = a[i];
        } else if (a[i] < segundo_menor && a[i] != menor) {
            segundo_menor = a[i];
        }
    }

    return segundo_menor;
}

int main() {
    int arr[] = {9, 2, 5, 1, 6, 3, 8, 4, 7};
    int count = sizeof(arr) / sizeof(arr[0]);

    int segundo_smllst = segundo_menor(arr, count);

    if (segundo_menor != -1) {
        printf("El segundo menor elemento es: %d\n", segundo_smllst);
    }

    return 0;
}
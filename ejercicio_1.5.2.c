#include <stdio.h>

int contar_duplicados(int a[], int count) {
    int duplicados = 0;

    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (a[i] == a[j]) {
                duplicados++;
                break;
            }
        }
    }

    return duplicados;
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 3, 5, 6, 5};
    int count = sizeof(arr) / sizeof(arr[0]);

    int cdup = contar_duplicados(arr, count);
    printf("Total de elementos duplicados: %d\n", cdup);

    return 0;
}
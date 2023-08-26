#include <stdio.h>

void print_array(int a[], int count) {
    for (int i = 0; i < count; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int count = sizeof(arr) / sizeof(arr[0]);

    printf("Arreglo: ");
    print_array(arr, count);

    return 0;
}
#include <stdio.h>

void bubble_sort(int arr[], int inicio, int fin);
void insertion_sort(int arr[], int inicio, int fin);
void selection_sort(int arr[], int inicio, int fin);

int main() {
    int B[] = {8, 4, 2, 7, 9, 12, -45, 3, -46, 5, 34, 23, 10, 0, 33, -10, -8, 6};
    int n = sizeof(B) / sizeof(B[0]);
    
    // Ordenar el rango [0..7] con Bubble Sort
    bubble_sort(B, 0, 7);
    
    // Ordenar el rango [8..13] con Insertion Sort
    insertion_sort(B, 8, 13);
    
    // Ordenar el rango sobrante [14..n-1] con Selection Sort
    selection_sort(B, 14, n - 1);
    
    printf("Conjunto B ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", B[i]);
    }

    return 0;
}

void bubble_sort(int arr[], int inicio, int fin) {
    int temp;
    for (int i = inicio; i <= fin; i++) {
        for (int j = inicio; j <= fin - i + inicio; j++) {
            if (arr[j] > arr[j + 1]) {
                // Intercambia arr[j] y arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void insertion_sort(int arr[], int inicio, int fin) {
    int temp, j;
    for (int i = inicio + 1; i <= fin; i++) {
        temp = arr[i];
        j = i - 1;
        while (j >= inicio && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

void selection_sort(int arr[], int inicio, int fin) {
    int temp;
    for (int i = inicio; i <= fin; i++) {
        int min_idx = i;
        for (int j = i + 1; j <= fin; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Intercambia arr[i] y arr[min_idx]
        temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

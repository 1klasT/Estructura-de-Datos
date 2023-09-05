#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int arr[], int n);
void selection_sort(int arr[], int n);
void insertion_sort(int arr[], int n);
int busqueda_binaria(int arr[], int n, int target);

int main() {
    int A[] = {-2, 8, 12, 34, 2, 67, 8, 5, -78, 99, -34, 78};
    int n = sizeof(A) / sizeof(A[0]);

    // Copia del arreglo original para cada método de ordenamiento
    int B[n];
    int C[n];
    int D[n];

    // Copia de A a B, C y D
    memcpy(B, A, sizeof(A));
    memcpy(C, A, sizeof(A));
    memcpy(D, A, sizeof(A));

    bubble_sort(B, n);
    selection_sort(C, n);
    insertion_sort(D, n);

    printf("Ordenado con Bubble Sort: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", B[i]);
    }

    printf("\n");

    printf("Ordenado por Selection Sort: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", C[i]);
    }

    printf("\n");

    printf("Ordenado por Insertion Sort: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", D[i]);
    }

    int target = 67;  
    int resultado = busqueda_binaria(B, n, target);

    if (resultado != -1) {
        printf("\nEl elemento %d se encontró en la posición %d.\n", target, resultado);
    } else {
        printf("\nEl elemento %d no se encontró en el arreglo.\n", target);
    }

    return 0;
}

void bubble_sort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Intercambia arr[j] y arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selection_sort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
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

void insertion_sort(int arr[], int n) {
    int temp, j;
    for (int i = 1; i < n; i++) {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

int busqueda_binaria(int arr[], int n, int target) {
    int izquierda = 0;
    int derecha = n - 1;
    
    while (izquierda <= derecha) {
        int mid = izquierda + (derecha - izquierda) / 2;
        
        if (arr[mid] == target) {
            return mid;  // El elemento se encontró en la posición 'mid'
        }
        else if (arr[mid] < target) {
            izquierda = mid + 1;  // Buscar en la mitad derecha
        }
        else {
            derecha = mid - 1;  // Buscar en la mitad izquierda
        }
    }
    
    return -1;  // El elemento no se encontró en el arreglo
}
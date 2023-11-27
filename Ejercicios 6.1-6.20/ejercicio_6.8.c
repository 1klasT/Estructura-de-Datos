#include <stdio.h>
void insertionSort(int arr[], int n);
void selectionSort(int arr[], int n);
void swap(int *xp, int *yp);
void printArray(int arr[], int n);

int main() {
   int arr[] = {8, 4, 9, 13, 5, 2};
   int n = sizeof(arr) / sizeof(arr[0]);
   printf("Conjunto original: \n");
   printArray(arr, n);
   
   insertionSort(arr, n);
   printf("Conjunto ordenado usando ordenamiento por insercion: \n");
   printArray(arr, n);
   
//    selectionSort(arr, n);
//    printf("Conjunto ordenado usando ordenamiento por selección: \n");
//    printArray(arr, n);
   
   return 0;
}



void insertionSort(int arr[], int n) {
   int i, j, key;
   for (i = 1; i < n; i++) {
      key = arr[i];
      j = i - 1;
      while (j >= 0 && arr[j] > key) {
         arr[j + 1] = arr[j];
         j = j - 1;
      }
      arr[j + 1] = key;
   }
}

void selectionSort(int arr[], int n) {
   int i, j, min_idx;
   for (i = 0; i < n-1; i++) {
      min_idx = i;
      for (j = i+1; j < n; j++)
         if (arr[j] < arr[min_idx])
            min_idx = j;
      swap(&arr[min_idx], &arr[i]);
   }
}

void swap(int *xp, int *yp) {
   int temp = *xp;
   *xp = *yp;
   *yp = temp;
}

void printArray(int arr[], int n) {
   int i;
   for (i = 0; i < n; i++)
      printf("%d ", arr[i]);
   printf("\n");
}
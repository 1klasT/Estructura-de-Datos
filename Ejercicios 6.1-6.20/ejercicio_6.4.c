void insertionSort(int arr[], int n) {
   int i, mid, j, k, seleccionado;
   for (i = 1; i < n; ++i) {
      j = 0;
      k = i - 1;
      seleccionado = arr[i];
 
      while (j <= k) {
         mid = (j + k)/2;
         if (seleccionado < arr[mid])
            k = mid - 1;
         else
            j = mid + 1;
      }
 
      for (int m = i-1; m >= j; m--) {
         arr[m+1] = arr[m];
      }
      arr[j] = seleccionado;
   }
}
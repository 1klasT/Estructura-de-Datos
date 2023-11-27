void brickSort(int arr[], int n) {
  int max, j;
  
  for(int i = n-1; i >= 0; i--) {
    max = 0;
    for(j = 1; j <= i; j++) {
      if(arr[j] > arr[max]) 
        max = j;
    }
  
    swap(&arr[max], &arr[i]); 
  }
}
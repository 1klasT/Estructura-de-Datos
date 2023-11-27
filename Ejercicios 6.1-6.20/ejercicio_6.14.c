int subsetSum(int arr[], int n, int k) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum = 0;
    for (int j = i; j < n; j++) {
      sum += arr[j];
      if (sum == k)
        return 1; 
    }
  }  
  return 0;
}
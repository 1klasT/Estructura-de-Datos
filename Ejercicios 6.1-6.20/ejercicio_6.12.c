int check(int A[], int n) {
  for(int i = 0; i < n; i++)
    if(A[i] == i)
      return 1;

  return 0; 
}
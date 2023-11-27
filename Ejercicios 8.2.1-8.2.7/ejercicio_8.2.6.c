void display(List L) {
  Position P = L->Next;
  while (P != NULL) {
    printf("%d ", P->Element);
    P = P->Next;
  }
  printf("\n");
}
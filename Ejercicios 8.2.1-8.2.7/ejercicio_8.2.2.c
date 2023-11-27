void invertList(List L) {
  Position P = L->Next;
  L->Next = NULL;
  
  while (P != NULL) {
    Position next = P->Next;
    P->Next = L->Next;
    L->Next = P;
    P = next;
  }
}
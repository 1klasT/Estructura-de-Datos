void deleteLast(List L) {
  Position P = FindPrevious(L->Next->Element, L);
  Delete(L->Next->Element, L); 
}
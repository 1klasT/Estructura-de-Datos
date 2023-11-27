List merge(List L1, List L2) {
  List L = MakeEmpty(NULL);
  Position P1 = L1->Next;
  Position P2 = L2->Next;
  
  while (P1 != NULL && P2 != NULL) {
    if (P1->Element < P2->Element) {
      Insert(P1->Element, L, Last(L));
      P1 = P1->Next;
    } else {
      Insert(P2->Element, L, Last(L)); 
      P2 = P2->Next;
    }
  }
  
  while (P1 != NULL) {
    Insert(P1->Element, L, Last(L));
    P1 = P1->Next; 
  }
  
  while (P2 != NULL) {
    Insert(P2->Element, L, Last(L));
    P2 = P2->Next;
  }
  
  return L;
}
typedef List Set; 

int member(Set S, ElementType X) {
  return Find(X, S) != NULL;   
}

void insert(Set *S, ElementType X) {
  if (!member(*S, X)) 
    Insert(X, *S, Header(*S));
}

void remove(Set *S, ElementType X) {
  if (member(*S, X))
    Delete(X, *S);  
}

Set union(Set S1, Set S2) {
  Set S = MakeEmpty(NULL);
  Position P = Header(S1);
  
  while(P->Next != NULL) {
    insert(&S, P->Next->Element );
    P = P->Next;
  }
  
  P = Header(S2);
  
  while(P->Next != NULL) {
    insert(&S, P->Next->Element );
    P = P->Next; 
  }
  
  return S;
}
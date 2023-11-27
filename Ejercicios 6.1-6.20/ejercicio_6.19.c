void hanoi(int n, char origen, char aux, char destino) {
  if (n == 1) {
    printf("\n Mover disco 1 de %c a %c", origen, destino);
    return;
  }
  hanoi(n - 1, origen, destino, aux);
  printf("\n Mover disco %d de %c a %c", n, origen, destino);
  hanoi(n - 1, aux, origen, destino);  
}
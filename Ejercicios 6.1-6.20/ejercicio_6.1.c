int esPalindrome(char palabra[], int inicio, int fin){
   if(inicio >= fin) return 1;
   if(palabra[inicio] != palabra[fin]) return 0;
   return esPalindrome(palabra, inicio+1, fin-1);
}
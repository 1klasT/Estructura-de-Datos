int cantidadDigitos(int num) {
   if(num == 0)
      return 1;
      
   return 1 + cantidadDigitos(num/10); 
}
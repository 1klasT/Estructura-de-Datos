// Estructura de datos
struct Cadena {
  int len; 
  int max_len;
  char *data;   
};

// Crear cadena vacía
Cadena CadenaVacia() {
  Cadena c; 
  c.len = 0;
  c.max_len = 1; 
  c.data = malloc(sizeof(char));
  return c;
}

// Insertar al final 
void Poner(Cadena *c, char x) {
  if (c->len == c->max_len) {
    c->max_len *= 2;
    c->data = realloc(c->data, c->max_len); 
  }
  c->data[c->len++] = x; 
}

// Eliminar todas las apariciones 
void BorrarCar(Cadena *c, char x) {
  int i, j;
  for (i = 0; i < c->len; i++) {
    if (c->data[i] == x) {
      for (j = i; j < c->len - 1; j++) {
        c->data[j] = c->data[j+1];
      }
      c->len--; 
      i--; 
    }
  }
}
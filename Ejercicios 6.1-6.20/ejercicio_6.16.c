struct atleta {
  char nombre[40];
  char deporte[30]; 
  int nmedallas;
};

struct datos {
  struct atleta ats[30];
  int n_atletas;  
};

void atleta_top(struct datos d) {
  int max_medallas = 0;
  int max_indice = 0;
  
  for (int i = 0; i < d.n_atletas; i++) {
    if (d.ats[i].nmedallas > max_medallas) {
      max_medallas = d.ats[i].nmedallas;
      max_indice = i;
    }
  }
  
  printf("Atleta: %s\n", d.ats[max_indice].nombre);
  printf("Medallas: %d", d.ats[max_indice].nmedallas); 
}
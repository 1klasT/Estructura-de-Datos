#include <stdio.h>

// Estructura para representar un término en un polinomio
struct Termino {
    int coeficiente;
    int exponente;
};

// Estructura para representar un polinomio
struct Polinomio {
    int grado;
    struct Termino terminos[100]; // Un máximo de 100 términos en el polinomio
};
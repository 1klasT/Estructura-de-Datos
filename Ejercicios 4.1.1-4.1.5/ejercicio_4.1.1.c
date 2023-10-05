#include <stdio.h>

// Estructura para representar una Nota
struct Nota {
    char nombreMateria[50];
    float calificacion;
};

// Estructura para representar un Estudiante
struct Estudiante {
    char nombre[50];
    int numeroEstudiante;
    struct Nota notas[10]; // Un estudiante puede tener hasta 10 notas
};
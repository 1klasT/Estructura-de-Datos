#include <stdio.h>

// Estructura para representar una matrícula
struct Matricula {
    char numero[10]; // Número de matrícula
    char pais[10]; // Pais de emisión
    int anoEmision; // Año de emisión
};

// Estructura para representar un automóvil
struct Automovil {
    char marca[50]; // Marca del automóvil
    char modelo[50]; // Modelo del automóvil
    int anoFabricacion; // Año de fabricación del automóvil
    struct Matricula matricula; // Matrícula del automóvil
};
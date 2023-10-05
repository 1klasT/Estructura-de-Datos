#include <stdio.h>

// Estructura para representar una carta
struct Carta {
    char palo[10]; // Palo de la carta
    char valor[5]; // Valor de la carta
};

// Estructura para representar una baraja de cartas
struct Baraja {
    struct Carta cartas[52]; // Baraja de 52 cartas estándar
    int cantidadCartas; // Número actual de cartas en la baraja
};
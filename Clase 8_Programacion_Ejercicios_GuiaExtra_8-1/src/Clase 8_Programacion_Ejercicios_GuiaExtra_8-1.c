/*
 ============================================================================
Ejercicio 8-1:
Crear la estructura Jugador (nombre, goles metidos, partidos jugados, promedio de goles).
Crear una función que permita cargar los datos de un jugador y otra que los muestre.
Una tercera función calculará el promedio de goles.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "input.h"
#include "jugador.h"
#define TAM 3

int main(void) {
	setbuf(stdout, NULL);

	sJugador player [TAM];


	cargarJugadores (player , TAM);
	mostrarJugadores (player , TAM);


	return 0;
}

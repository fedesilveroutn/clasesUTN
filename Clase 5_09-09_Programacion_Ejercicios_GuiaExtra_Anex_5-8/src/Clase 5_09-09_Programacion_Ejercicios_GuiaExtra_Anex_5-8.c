/*
 ============================================================================
ANEXO 5-8:
Modificar la función que calcula el promedio en la opción 4 del Menú,
para que devuelva el resultado del promedio por parámetro por referencia.
El retorno de la misma debe indicar si funcionó correctamente.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define TAM 3

int main(void) {
	setbuf(stdout, NULL);

	int arrayEnteros[TAM];
	float promedioMain;

	menu (arrayEnteros, TAM , &promedioMain);

	printf("El promedio desde el main con el promedio pasado por refencia es: %.2f", promedioMain);

	return 0;
}

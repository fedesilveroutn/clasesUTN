/*
 ============================================================================
ANEXO 5-7:
Modificar la funci�n que calcula el promedio en la opci�n 4 del Men�,
para que el resultado del promedio lo devuelva por retorno y sea main quien lo imprima por pantalla.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define TAM 3

int main(void) {
	setbuf(stdout, NULL);

	int arrayEnteros[TAM];
	float promedio;

	menu (arrayEnteros, TAM, &promedio);

	printf("\nEl promedio es impreso en el main es: %.2f", promedio);

	return EXIT_SUCCESS;
}

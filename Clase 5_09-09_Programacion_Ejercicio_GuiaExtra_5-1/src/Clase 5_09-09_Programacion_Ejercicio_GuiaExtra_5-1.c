/*
 ============================================================================
Federico Silvero.
Gu�a extra.
Ejercicio 5-1:
Pedir el ingreso de 5 n�meros. Mostrarlos y calcular la sumatoria de los mismos.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "array.h"
#define TAM 5




int main(void) {
	setbuf(stdout, NULL);


	int numeros [5];
	int suma = 0;


	inicializarArray ( numeros, TAM );
	cargarArray (numeros, TAM);
	suma = sumarArray (numeros, TAM);
	mostrarArray (numeros, TAM);

	printf("\nLa suma de los n�meros ingresados es %d", suma);


	return EXIT_SUCCESS;
}


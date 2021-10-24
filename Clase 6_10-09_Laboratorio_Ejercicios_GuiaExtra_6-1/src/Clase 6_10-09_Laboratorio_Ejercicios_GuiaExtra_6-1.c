/*
 ============================================================================
Federico Silvero
Guía extra.
Ejercicio 6-1:

Disponemos de dos variables numéricas (a y b).
Realizar un algoritmo que permita el intercambio de valores de dichas variables.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int a;
	int b;
	int aux;

	a = 5;
	b = 7;

	printf("\nLa variable a vale: %d ---- la variable b vale: %d", a, b);

	aux = a;
	a = b;
	b = aux;

	printf("\nLa variable a vale: %d ---- la variable b vale: %d", a, b);


	return 0;
}


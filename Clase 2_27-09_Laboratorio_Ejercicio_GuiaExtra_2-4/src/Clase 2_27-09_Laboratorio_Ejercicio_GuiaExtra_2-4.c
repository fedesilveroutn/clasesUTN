/*
 ============================================================================
Federico Silvero
Gu�a extra.
Ejercicio 2-4:

Ingresar 5 caracteres e informar cuantas letras p (min�sculas) se ingresaron.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	char caracteres [6];

	printf("Ingrese 5 caracteres: ");
	fflush(stdin);
	scanf("%s", caracteres);


	printf("Usted ingres�: %s", caracteres);

	return 0;
}

/*
 ============================================================================
Federico El�as Silvero.

Gu�a extra.
Ejercicio 1-1: Ingresar dos n�meros enteros, sumarlos y mostrar el resultado.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int num1;
	int num2;
	int resultado;

	printf("Ingrese primer n�mero entero: ");
	fflush(stdin);
	scanf("%d", &num1);

	printf("Ingrese segundo n�mero entero: ");
	fflush(stdin);
	scanf("%d", &num2);

	resultado = num1 + num2;

	printf("\nLa suma de los dos n�meros es: %d", resultado);


	return 0;
}

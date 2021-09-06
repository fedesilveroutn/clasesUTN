/*
 ============================================================================
Federico Elías Silvero.

Guía extra.
Ejercicio 1-1: Ingresar dos números enteros, sumarlos y mostrar el resultado.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int num1;
	int num2;
	int resultado;

	printf("Ingrese primer número entero: ");
	fflush(stdin);
	scanf("%d", &num1);

	printf("Ingrese segundo número entero: ");
	fflush(stdin);
	scanf("%d", &num2);

	resultado = num1 + num2;

	printf("\nLa suma de los dos números es: %d", resultado);


	return 0;
}

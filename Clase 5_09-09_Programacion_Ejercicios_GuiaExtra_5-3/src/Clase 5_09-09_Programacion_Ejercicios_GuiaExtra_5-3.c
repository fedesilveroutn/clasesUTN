/*
 ============================================================================
Ejercicio 5-3:

Realizar un programa que permita el ingreso de 10 números enteros distintos de cero.
La carga deberá ser aleatoria (todos los elementos se inicializan en cero por default).
Determinar el promedio de los positivos, y del menor de los negativos la suma de los antecesores
(Según la recta numérica de los reales, hasta llegar a cero).
Utilizar funciones y vectores.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define TAM 10
#define VALOR 0

int main(void) {
	setbuf(stdout, NULL);

	int arrayEnteros[TAM];
	int menorNeg;
	int sumaNeg;
	int i = 0;
	char seguir;
	float promedioPos;

	inicializarArray(arrayEnteros, VALOR, TAM);

	do
	{
		arrayEnteros[i] = pedirNumeroEntero();
		i++;


		printf("Desea continuar? (s/n): ");
		fflush(stdin);
		scanf("%c", &seguir);

	}while (seguir == 's');




	promedioPos = promedioPositivos(arrayEnteros, TAM);
	menorNeg = menorNegativo (arrayEnteros, TAM);
	sumaNeg = sumaNegativos (menorNeg);


	printf("\nEl promedio de los positivos es: %.2f", promedioPos);
	printf("\nLa suma de los numeros consecutivos al menor de los negativos es: %d", sumaNeg);


	return 0;
}

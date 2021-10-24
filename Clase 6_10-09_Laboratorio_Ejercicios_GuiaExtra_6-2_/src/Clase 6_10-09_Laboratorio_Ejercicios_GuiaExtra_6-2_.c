/*
 ============================================================================
Federico Silvero.
Guia extra.
Ejercicio 6-2:

Realizar un programa que permita el ingreso de 10 números enteros (positivos y negativos).
Necesito generar un listado de los números positivos de manera creciente y negativos de manera decreciente.
(Como máximo 5 for)

Ejemplo:
Listado 1 : 4, 5, 6, 10, 18, 29
Listado 2 : -1,-5,-9,-12

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "array.h"
#define TAM 5
#define CRECIENTE 1
#define DECRECIENTE -1

int main(void) {
	setbuf (stdout, NULL);

	int num [TAM];
	int positivos [TAM];
	int negativos [TAM];


	//inicializo todos los arrays en 0
	inicializarArray (num , positivos , negativos , TAM);

	//pido el ingreso y lo guardo en num
	pedirEntero(num, TAM);

	//busco el signo del array, si es positivo lo guardo en un array y si en negativo en otro
	buscarSigno (num, positivos, negativos, TAM);


	//ordeno el array de manera creciente o decreciente según se indique
	ordenarArray (positivos , CRECIENTE , TAM );
	ordenarArray (negativos , DECRECIENTE , TAM);


	//muestro solamente si el subindice está cargado con algo diferente a 0
	printf("\nListado de positivos ordenados de forma creciente:");
	mostrarArray (positivos , TAM);
	printf("\nListado de negativos ordenados de forma decreciente:");
	mostrarArray (negativos , TAM);


	return 0;
}

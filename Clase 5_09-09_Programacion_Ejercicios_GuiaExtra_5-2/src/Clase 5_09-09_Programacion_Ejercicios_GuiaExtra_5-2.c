/*
 ============================================================================
Federico Silvero.
Guía extra.

Ejercicio 5-2:

Pedir el ingreso de 10 números enteros entre -1000 y 1000. Determinar:

a-Cantidad de positivos y negativos.
b-Sumatoria de los pares.
c-El mayor de los impares.
d-Listado de los números ingresados.
e-Listado de los números pares.
f-Listado de los números de las posiciones impares.
g-Se deberán utilizar funciones y vectores.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define TAM 10
#define VALOR -1
#define MIN -1000
#define MAX 1000

int main(void) {
	setbuf(stdout, NULL);

	int arrayNumeros [TAM];
	int contadorPos = 0;
	int contadorNeg = 0;
	int acumuladorPar = 0;
	int mImpar;


	inicializarArray (arrayNumeros, VALOR, TAM);
	cargarArray (arrayNumeros, TAM, MIN, MAX);
	positividadArray(arrayNumeros, &contadorPos, &contadorNeg, TAM);
	par (arrayNumeros, &acumuladorPar, TAM);
	mayorImpar (arrayNumeros, &mImpar, TAM);


	printf("\nLa cantidad de positivos ingresados es: %d mientras que los negativos son: %d", contadorPos, contadorNeg);
	printf("\nLa sumatoria de los pares es: %d", acumuladorPar);
	printf("\nEl mayor de los impares es: %d", mImpar);
	mostrarArray (arrayNumeros, TAM);
	mostrarPares(arrayNumeros, TAM);
	mostrarPosicionImpar(arrayNumeros, TAM);



	return 0;
}

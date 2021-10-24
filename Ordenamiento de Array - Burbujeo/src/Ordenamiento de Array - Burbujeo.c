/*
 ============================================================================
 Name        : Ordenamiento.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "array.h"
#define TAM 5



int main(void) {
	setbuf(stdout, NULL);

	int arrayNumeros [TAM] = { 5, 2, 1, 9, 7 };
	int contador;

	printf("Array desordenado\n");
	mostrarArray (arrayNumeros, TAM);

	printf("\n\nArray ordenado\n");
	contador = ordenarArray (arrayNumeros, TAM);
	mostrarArray (arrayNumeros, TAM);
	printf("\nContador: %d", contador);



	return EXIT_SUCCESS;
}

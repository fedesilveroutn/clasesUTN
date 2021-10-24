/*
 * funciones.h
 *
 *  Created on: 24 sep. 2021
 *      Author: Fede
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_
#include <stdio.h>
#include <stdlib.h>

int inicializarArray (int* arrayEnteros, int valorInicial, int tam);
int pedirNumeroEntero ();
float promedioPositivos(int* array, int tam);
int menorNegativo (int* array,  int tam);
int sumaNegativos (int menorNegativo);

#endif /* FUNCIONES_H_ */

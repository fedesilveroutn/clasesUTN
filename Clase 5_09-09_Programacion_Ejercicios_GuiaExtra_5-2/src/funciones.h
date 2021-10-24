/*
 * paridad.h
 *
 *  Created on: 10 sep. 2021
 *      Author: Fede
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_

#include <stdio.h>
#include <stdlib.h>

int inicializarArray (int* arrayEnteros, int valorInicial, int tam);
int pedirNumeroEntero (int min, int max);
int cargarArray (int* arrayNumeros, int tam, int min, int max);
int positividadArray (int* arrayNumeros, int* contadorPositivos, int* contadorNegativos, int tam);
int par (int* array, int* acumPar, int tam);
int mayorImpar (int* array, int* mImpar, int tam);
int mostrarArray (int* array, int tam);
int mostrarPares (int* array, int tam);
int mostrarPosicionImpar (int* array, int tam);


#endif /* FUNCIONES_H_ */

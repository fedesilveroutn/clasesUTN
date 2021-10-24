/*
 * array.h
 *
 *  Created on: 3 oct. 2021
 *      Author: Fede
 */

#ifndef ARRAY_H_
#define ARRAY_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int inicializarArray (int* arrayEnteros , int* arrayPos , int* arrayNeg, int tam);
int pedirEntero (int* arrayEntero , int tam);
int buscarSigno (int* arrayEntero, int* arrayPos, int* arrayNeg, int tam);
int ordenarArray (int* array , int direccionOrdenamiento ,int tam );
void mostrarArray (int* array , int tam);


#endif /* ARRAY_H_ */

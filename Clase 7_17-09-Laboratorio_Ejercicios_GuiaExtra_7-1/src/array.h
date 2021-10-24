/*
 * array.h
 *
 *  Created on: 3 oct. 2021
 *      Author: Fede
 */

#ifndef ARRAY_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ARRAY_H_

void orderByPrice (int* id, char description[][51], int* nationality, int* type, float* price, int tam);
void orderByDescription (int* id, char description[][51], int* nationality, int* type, float* price, int tam);

#endif /* ARRAY_H_ */

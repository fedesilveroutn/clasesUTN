/*
 * output.h
 *
 *  Created on: 3 oct. 2021
 *      Author: Fede
 */

#ifndef OUTPUT_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define OUTPUT_H_

void mostrarProducto (int id, char* descripcion, int nacionalidad, int tipo, float precio);
void mostrarProductos (int* id, char descripcion[][51], int* nacionalidad, int* tipo, float* precio, int tam);

#endif /* OUTPUT_H_ */

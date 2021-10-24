/*
 * funciones.h
 *
 *  Created on: 29 sep. 2021
 *      Author: Fede
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_
#include <stdio.h>
#include <stdlib.h>

void menu (int* array, int tam , float* promedio);
int inicializarArray (int* array, int tam);
int cargarArray (int* array, int tam);
int cargaAleatoria(int* array, int tam);
int mostrarArray (int* array, int tam);
int mostrarArrayIndividual (int* array, int i);
int mostrarArrayCompleto (int* array, int i);
float calcularPromedio (int* array, int tam , float* promedio);
#endif /* FUNCIONES_H_ */

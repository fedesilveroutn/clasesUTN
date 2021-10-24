/*
 * input.h
 *
 *  Created on: 3 oct. 2021
 *      Author: Fede
 */

#ifndef INPUT_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define INPUT_H_

int getInt (char* mensaje, char* mensajeError, int min, int max);
float getFloat (float* flotante, char* mensaje, char* mensajeError, float min, float max);
void getString (char* cadena, char* mensaje, char* mensajeError, int max);

//funcion para estructuras
int sGetInt (int* entero, char* mensaje, char* mensajeError, int min, int max);
int sGetFloat(float* flotante, char* mensaje, char* mensajeError, int min, int max);
int sGetChar(char* caracter , char*);
float promedio (int acumulador , int contador);
#endif /* INPUT_H_ */

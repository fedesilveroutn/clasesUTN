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
void getString (char* cadena, char* mensaje, char* mensajeError, int max);

#endif /* INPUT_H_ */

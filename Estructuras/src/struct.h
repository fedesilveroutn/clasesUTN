/*
 * struct.h
 *
 *  Created on: 4 oct. 2021
 *      Author: Fede
 */

#ifndef STRUCT_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STRUCT_H_


//declaro la estructura antes del main o en el .h
typedef struct
{
	//las variables que tenga cada estructura se llaman campos y jamás son arrays (excepto char)
	int edad;
	char nombre[31];

}sPersona;




//FUNCIONES PARA ESTRUCTURAS
void cargarPersona (sPersona* persona);
void mostrarPersona (sPersona* persona);
void cargarPersonas (sPersona* arrayPersonas, int tam);
void mostrarPersonas (sPersona* arrayPersonas, int tam);
void ordenarPersonas (sPersona* arrayPersonas, int tam);









#endif /* STRUCT_H_ */

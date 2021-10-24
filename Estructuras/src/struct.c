/*
 * struct.c
 *
 *  Created on: 4 oct. 2021
 *      Author: Fede
 *
 *NOTA: -accedo a los campos con el operador de acceso punto (.)
 *		-recordar usar (*persona).nombre
 */

#include "struct.h"
#include "input.h"




//funcion para cargar una persona
void cargarPersona (sPersona* persona)
{
	getString ( (*persona).nombre , "\nIngrese su nombre: ", "\nError. Reingrese su nombre: ", 51);
	(*persona).edad = getInt ("\nIngrese su edad: ", "\nError. Reingrese su edad (18-100): ", 18 , 100);
}




//funcion para mostrar una persona
void mostrarPersona (sPersona* persona)
{
	printf("\nNombre: %s --- Edad: %d", (*persona).nombre , (*persona).edad);
}




//funcion para cargar varias personas
void cargarPersonas (sPersona* arrayPersonas, int tam)
{
	int i;

	for ( i = 0; i < tam; i++)
	{
		cargarPersona (&arrayPersonas[i]);
	}
}





//funcion para mostrar varias personas
void mostrarPersonas (sPersona* arrayPersonas, int tam)
{
	int i;

	for ( i = 0; i < tam; i++)
	{
		mostrarPersona (&arrayPersonas[i]);
	}
}






//funcion para ordenar personas por nombre ascendente
void ordenarPersonas (sPersona* arrayPersonas, int tam)
{
	int i;
	int swap;
	int nuevoLimite;

	sPersona auxPersonas;


	if(arrayPersonas != NULL)
	{
		nuevoLimite = tam - 1;

		do{
			swap = 0;

				for (i = 0; i < nuevoLimite; i++)
				{
					if (strcmp( (arrayPersonas[i]).nombre , (arrayPersonas[i + 1]).nombre ) == 1 )
					{
						auxPersonas = arrayPersonas[i];
						arrayPersonas[i] = arrayPersonas[i + 1];
						arrayPersonas[i + 1] = auxPersonas;
						swap = 1;
					}
				}

				nuevoLimite--;

		}while(swap==1);
	}

}









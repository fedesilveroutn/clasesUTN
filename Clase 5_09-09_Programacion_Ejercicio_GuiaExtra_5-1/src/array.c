/*
 * array.c
 *
 *  Created on: 28 sep. 2021
 *      Author: Fede
 */

#include "array.h"




int inicializarArray (int* arrayInt, int tam)
{
	int i;

	for ( i = 0; i < tam; i++)
	{
		arrayInt [i] = -1;
	}



	return 0;
}




int cargarArray (int* arrayInt, int tam)
{
	int i;

	for ( i = 0; i < tam; i++)
	{
		printf ("Ingrese un número entero: ");
		fflush (stdin);
		scanf("%d", &arrayInt[i]);//recordar usar el & cuando es scanf
	}


	return 0;
}



int sumarArray (int* arrayInt, int tam)
{
	int i;
	int suma = 0;

	if ( arrayInt != NULL) //siempre que paso un array por param, chekear que sea != de NULL
	{
		for ( i = 0; i < tam; i++)
		{
			suma += arrayInt[i];
		}
	}


	return suma;
}



void mostrarArray (int* arrayInt, int tam)
{
	int i;

	for ( i = 0; i < tam; i++)
	{
		printf("\nEn la posición %d, se encuentra cargado el número %d", i, arrayInt [i]);
	}
}


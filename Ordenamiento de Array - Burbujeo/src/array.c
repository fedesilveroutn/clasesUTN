/*
 * array.c
 *
 *  Created on: 28 sep. 2021
 *      Author: Fede
 */

#include "array.h"

/**
 * @fn void mostrarArray(int*, int)
 * @brief
 *
 * @param arrayInt
 * @param tam
 */
void mostrarArray (int* arrayInt, int tam)
{
	int i;

	for ( i = 0; i < tam; i++)
	{
		printf ("\nIndice: %d - Valor: %d", i , arrayInt[i]);
	}
}




/**
 * @fn int ordenarArray(int*, int)
 * @brief
 *
 * @param arrayInt
 * @param tam
 * @return
 */
int ordenarArray (int* arrayInt, int tam)
{
	int i;
	int j;
	int aux;
	int contador = 0;

	if(arrayInt != NULL)//comparo que la dir de mem no sea null
	{
		for ( i = 0; i < tam - 1; i++)
		{
			for (j = i + 1; j < tam; j++)
			{
				contador++;
				if (arrayInt[i] < arrayInt [j])
				{
					aux = arrayInt[i];
					arrayInt[i] = arrayInt[j];
					arrayInt[j] = aux;
				}
			}
		}
	}

	return contador;
}





/**
 * @fn int ordenarArrayPerformante(int*, int)
 * @brief
 *
 * @param array
 * @param tam
 * @return
 */
int ordenarArrayPerformante (int* array, int tam)
{
	int i;
	int aux;
	int flagSwap;//me permite seguir o no iterando
	int nuevoLimite;
	int contador = 0;

	if ( array != NULL )
	{

		nuevoLimite = tam - 1;

		do
		{
			flagSwap = 0;

			for ( i = 0; i < nuevoLimite; i++)//compara todos los elementos y deja el mas grande en el extremo
			{
				contador++;

				if (array[i] < array[i+1])
				{
					aux = array[i];
					array[i] = array[i+1];
					array[i+1] = aux;
					flagSwap = 1;//indica que tuve que swapear
				}
			}

			nuevoLimite--;//disminuye el limite para evitar comparar elementos ya ordenados

		}while (flagSwap == 1);
	}

	return contador;
}


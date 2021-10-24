/*
 * array.c
 *
 *  Created on: 3 oct. 2021
 *      Author: Fede
 */
#include "array.h"
#include "output.h"


//funcion para ordenar por precio en forma creciente
void orderByPrice (int* id, char description[][51], int* nationality, int* type, float* price, int tam)
{
	int i;
	int swap;
	int newLimit;
	int auxId;
	int auxNationality;
	int auxType;
	float auxPrice;
	char auxDescription[51];


	newLimit = tam - 1;

	do{
		swap = 0;//RECORDAR SIEMPRE

		for ( i = 0; i < newLimit; i++)
		{
			if (price[i] > price[i + 1])
			{
				//ordeno precio
				auxPrice = price[i];
				price[i] = price[i + 1];
				price[i + 1] = auxPrice;


				//ordeno id
				auxId = id[i];
				id[i] = id[i + 1];
				id[i + 1] = auxId;


				//ordeno nacionalidad
				auxNationality = nationality[i];
				nationality[i] = nationality[i + 1];
				nationality[i + 1] = auxNationality;


				//ordeno tipo
				auxType = type[i];
				type[i] = type[i + 1];
				type[i + 1] = auxType;


				//ordeno descripcion
				strcpy (auxDescription, description[i]);
				strcpy (description[i], description[i + 1]);
				strcpy (description[ i + 1], auxDescription);

				swap = 1;
			}
		}

		newLimit--;
	}while (swap == 1);
}



//funcion para ordenar por descripcion en forma creciente
void orderByDescription (int* id, char description[][51], int* nationality, int* type, float* price, int tam)
{
	int i;
	int swap;
	int newLimit;
	int auxId;
	int auxNationality;
	int auxType;
	float auxPrice;
	char auxDescription[51];


	newLimit = tam - 1;

	do{
		swap = 0;
		for ( i = 0; i < newLimit; i++)
		{
			if (strcmp (description[i], description[i + 1]) == 1 )
			{
				//ordeno precio
				auxPrice = price[i];
				price[i] = price[i + 1];
				price[i + 1] = auxPrice;

				//ordeno id
				auxId = id[i];
				id[i] = id[i + 1];
				id[i + 1] = auxId;

				//ordeno nacionalidad
				auxNationality = nationality[i];
				nationality[i] = nationality[i + 1];
				nationality[i + 1] = auxNationality;

				//ordeno tipo
				auxType = type[i];
				type[i] = type[i + 1];
				type[i + 1] = auxType;

				//ordeno descripcion
				strcpy (auxDescription, description[i]);
				strcpy (description[i], description[i + 1]);
				strcpy (description[ i + 1], auxDescription);

				swap = 1;
			}
		}

		newLimit--;
	}while (swap == 1);
}


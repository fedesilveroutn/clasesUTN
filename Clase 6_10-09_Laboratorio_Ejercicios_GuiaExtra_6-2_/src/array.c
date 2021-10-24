/*
 * array.c
 *
 *  Created on: 3 oct. 2021
 *      Author: Fede
 */


#include "array.h"

//inicializo todos los arrays
int inicializarArray (int* arrayEnteros , int* arrayPos , int* arrayNeg, int tam)
{
	int i;

	for ( i = 0; i < tam; i++)
	{
		arrayEnteros [i] = 0;
		arrayPos [i] = 0;
		arrayNeg[i] = 0;
	}


 return 0;
}



//pido el ingreso de numeros enteros
int pedirEntero (int* arrayEntero , int tam)
{
	int i;

	for ( i = 0 ; i < tam ; i++)
	{
		printf("\nIngrese un número entero: ");
		fflush(stdin);
		scanf("%d", &arrayEntero[i]);
	}

	return 0;
}



//recorro el array para saber si es pos o neg, en caso de serlo, lo guardo en el array correspondiente
int buscarSigno (int* arrayEntero, int* arrayPos, int* arrayNeg, int tam)
{
	int i;

	for ( i = 0; i < tam ; i++)
	{
		if (arrayEntero[i] > 0)
		{
			arrayPos[i] = arrayEntero[i];
		}
		else if (arrayEntero[i] < 0)
		{
			arrayNeg[i] = arrayEntero[i];
		}
	}

	return 0;
}




// ordena el array de manera creciente o decreciente según se indique
int ordenarArray (int* array , int direccionOrdenamiento ,int tam )
{
	// 1 : ordenamiento creciente
	//-1 : ordenamiento decreciente
	int i;
	int aux;
	int swap;
	int nuevoLimite;

	nuevoLimite = tam - 1;//nuevoLimite siempre será uno menos del tam del array para que no desborde

	do{
		swap = 0;//indicará que se hizo o no un ordenamiento

		//recorre el array pasado
		for ( i = 0 ; i < nuevoLimite ; i++)
		{
			//si direccionOrdenamiento == 1 es que quiero ordenar en forma creciente
			if (direccionOrdenamiento == 1)
			{
				if (array[i] > array[i +1])
				{
					aux = array[i];
					array[i] = array[i + 1];
					array[i + 1] = aux;
					swap = 1;//indica que hubo ordenamiento
				}

			}
			//si direccionOrdenamiento == -1 es que quiero ordenar en forma creciente
			else if (direccionOrdenamiento == -1)
			{
				if (array[i] < array[i + 1])
				{
					aux = array[i];
					array[i] = array [i + 1];
					array[i + 1] = aux;
					swap = 1;
				}
			}


		}

		nuevoLimite--;//siempre se baja el limite para que sea performática

	}while (swap == 1);

	return 0;
}


//recorro y muestro el array
void mostrarArray (int* array , int tam)
{
	int i;

	for ( i = 0; i < tam; i++)
	{
		if ( array[i] != 0)
		{
		printf("\n%d" , array[i]);
		}
	}

}












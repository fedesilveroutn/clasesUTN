/*
 * funciones.c
 *
 *  Created on: 24 sep. 2021
 *      Author: Fede
 */

#include "funciones.h"

int inicializarArray (int* arrayEnteros, int valorInicial, int tam)
{
	int i;

	for (i = 0; i < tam; i++)
	{
		arrayEnteros[i] = valorInicial;
	}

	return 0;
}




//va a pedir un numero entero distinto de 0
int pedirNumeroEntero ()
{

	int num;

	printf("\nIngrese un numero entero distinto de cero: ");
	fflush(stdin);
	scanf("%d", &num);

		while(num == 0)
		{
			printf("\nError. Reingrese un numero entero dentro del rango especificado: ");
			fflush(stdin);
			scanf("%d", &num);
		}

	return num;
}



float promedioPositivos(int* array, int tam)
{
	int i;
	int acumulador = 0;
	int contador = 0;
	float promedioPos;

	for(i = 0; i < tam; i++)
	{
		if ( array[i] > 0)//es decir que es positivo
		{
			acumulador += array[i];
			contador++;
		}
	}

	promedioPos = (float) acumulador / contador;

	return promedioPos;
}




int menorNegativo (int* array,  int tam)
{
	int menorNegativo;
	int i;
	int flag = 0;


	for(i = 0; i < tam; i++)
	{
		if (array[i] < 0)//es decir que es negativo
		{

			if ( flag == 0 || array[i] < menorNegativo)
			{
				menorNegativo = array[i];
				flag = 1;
			}
		}
	}

	return menorNegativo;
}




int sumaNegativos (int menorNegativo)
{
	int resultado;
	int i;

	resultado = menorNegativo;//-5
	i = menorNegativo + 1;//-4

	while ( i != 0)
	{
		resultado = resultado + i;
		i++;
	}

	return resultado;
}





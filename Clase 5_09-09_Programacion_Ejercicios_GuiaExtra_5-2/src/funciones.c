/*
 * paridad.c
 *
 *  Created on: 10 sep. 2021
 *      Author: Fede
 */
#include "funciones.h"


//va a inicializar mi array en un valor que no usaré nunca

int inicializarArray (int* arrayEnteros, int valorInicial, int tam)
{
	int i;

	for (i = 0; i < tam; i++)
	{
		arrayEnteros[i] = valorInicial;
	}

	return 0;
}



//va a pedir un numero entero entre un rango especifico
int pedirNumeroEntero (int min, int max)
{

	int num;

	printf("\nIngrese un numero entero entre %d y %d: ", min, max);
	fflush(stdin);
	scanf("%d", &num);

		while(num < min || num > max)
		{
			printf("\nError. Reingrese un numero entero dentro del rango especificado: ");
			fflush(stdin);
			scanf("%d", &num);
		}

	return num;
}



//va a cargar el array con numeros enteros

int cargarArray (int* arrayNumeros, int tam, int min, int max)
{
	int i;

	for (i = 0; i < tam; i++ )
	{
		arrayNumeros [i] = pedirNumeroEntero(min, max);
	}


	return 0;
}



//va a recorrer el array y aumentar los contadores correspondientes de neg y pos

int positividadArray (int* arrayNumeros, int* contadorPositivos, int* contadorNegativos, int tam)
{
	int i;
	int contadorPos = 0;
	int contadorNeg = 0;


	for (i = 0; i < tam; i++)
	{

		if (arrayNumeros[i] > 0)
		{
			contadorPos++;
		}
		else if (arrayNumeros[i] < 0)
		{
			contadorNeg++;
		}
	}


	*contadorPositivos = contadorPos;
	*contadorNegativos = contadorNeg;


	return 0;
}


//va a recorrer el array y si encuentra un par, lo suma

int par (int* array, int* acumPar, int tam)
{
	int i;

	for (i = 0; i < tam; i++)
	{
		if (array[i] %2 == 0)
		{
			*acumPar += array[i];
		}
	}

	return 0;
}


//va a recorrer el array y establecer el mayor de los impares
int mayorImpar (int* array, int* mImpar, int tam)
{
	int mayorImpar;
	int i;
	int flag = 0;

	for(i = 0; i < tam; i++)
	{
		if (!(array[i] %2== 0))
		{

			if ( flag == 0 || array[i] > mayorImpar)
			{
				mayorImpar = array[i];
				flag = 1;
			}
		}
	}

	*mImpar = mayorImpar;
	return 0;
}




//recorre el array y muestra los datos ingresados


int mostrarArray (int* array, int tam)
{
	int i;

	for (i = 0; i < tam; i++)
	{
		printf("\nEl índice %d, está cargado con el valor %d", i, array[i]);
	}

	return 0;
}






//recorre el array y lista los numeros que son pares

int mostrarPares (int* array, int tam)
{
	int i;

	printf("\nLos números pares son: ");

	for (i = 0; i < tam; i++)
	{
		if (array[i] %2 == 0)
		{
			printf("\n%d", array[i]);
		}
	}

	return 0;
}




//recorre el array y lista los numeros que se encuentran en posiciones impares

int mostrarPosicionImpar (int* array, int tam)
{
	int i;

	printf("\nLos números que se encuentran en las posiciones impares son: ");

	for (i = 0; i < tam; i++)
	{
		if (!(i%2 == 0))
		{
			printf("\n%d", array[i]);
		}
	}

	return 0;
}


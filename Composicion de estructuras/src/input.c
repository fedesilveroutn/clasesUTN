/*
 * input.c
 *
 *  Created on: 3 oct. 2021
 *      Author: Fede
 */

#include <string.h>
#include "input.h"

//funcion para pedir entero genérica
int getInt (char* mensaje, char* mensajeError, int min, int max)
{
	int num;

	printf("%s", mensaje);
	fflush(stdin);
	scanf ("%d", &num);
		while(num < min || num > max)
		{
			printf("%s", mensajeError);
			fflush(stdin);
			scanf ("%d", &num);
		}

	return num;
}




//funcion genérica para pedir el ingreso de una cadena de caracteres (string)
void getString (char* cadena, char* mensaje, char* mensajeError, int max)
{
	char cadenaSinValidar[200];
	int tam;

	printf("%s", mensaje);
	fflush(stdin);
	scanf("%[^\n]", cadenaSinValidar);
	tam = strlen (cadenaSinValidar);

		while (tam > max)
		{
			printf("%s", mensaje);
			fflush(stdin);
			scanf("%[^\n]", cadenaSinValidar);
			tam = strlen (cadenaSinValidar);
		}

	strcpy (cadena, cadenaSinValidar);
}




float getFloat (float* flotante, char* mensaje, char* mensajeError, float min, float max)
{
	int retorno = -1;
	float numeroIngresado;

	if (flotante != NULL && mensaje != NULL && mensajeError != NULL && min < max)
	{
		printf("%s", mensaje);
		fflush(stdin);
		scanf("%f", &numeroIngresado);

			while (numeroIngresado < min || numeroIngresado > max)
			{
				printf("%s", mensajeError);
				fflush(stdin);
				scanf("%f", &numeroIngresado);
			}

		*flotante = numeroIngresado;
		retorno = 0;

	}
	return retorno;
}






// FUNCIONES PARA USAR CON ESTRUCTURAS
int sGetInt (int* entero, char* mensaje, char* mensajeError, int min, int max)
{
	int retorno = -1;
	int numeroIngresado;

	if(entero != NULL && mensaje != NULL && mensajeError != NULL && min < max)
	{
		printf("%s", mensaje);
		fflush(stdin);
		scanf("%d", &numeroIngresado);

			while(numeroIngresado < min || numeroIngresado > max)
			{
				printf("%s", mensajeError);
				fflush(stdin);
				scanf("%d", &numeroIngresado);
			}

		*entero = numeroIngresado;
		retorno = 0;
	}

	return retorno;
}






int sGetFloat(float* flotante, char* mensaje, char* mensajeError, int min, int max)
{
	int retorno = -1;
	float numeroIngresado;

	if (flotante != NULL && mensaje && mensajeError != NULL && min < max)
	{
		printf("%s", mensaje);
		fflush(stdin);
		scanf("%f", &numeroIngresado);

			while(numeroIngresado < min || numeroIngresado > max)
			{
				printf("%s", mensajeError);
				fflush(stdin);
				scanf("%f", &numeroIngresado);
			}

		*flotante = numeroIngresado;
		retorno = 0;
	}

	return retorno;
}


int sGetChar(char* caracter , char* mensaje)
{
	int retorno = -1;

	if (caracter != NULL && mensaje != NULL)
	{
		printf("%s", mensaje);
		fflush(stdin);
		*caracter = getchar();
		retorno = 0;
	}
	return retorno;
}






float promedio (int acumulador , int contador)
{
	float resultado;

	resultado = (float)acumulador / contador;

	return resultado;
}







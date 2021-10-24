/*
 * input.c
 *
 *  Created on: 3 oct. 2021
 *      Author: Fede
 */

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
	printf("Nombre en getString: %s", cadena);
}










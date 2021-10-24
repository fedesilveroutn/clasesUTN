/*
 * cadenas.c
 *
 *  Created on: 3 oct. 2021
 *      Author: Fede
 */

#include "cadenas.h"


int getString(char* cadena, int tam)
{
	if (cadena != NULL)
	{
		printf("Ingrese su nombre y apellido: ");
		fflush(stdin);
		scanf("%[^\n]", cadena);
			while(strlen (cadena) > tam)
			{
				printf("Error. Reingrese su nombre y apellido: ");
				fflush(stdin);
				scanf("%[^\n]", cadena);
			}
	}

	return 0;
}


int compareString (char* cadena1, char* cadena2 )
{

	if ( strcmp (cadena1, cadena2) == 0 )
	{
		printf("Ingresaste lo mismo salame");
	}
	else if (strcmp (cadena1, cadena2) == -1)
	{
		printf("\nEl primer nombre es: %s", cadena1);
		printf("\nEl segundo nombre es: %s", cadena2);
	}
	else if (strcmp (cadena1, cadena2)== 1)
	{
		printf("\nEl primer orden es: %s", cadena2);
		printf("\nEl segundo nombre es: %s", cadena1);
	}


	return 0;
}




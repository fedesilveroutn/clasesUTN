/*
 * funciones.c
 *
 *  Created on: 29 sep. 2021
 *      Author: Fede
 */
#include "funciones.h"

void menu (int* opcion)
{
	printf("1-Inicializar\n2-Cargar\n3-Mostrar\n4-Calcular promedio\n5-Ordenar");

	switch (opcion)
	{
	case 1:
			printf("\nUd. ha seleccionado la opci�n 1-Inicializar");
			break;
	case 2:
			printf("\nUd. ha seleccionado la opci�n 2-Cargar");
			break;
	case 3:
			printf("\nUd. ha seleccionado la opci�n 3-Mostrar");
			break;
	case 4:
			printf("\nUd. ha seleccionado la opci�n 4-Calcular promedio");
			break;
	case 5:
			printf("\nUd. ha seleccionado la opci�n 5-Ordenar");
			break;
	}

}

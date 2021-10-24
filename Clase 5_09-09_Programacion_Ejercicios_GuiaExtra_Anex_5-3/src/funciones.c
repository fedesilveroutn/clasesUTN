/*
 * funciones.c
 *
 *  Created on: 29 sep. 2021
 *      Author: Fede
 */
#include "funciones.h"

/**
 * @fn void menu(int*)
 * @brief muestra un menu de opciones
 *
 * @param opcion
 */
void menu (int* array, int tam)
{
	int opcion;

	printf("1-Inicializar\n2-Cargar\n3-Mostrar\n4-Calcular promedio\n5-Ordenar");
	printf("\nElija una opción: ");
	fflush(stdin);
	scanf("%d", &opcion);

	switch (opcion)
	{
	case 1:
			printf("\nUd. ha seleccionado la opción Inicializar");
			inicializarArray(array, tam);
			break;

	case 2:
			printf("\nUd. ha seleccionado la opción Cargar");
			cargarArray(array, tam);
			break;

	case 3:
			printf("\nUd. ha seleccionado la opción Mostrar");
			break;
	case 4:
			printf("\nUd. ha seleccionado la opción Calcular promedio");
			break;
	case 5:
			printf("\nUd. ha seleccionado la opción Ordenar");
			break;
	}

}


/**
 * @fn int inicializarArray(int*, int)
 * @brief inicializa los indices del array en -1
 *
 * @param array
 * @param tam
 * @return
 */
int inicializarArray (int* array, int tam)
{
	int i;

	if (array != NULL)
	{
		for (i = 0; i < tam; i++)
		{
			array[i] = -1;
		}
	}

	return 0;
}


/**
 * @fn int cargarArray(int*, int)
 * @brief carga un array de forma secuencial
 *
 * @param array
 * @param tam
 * @return
 */
int cargarArray (int* array, int tam)
{
	int i;

	if ( array != NULL)
	{
		for (i = 0; i < tam; i++)
		{
			printf("\nIngrese un número: ");
			fflush(stdin);
			scanf("%d", &array[i]);
		}
	}


	return 0;
}








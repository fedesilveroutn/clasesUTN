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
	char seguir;

	do{
		printf("\n1-Inicializar\n2-Cargar\n3-Mostrar\n4-Calcular promedio\n5-Ordenar\n");
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
					cargaAleatoria(array, tam);
					break;

			case 3:
					printf("\nUd. ha seleccionado la opción Mostrar");
					mostrarArray(array, tam);
					break;
			case 4:
					printf("\nUd. ha seleccionado la opción Calcular promedio");
					break;
			case 5:
					printf("\nUd. ha seleccionado la opción Ordenar");
					break;
			}


		printf("\nDesea seguir con el menu? (s/n): ");
		fflush(stdin);
		scanf("%c", &seguir);

	}while(seguir == 's');

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


/**
 *
 * @fn int cargaAleatoria(int*, int)
 * @brief carga un array de forma aleatoria
 *
 * @param array
 * @param tam
 * @return
 */
int cargaAleatoria(int* array, int tam)
{
	int i;
	char seguir;

	i = 0;

	do{
		printf("\nIngresar un numero: ");
		fflush(stdin);
		scanf("%d", &array[i]);
		i++;

			if(i == tam)
			{
				seguir = 'n';
			}
			else
			{
				printf("\nDesea seguir cargando números? (s/n): ");
				fflush(stdin);
				scanf("%c", &seguir);
			}

		}while( i < tam && seguir == 's');

	return 0;
}





/**
 * @fn int mostrarArray(int*, int)
 * @brief recorre el array e imprime sus valores
 *
 * @param array
 * @param tam
 * @return
 */
int mostrarArray (int* array, int tam)
{
	int i;

	for( i = 0; i < tam; i++)
	{
		if ( array[i] != -1)
		{
			printf("\nPosición: %d - Valor: %d", i, array[i]);
		}
	}

	return 0;
}







/*
 * output.c
 *
 *  Created on: 3 oct. 2021
 *      Author: Fede
 */
#include "output.h"

void mostrarProducto (int id, char* descripcion, int nacionalidad, int tipo, float precio)
{
	printf("\nID: %d - "
			"Descripcion: %s - "
			"Nacionalidad: %d - "
			"Tipo: %d - "
			"Precio: %.2f", id, descripcion, nacionalidad, tipo, precio);
}


void mostrarProductos (int* id, char descripcion[][51], int* nacionalidad, int* tipo, float* precio, int tam)
{
	int i;

	for ( i = 0; i < tam; i++)
	{
		mostrarProducto(id[i], descripcion[i], nacionalidad[i], tipo[i], precio[i]);
	}


}

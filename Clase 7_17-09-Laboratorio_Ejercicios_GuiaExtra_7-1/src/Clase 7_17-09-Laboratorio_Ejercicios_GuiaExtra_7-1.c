/*
 ============================================================================
Ejercicio 7-1:

Una empresa importadora que comercializa productos Apple, decide registrar de sus productos los siguientes datos:

-idProducto (numerico)
-descripcion (alfanumérico)
-nacionalidad (numérico, por el momento utilizaremos un define: EEUU - CHINA - OTRO)
-tipo (numérico, por el momento utilizaremos un define: IPHONE -MAC - IPAD - ACCESORIOS)
-precio (numérico decimal)

Realizar un programa que permita interactuar con un menú de usuarios con las siguientes opciones:

-LISTADO Productos.
-LISTADO ordenado por precio.
-LISTADO ordenado por descripción.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "input.h"
#include "output.h"
#include "array.h"
#define TAM 3
#define EEUU 0
#define CHINA 1
#define OTRO 2
#define IPHONE 0
#define MAC 1
#define IPAD 2
#define ACCESORIOS 3

int main(void) {
	setbuf(stdout, NULL);

	int idProducto[TAM] = { 1000 , 1001 , 1002 };
	char descripcion[TAM][51] = { "Iphone 13 Pro Max" , "Macbook pro 2012" , "Ipad 9th gen" };
	int nacionalidad[TAM] = {EEUU , CHINA , EEUU };
	int tipo[TAM] = { IPHONE , MAC , IPAD};
	float precio[TAM] = { 80000, 270000 , 90000 };


	printf("LISTADO DE PRODUCTOS: \n");
	mostrarProductos(idProducto, descripcion, nacionalidad, tipo, precio, 3);


	printf("\n\nLISTADO DE PRODUCTOS ORDENADO POR PRECIO: \n");
	orderByPrice(idProducto, descripcion, nacionalidad, tipo, precio, 3);
	mostrarProductos(idProducto, descripcion, nacionalidad, tipo, precio, 3);

	printf("\n\nLISTADO DE PRODUCTOS ORDENADOS POR DESCRIPCION: \n");
	orderByDescription(idProducto, descripcion, nacionalidad, tipo , precio, 3);
	mostrarProductos(idProducto, descripcion, nacionalidad, tipo, precio, 3);


	return 0;
}

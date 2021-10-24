/*
 ============================================================================
Una empresa importadora que comercializa productos Apple, decide registrar de sus productos los siguientes datos:

-idProducto (numerico)
-descripcion (alfanumérico)
-nacionalidad (numérico, por el momento utilizaremos un define: EEUU - CHINA - OTRO)
-tipo (numérico, por el momento utilizaremos un define: IPHONE -MAC - IPAD - ACCESORIOS)
-precio (numérico decimal)

Realizar un programa que permita interactuar con un menú de usuarios con las siguientes opciones:

-ALTA Producto: Se ingresan los datos de UN solo producto. Siempre y cuando haya espacio disponible en el array.
-BAJA Producto: A partir del ingreso del ID. Si existe el producto desaparece de la lista,
				dejando espacio disponible para un nuevo producto.
-MODIFICACIÓN Producto: A partir del ingreso del ID. Si existe se podrá modificar el precio o el tipo.
-LISTADO Productos.
-LISTADO ordenado por precio.
-LISTADO ordenado por descripción.

Ejercicio 8-2:

Realizar el ejercicio 7-1 utilizando estructuras.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "input.h"
#include "producto.h"

int main(void) {
	setbuf(stdout, NULL);

	sProducto arrayProductos [TAM];
	int opcion;
	int cantidadProductos = 3;//lo hardcodeo si voy a usar la funcion para hardcodear
	int ultimoId = 1002;

	producto_inicializarArray(arrayProductos, TAM);
	producto_hardcodear(arrayProductos, TAM);

	do
	{
				sGetInt(&opcion, "\n--------------------------------------\n"
								 "1. ALTA producto\n"
				                 "2. BAJA producto\n"
				                 "3. MODIFICACION producto\n"
				                 "4. LISTADO productos\n"
				                 "5. LISTADO ordenado x precio\n"
				                 "6. LISTADO ordenado x descripcion\n"
				                 "7. SALIR\n"
				                 "--------------------------------------\n"
				                 "Ingrese una opcion: ",
								 "\n--------------------------------------\n"
								 "1. ALTA producto\n"
				                 "2. BAJA producto\n"
				                 "3. MODIFICACION producto\n"
				                 "4. LISTADO productos\n"
				                 "5. LISTADO ordenado x precio\n"
				                 "6. LISTADO ordenado x descripcion\n"
				                 "7. SALIR"
				                 "\n--------------------------------------\n"
				                 "Opcion inválida, reingrese: ", 1 , 7);



		switch (opcion)
		{
		case 1:
				if(producto_agregarProductos(arrayProductos, TAM , ultimoId) == 0)
				{
					cantidadProductos++;
					ultimoId++;
				}
				system("pause");
				break;



		case 2:
				producto_mostrarTodos(arrayProductos, TAM);
				if(producto_borrarUno(arrayProductos, TAM) == 0)
				{
					cantidadProductos--;
				}

				break;


		case 3:

				producto_mostrarTodos(arrayProductos, TAM);
				producto_subMenuModificarUno(arrayProductos, TAM);
				break;
		case 4:
				if(cantidadProductos > 0)
				{
					producto_mostrarTodos(arrayProductos, TAM);
				}
				else
				{
					printf("\nNo hay productos cargados en el sistema.\n\n");
				}


				system("pause");
				break;

		case 5:
				if(cantidadProductos > 0)
				{
					producto_ordenamientoPrecioAsc (arrayProductos, TAM);
				}
				else
				{
					printf("\nNo hay productos cargados en el sistema.\n\n");
				}

				break;


		case 6:
				if(cantidadProductos > 0)
				{
					producto_ordenamientoDescripcionAsc(arrayProductos, TAM);
				}
				else
				{
					printf("\nNo hay productos cargados en el sistema.\n\n");
				}

				system("pause");
				break;


		case 7:
				printf("Saliendo...\nPrograma terminado.\n");
				break;
		}





	}while (opcion != 7);



	return 0;
}










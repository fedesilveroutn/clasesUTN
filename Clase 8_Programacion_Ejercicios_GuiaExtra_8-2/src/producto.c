/*
 * producto.c
 *
 *  Created on: 5 oct. 2021
 *      Author: Fede
 */
#include "producto.h"
#include "input.h"



//INICIALIZAR ARRAY
void producto_inicializarArray(sProducto productos[] , int tam)
{
	int i;
	for (i = 0; i < tam; i++)
	{
		productos[i].estado = VACIO;
	}
}



//BUSCAR ESPACIO LIBRE
int producto_buscarEspacioLibre(sProducto productos[] , int tam)
{
	int i;
	int index = -1;

	for ( i = 0; i < tam; i++)
	{
		if ( productos[i].estado == 0)
		{
			index = i;//index es la posicion vacia
			break;//para que termine y me traiga la primera posicion vacia
		}
	}

	return index;
}





//MOSTRAR UNO
void producto_mostrarUno (sProducto producto)
{
	printf("%-5d  %-20s  %-20d %-20d %-20.2f\n", producto.idProducto , producto.descripcion , producto.nacionalidad, producto.tipo, producto.precio );
}


//MOSTRAR TODOS
void producto_mostrarTodos (sProducto productos[] , int tam)
{
	int i;

	printf("%-5s  %-20s  %-20s %-20s %-20s\n", "ID", "DESCRIPCION", "NACIONALIDAD", "TIPO", "PRECIO");
	for ( i = 0; i < tam; i++)
	{
		if(productos[i].estado == OCUPADO)
		{
			producto_mostrarUno(productos[i]);
		}
	}
}



int producto_agregarProductos (sProducto productos[] , int tam, int ultimoId)
{
	int retorno = -1;
	int index = producto_buscarEspacioLibre(productos, tam);


	if(index != -1)
	{
		printf("\nDando de alta un producto...\n");

		if(producto_cargarUno(productos, index , ultimoId) == 0)
		{
			printf("\nSe cargó el producto!\n\n");
			retorno = 0;
		}
		else
		{
			printf("\nSe canceló el alta del producto.\n\n");
		}


	}
	else
	{
		printf("\nError. No hay espacio disponible.");
	}

	return retorno;
}




int producto_cargarUno (sProducto productos[] , int i , int ultimoId)
{
	int retorno = -1;

	//sGetInt(&productos[i].idProducto,"Ingrese ID: ", "Error. Reingrese ID válido: ", 1000, 1100);
	productos[i].idProducto = ultimoId + 1;
	getString(productos[i].descripcion, "Ingrese descripción: ", "Error. Reingrese descripción válida", 51);
	sGetInt(&productos[i].nacionalidad,"Ingrese nacionalidad (EEUU=0/CHINA=1/OTRO=2): ", "Error. Reingrese nacionalidad válida (EEUU=0/CHINA=1/OTRO=2): ", 0, 2 );
	sGetInt(&productos[i].tipo,"Ingrese tipo (IPHONE=0/MAC=1/IPAD=2/ACCESORIOS=3): ", "Error. Reingrese tipo válido (IPHONE=0/MAC=1/IPAD=2/ACCESORIOS=3):", 0 , 3);
	sGetFloat(&productos[i].precio, "Ingrese precio (1000-500000): ", "Error. Reingrese precio válido (1000-500000): ", 1000.00 , 500000.00);
	productos[i].estado = OCUPADO;

	printf("\nProducto a agregar:\n\n%-5s  %-20s  %-20s %-20s %-20s\n", "ID", "Descripcion", "Nacionalidad", "Tipo", "Precio");
	producto_mostrarUno(productos[i]);

	if (producto_verificarConfirmacion("\nIngrese 's' para confirmar el alta del producto: " ) == 0)
	{
		productos[i].estado = OCUPADO;
		retorno = 0;
	}

	return retorno;
}







//Funcion para hardcodear
void producto_hardcodear (sProducto productos[], int tam)
{
	int i;
	int ids[] = {1000 , 1001 , 1002};
	char descripciones[][51] = {"Iphone 12", "Iphone 13", "Ipad Pro"};
	int nacionalidades[] = {EEUU , EEUU , CHINA};
	int tipos[] = {IPHONE , IPHONE , IPAD};
	float precios[] = {250000 , 300000 , 275000};

	for (i = 0; i < tam - 2 ; i++)
	{
		productos[i].idProducto = ids[i];
		strcpy (productos[i].descripcion, descripciones[i]);
		productos[i].nacionalidad = nacionalidades[i];
		productos[i].tipo = tipos[i];
		productos[i].precio = precios[i];
		productos[i].estado = OCUPADO;

	}

}



//FUNCIONES PARA ORDENAMIENTO

void producto_ordenamientoDescripcionAsc (sProducto productos[], int tam)
{
	int i;
	int swap;
	int nuevoLimite;
	sProducto auxProducto;

	nuevoLimite = tam - 1;

	do{
		swap = 0;

		for ( i = 0; i < nuevoLimite; i++)
		{
			if (productos[i].estado == OCUPADO && productos[i + 1].estado == OCUPADO && strcmp(productos[i].descripcion , productos[i + 1].descripcion ) == 1)
			{
				auxProducto = productos[i] ;
				productos[i] = productos[i + 1] ;
				productos[i + 1] = auxProducto;
				swap = 1;
			}

			nuevoLimite--;
		}

	}while (swap == 1);

	printf("\nLista de productos ordenada existosamente!\n\n");
}





void producto_ordenamientoPrecioAsc (sProducto productos[], int tam)
{
	int i;
	int swap;
	int nuevoLimite;
	sProducto auxProducto;

	nuevoLimite = tam - 1;

	do{
		swap = 0;

		for ( i = 0; i < nuevoLimite; i++)
		{
			if (productos[i].estado == OCUPADO && productos[i + 1].estado == OCUPADO && productos[i].precio > productos[i + 1].precio)
			{
				auxProducto = productos[i] ;
				productos[i] = productos[i + 1] ;
				productos[i + 1] = auxProducto;
				swap = 1;
			}

			nuevoLimite--;
		}

	}while (swap == 1);
}




int producto_borrarUno(sProducto productos[] , int tam)
{
	int retorno = -1;
	int index;
	int idIngresado;

	sGetInt(&idIngresado, "Ingrese el ID del producto a borrar: ", "Reingrese el ID del producto a borrar (1000-1100): ", 1000 , 1100);
	index = producto_buscarPorId(productos, tam, idIngresado);

	if (index != -1)
	{
		printf("\nProducto a eliminar:\n\n%-5s %-20s %-20s %-20s %-20s\n", "ID", "Descripcion", "Nacionalidad", "Tipo", "Precio");
		producto_mostrarUno(productos[index]);

		if(producto_verificarConfirmacion("\nIngrese 's' para confirmar la baja del producto: ") == 0)
		{
			productos[index].estado = VACIO;
			printf("\nProducto %s dado de baja correctamente!\n\n", productos[index].descripcion);
			retorno = 0;
		}
		else
		{
			printf("\nSe canceló la baja del producto.\n\n");
		}


	}
	else
	{
		printf("\nProducto no encontrado...\n\n");
	}

	return retorno;
}





int producto_buscarPorId(sProducto productos [], int tam, int id)
{
	int i;
	int index = -1;

	for ( i = 0; i < tam ; i++)
	{
		if (productos[i].estado == OCUPADO && productos[i].idProducto == id)
		{
			index = i;
			break;
		}
	}

	return index;
}



int producto_verificarConfirmacion (char* mensaje)
{
	int retorno = -1;
	char respuesta;

	sGetChar(&respuesta , mensaje);
	if(respuesta == 's' || respuesta == 'S')
	{
		retorno = 0;
	}

	return retorno;
}







int producto_subMenuModificarUno(sProducto productos[] , int tam)
{

	int retorno = -1;
	int index;//para saber en que posicion voy a trabajar segun el id ingresado
	int idIngresado;
	int opcion;
	sProducto auxProducto;

	sGetInt(&idIngresado, "Ingrese el ID del producto a modificar: ", "Reingrese el ID del producto a modificar (1000-1100): ", 1000 , 1100);
	index = producto_buscarPorId(productos, tam, idIngresado);

	if (index != -1)
	{

		printf("\nProducto a modificar:\n\n%-5s %-20s %-20s %-20s %-20s\n", "ID", "Descripcion", "Nacionalidad", "Tipo", "Precio");
		producto_mostrarUno(productos[index]);


		do{
			auxProducto = productos[index];
			sGetInt(&opcion,"\n----------------------------------\n"
							"\n1. MODIFICAR precio"
					        "\n2. MODIFICAR tipo"
					        "\n3. ATRAS\n"
					        "\n----------------------------------\n"
					        "Ingrese una opción: ",
							"\n----------------------------------\n"
							"\n1. MODIFICAR precio"
							"\n2. MODIFICAR tipo"
							"\n3. ATRAS"
							"\n----------------------------------\n" , 1 , 3);

			switch (opcion)
			{
				case 1:

					printf("\nProducto a modificar:\n\n%-5s %-20s %-20s %-20s %-20s\n", "ID", "Descripcion", "Nacionalidad", "Tipo", "Precio");
					producto_mostrarUno(productos[index]);
					sGetFloat(&auxProducto.precio, "Ingrese el nuevo precio (entre 1000-300000): " , "Reingrese un precio válido (entre 1000-300000): ", 1000, 300000);

					printf("\nProducto luego de la modificacion:\n\n%-5s %-20s %-20s %-20s %-20s\n", "ID", "Descripcion", "Nacionalidad", "Tipo", "Precio");
					producto_mostrarUno(auxProducto);

					if(producto_verificarConfirmacion ("\nIngrese 's' para confirmar la modificación del producto: ") == 0)
					{
						productos[index].precio = auxProducto.precio;
						printf("\nProducto %s modificado correctamente!\n\n", productos[index].descripcion);
						retorno = 0;
					}
					else
					{
						printf("\nSe canceló la modificación del producto.\n\n");
					}


					system("pause");
					break;


				case 2:

					printf("\nProducto a modificar:\n\n%-5s %-20s %-20s %-20s %-20s\n", "ID", "Descripcion", "Nacionalidad", "Tipo", "Precio");
					producto_mostrarUno(productos[index]);
					sGetInt(&auxProducto.tipo, "Ingrese el nuevo tipo (IPHONE = 0 - MAC = 1 - IPAD = 2 - ACCESORIOS = 3): " , "Reingrese un tipo válido (IPHONE = 0 - MAC = 1 - IPAD = 2 - ACCESORIOS = 3): ", 0, 3);

					printf("\nProducto luego de la modificacion:\n\n%-5s %-20s %-20s %-20s %-20s\n", "ID", "Descripcion", "Nacionalidad", "Tipo", "Precio");
					producto_mostrarUno(auxProducto);

					if(producto_verificarConfirmacion ("\nIngrese 's' para confirmar la modificación del producto: ") == 0)
					{
						productos[index].tipo = auxProducto.tipo;
						printf("\nProducto %s modificado correctamente!\n\n", productos[index].descripcion);
						retorno = 0;
					}
					else
					{
						printf("\nSe canceló la modificación del producto.\n\n");
					}
					system("pause");
					break;


				case 3:

					break;
			}

		}while(opcion != 3);



		if(producto_verificarConfirmacion("\nIngrese 's' para confirmar la baja del producto: ") == 0)
		{
			productos[index].estado = VACIO;
			printf("\nProducto %s dado de baja correctamente!\n\n", productos[index].descripcion);
			retorno = 0;
		}
		else
		{
			printf("\nSe canceló la baja del producto.\n\n");
		}


	}
	else
	{
		printf("\nProducto no encontrado...\n\n");
	}

	return retorno;
}

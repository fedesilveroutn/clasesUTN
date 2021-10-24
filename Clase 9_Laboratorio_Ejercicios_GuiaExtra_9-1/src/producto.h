/*
 * producto.h
 *
 *  Created on: 5 oct. 2021
 *      Author: Fede
 */

#ifndef PRODUCTO_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "input.h"
#define PRODUCTO_H_
//Nacionalidad
#define EEUU 0
#define CHINA 1
#define OTRO 2
//Tipo
#define IPHONE 0
#define MAC 1
#define IPAD 2
#define ACCESORIOS 3
//Tam del array
#define TAM 5
//Estado
#define VACIO 0
#define OCUPADO 1


typedef struct
{
	int idProducto;
	char descripcion[51];
	int nacionalidad;
	int tipo;
	float precio;
	int estado;

} sProducto;



void producto_inicializarArray (sProducto productos[] , int tam);
void producto_mostrarUno (sProducto producto);
void producto_mostrarTodos (sProducto productos[] , int tam);
int producto_cargarUno (sProducto productos[] , int i , int ultimoId);
void producto_hardcodear (sProducto productos[], int tam);
void producto_ordenamientoDescripcionAsc (sProducto productos[], int tam);
void producto_ordenamientoPrecioAsc (sProducto productos[], int tam);
int producto_agregarProductos (sProducto productos[], int tam , int ultimoId);
int producto_buscarEspacioLibre(sProducto productos[] , int tam);
int producto_borrarUno(sProducto productos[] , int tam);
int producto_subMenuModificarUno(sProducto productos[] , int tam);
int producto_buscarPorId(sProducto productos [], int tam, int id);
int producto_verificarConfirmacion (char* mensaje);
float producto_encotrarPrecioMasCaro (sProducto productos[] , int tam);
void producto_mostrarMasCaro(sProducto productos[] , int tam);
int producto_promedioPorTipoProducto (sProducto productos[] , int tam);







#endif /* PRODUCTO_H_ */

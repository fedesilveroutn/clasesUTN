/*
 ============================================================================
Las estructuras anidadas o composición de estructuras es incluir dentro
de una estructura, otra. El orden en que se declaran las estructuras es
importantísimo. Para hardcodear voy a tener que utilizar doble llaves
para hardcodear la estructura anidada { {} }
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "input.h"


typedef struct
{
	int dia;
	int mes;
	int anio;

} eFecha;


typedef struct
{
	int id;
	char descripcion[51];
	eFecha fechaElaboracion;
	eFecha fechaCompra;
	eFecha vencimiento;

} eProducto;



eFecha pedirFecha (char* mensaje);
void mostrarFecha (eFecha fecha);





int main(void) {
	setbuf(stdout, NULL);

	eProducto producto = {1000, "Coca Cola", {10, 1, 2021} };
	producto.fechaElaboracion = pedirFecha("Ingrese la fecha de elaboración: \n");

	printf("%d - %s - ", producto.id, producto.descripcion);
	mostrarFecha(producto.fechaElaboracion);


	return 0;
}





eFecha pedirFecha (char* mensaje)
{
	eFecha fecha;

	printf("%s", mensaje);
	sGetInt(&fecha.dia, "Ingrese día (1-30): ","Error. Reingrese día (1-30): ", 1 , 30 );
	sGetInt(&fecha.mes, "Ingrese mes (1-12): ","Error. Reingrese día (1-12): ", 1 , 12 );
	sGetInt(&fecha.anio, "Ingrese año (2000-2021): ","Error. Reingrese año (2000-2021): ", 2000 , 2021 );

	return fecha;
}




void mostrarFecha (eFecha fecha)
{
	printf("%d/%d/%d", fecha.dia , fecha.mes, fecha.anio);
}





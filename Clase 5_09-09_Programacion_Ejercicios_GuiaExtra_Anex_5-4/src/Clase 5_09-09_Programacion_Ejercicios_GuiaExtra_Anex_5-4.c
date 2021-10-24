/*
 ============================================================================
ANEXO 5-4:

Modificar la funcionalidad de la opción 2 del Menú para que la carga del Array
sea de forma aleatoria.

Agregar la funcionalidad de la opción 3 del Menú para mostrar por pantalla
los elementos del Array, o sea las edades.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(void) {
	setbuf(stdout, NULL);
	int edades[5];

	menu(edades, 5);

	return 0;
}

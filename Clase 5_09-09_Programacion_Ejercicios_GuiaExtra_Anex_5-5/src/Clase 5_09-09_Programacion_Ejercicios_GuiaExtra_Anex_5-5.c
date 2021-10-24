/*
 ============================================================================
ANEXO 5-5:

Modificar la funcionalidad de la opción 3  del Menú de forma que existan 2 funciones,
una que muestre solamente un elemento o edad y otra que muestre todos los elementos o edades.
La función que muestra todos los elementos o edades debe llamar a la que muestra solo uno.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(void) {
	setbuf(stdout, NULL);

	int edades [10];
	int i;

	menu (edades, 10);




	return 0;
}

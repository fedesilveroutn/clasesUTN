/*
 ============================================================================
ANEXO 5-2:

Realizar un programa que desde el main llame o invoque a la función
que muestre el Menú del punto anterior.
Utilizar funciones y bibliotecas.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(void) {
	setbuf(stdout, NULL);

	int opcionElegida;
	menu(&opcionElegida);

	return 0;
}

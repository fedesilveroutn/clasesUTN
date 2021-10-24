/*
 ============================================================================
ANEXO 5-6:
Realizar una función que calcule el promedio de los números ingresados en el Array
y agregarlo a la opción de Menú 4. La misma deberá imprimir el resultado por pantalla.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define TAM 3
int main(void) {
	setbuf(stdout, NULL);

	int arrayInt[TAM];

	menu (arrayInt , TAM);


	return 0;
}

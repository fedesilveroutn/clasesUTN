/*
 ============================================================================
ANEXO 5-6:
Realizar una funci�n que calcule el promedio de los n�meros ingresados en el Array
y agregarlo a la opci�n de Men� 4. La misma deber� imprimir el resultado por pantalla.

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

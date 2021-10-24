/*
 ============================================================================
Federico Silvero.


1- Se pide el ingreso de dos personas, cada una con su respectivo nombre y apellido
	(nombreCompletoUno, nombreCompletoDos)

2- Mostrar el largo de cada nombre ingresado

3- Se pide dividir el hilo de ejecucion:

	a) Si los nombres son identicos, mostrar "Ingresaste lo mismo, salame"
	b) Si el primer nombre (usando en el orden ingresado en el punto 1)
	esta primero alfabeticamente, mostrar ambos nombres en orden (simple, dos printf)
	c) Si el segundo nombre (usando en el orden ingresado en el punto  1) esta primero
	alfabeticamente, mostrarlo en orden (simple, dos printf)

*NOTA: Hacer una GUI intuitiva para el usuario
*NOTA 2: Usar las funciones vistas en clase (no olviden la biblioteca)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cadenas.h"

int main(void) {
	setbuf(stdout, NULL);

	char completeNameOne[41];
	char completeNameTwo[41];

	int lenth1;
	int lenth2;


	getString(completeNameOne, 41);
	getString(completeNameTwo, 41);

	lenth1 = strlen(completeNameOne);
	lenth2 = strlen(completeNameTwo);

	printf("\nLa longitud del primer nombre ingresado es: %d", lenth1 );
	printf("\nLa longitud del primer nombre ingresado es: %d\n", lenth2 );

	compareString (completeNameOne, completeNameTwo);


	return 0;
}

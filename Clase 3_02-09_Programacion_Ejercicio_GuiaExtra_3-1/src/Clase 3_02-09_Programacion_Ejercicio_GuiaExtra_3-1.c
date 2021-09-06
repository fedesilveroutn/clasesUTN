/*
 ============================================================================
Federico Silvero.

Guía extra.
Ejercicio 3-1:

Crear una función que muestre por pantalla el número flotante  que recibe como parámetro

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//prototipo de la funcion
void mostrarFlotante (float num);

int main(void) {
	setbuf(stdout, NULL);

	float num;

	printf("Ingresar un número flotante: ");
	fflush(stdin);
	scanf("%f", &num);

	//llamado de la funcion
	mostrarFlotante(num);


	return EXIT_SUCCESS;
}



//desarrollo de la funcion

void mostrarFlotante (float num)
{
	printf("El número flotante recibido por parámetro es: %.2f", num);
}

/*
 ============================================================================
Federico Silvero.

Gu�a extra.
Ejercicio 3-1:

Crear una funci�n que muestre por pantalla el n�mero flotante  que recibe como par�metro

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//prototipo de la funcion
void mostrarFlotante (float num);

int main(void) {
	setbuf(stdout, NULL);

	float num;

	printf("Ingresar un n�mero flotante: ");
	fflush(stdin);
	scanf("%f", &num);

	//llamado de la funcion
	mostrarFlotante(num);


	return EXIT_SUCCESS;
}



//desarrollo de la funcion

void mostrarFlotante (float num)
{
	printf("El n�mero flotante recibido por par�metro es: %.2f", num);
}

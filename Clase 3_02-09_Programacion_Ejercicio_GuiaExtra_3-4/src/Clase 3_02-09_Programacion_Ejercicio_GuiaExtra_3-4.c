/*
 ============================================================================
Federico Silvero.

Gu�a extra.
Ejercicio 3-4:

Especializar la funci�n anterior para que permita validar el entero ingresado
en un rango determinado.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int ingresoEntero (int minimo, int maximo);

int main(void) {
	setbuf(stdout, NULL);

	int num;

	num = ingresoEntero (0, 999);

	printf("El n�mero ingresado es: %d", num);

	return EXIT_SUCCESS;
}


//desarrollo funcion
int ingresoEntero (int minimo, int maximo)
{
    int num;

    printf("Ingrese un n�mero entero: ");
    fflush(stdin);
    scanf("%d", &num);

    	while(num < minimo || num > maximo){
    		printf("Error. El n�mero debe encontrarse dentro del rango indicado. Intente nuevamente: ");
    		fflush(stdin);
    		scanf("%d", &num);
    	}

    return num;
}

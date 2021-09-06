/*
 ============================================================================
Federico Silvero.

Gu�a extra.
Ejercicio 1-2:ingresar 3 n�meros y mostrar el mayor de los tres.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int num;
	int mayor;

	int flag = 0;

	for (int i = 0; i < 3; i++)
	{
		printf("Ingresar un n�mero entero: ");
		fflush(stdin);
		scanf("%d", &num);

		//entra si es la primera vez. O cuando el numero sea mayor que el guardado.
		if (flag==0 || num > mayor)
		{
			mayor = num;
			flag = 1; //recordar cambiar el valor del flag.
		}
	}

	printf("El mayor de los tres n�meros ingresados es: %d", mayor);


	return 0;
}

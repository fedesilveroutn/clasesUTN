/*
 ============================================================================
Federico Silvero.

Guia extra
Ejercicio 1-3:

Ingresar 3 n�meros y mostrar el n�mero del medio, s�lo si existe. En caso de que no
exista tambi�n informarlo.

Ejemplo:

1 5 3 el 3 es del medio
5 1 5 no hay numero del medio
3 5 1 el 3 es del medio
3 1 5 el 3 es del medio
5 3 1 el 3 es del medio
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int num1;
	int num2;
	int num3;

	//pido el ingreso el tres n�meros enteros

	printf("Ingresar primer n�mero entero: ");
	fflush(stdin);
	scanf("%d", &num1);


	printf("Ingresar segundo n�mero entero: ");
	fflush(stdin);
	scanf("%d", &num2);


	printf("Ingresar tercer n�mero entero: ");
	fflush(stdin);
	scanf("%d", &num3);


	//comparo los n�meros entre s�, buscando el del medio

	if ( (num1 > num2 && num1 < num3) || (num1 > num3 && num1 < num2 ))
	{
		printf("El n�mero del medio es: %d", num1);
	}


	if ( (num2 > num1 && num2 < num3) || (num2 > num3 && num2 < num1))
	{
		printf("El n�mero del medio es: %d", num2);
	}

	if ( (num3 > num1 && num3 < num2) || (num3 > num2 && num3 < num1) )
	{
		printf("El n�mero del medio es: %d", num3);
	}



	//si alguno de los n�meros son iguales, entonces no habr� num del medio.

	if ((num1 == num2) || (num1 == num3) ||  (num2 == num3))
	{
		printf("No existe n�mero del medio.");
	}



	return 0;
}

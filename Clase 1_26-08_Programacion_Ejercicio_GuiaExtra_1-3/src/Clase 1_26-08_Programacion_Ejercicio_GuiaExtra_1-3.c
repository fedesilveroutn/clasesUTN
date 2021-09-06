/*
 ============================================================================
Federico Silvero.

Guia extra
Ejercicio 1-3:

Ingresar 3 números y mostrar el número del medio, sólo si existe. En caso de que no
exista también informarlo.

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

	//pido el ingreso el tres números enteros

	printf("Ingresar primer número entero: ");
	fflush(stdin);
	scanf("%d", &num1);


	printf("Ingresar segundo número entero: ");
	fflush(stdin);
	scanf("%d", &num2);


	printf("Ingresar tercer número entero: ");
	fflush(stdin);
	scanf("%d", &num3);


	//comparo los números entre sí, buscando el del medio

	if ( (num1 > num2 && num1 < num3) || (num1 > num3 && num1 < num2 ))
	{
		printf("El número del medio es: %d", num1);
	}


	if ( (num2 > num1 && num2 < num3) || (num2 > num3 && num2 < num1))
	{
		printf("El número del medio es: %d", num2);
	}

	if ( (num3 > num1 && num3 < num2) || (num3 > num2 && num3 < num1) )
	{
		printf("El número del medio es: %d", num3);
	}



	//si alguno de los números son iguales, entonces no habrá num del medio.

	if ((num1 == num2) || (num1 == num3) ||  (num2 == num3))
	{
		printf("No existe número del medio.");
	}



	return 0;
}

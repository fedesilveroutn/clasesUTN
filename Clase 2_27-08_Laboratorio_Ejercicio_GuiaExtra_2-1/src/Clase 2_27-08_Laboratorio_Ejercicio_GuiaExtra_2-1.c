/*
 ============================================================================
Federico Silvero

Guía extra.
Ejercicio 2-1:

Ingresar 5 números enteros, calcular y mostrar el promedio de los números. Probar la
aplicación con distintos valores.

Ejemplo 1: 3 - 5 - 7 - 9 - 1
Ejemplo 2: 2 - 1 - 8 -1 - 2
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int num;
	int acumulador;
	int contador;
	float promedio;

	acumulador = 0;
	contador = 0;


	//pido el ingreso de cinco numeros; los voy acumulando y contando cuantos van ingresando
	for (int i = 0; i < 5; i++)
	{
		printf("Ingresar un número entero: ");
		fflush(stdin);
		scanf("%d", &num);


		acumulador = acumulador + num; //+= es lo mismo pero abreviado
		contador++;
	}


	//convierto acumulador en float para que el promedio se haga correctamente
	promedio = (float) acumulador / contador;


	printf("El promedio de los números ingresados es: %.2f", promedio);



	return 0;
}

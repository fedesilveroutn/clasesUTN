/*
 ============================================================================
Federico Silvero.

Guía extra.
Ejercicio 4-2:

Realizar un programa que permita la carga de temperaturas en celsius y fahrenheit,
validando que las temperaturas ingresadas estén entre el punto de congelación y ebullición del agua
para cada tipo de escala.
Las validaciones se hacen en una biblioteca.
Las funciones de transformación de fahrenheit a celsius y de celsius a fahrenheit se hacen en otra biblioteca.


Info:

-Fahrenheit: el agua se congela a 32° y hierve a 212°.
-Celsius: el agua se congela a 0° y hierve a 100°.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "validaciones.h"
#include "conversiones.h"

int main(void) {
	setbuf(stdout, NULL);

	char convertir;
	char respuesta;
	char seguir;
	float temperatura;


do{
	//pido el ingreso de escala y temperatura.
	printf("¿Con qué escala desea trabajar? (celsius= c / farenheit = f): ");
	fflush(stdin);
	scanf("%c", &respuesta);

	printf("Ingrese la temperatura: ");
	fflush(stdin);
	scanf("%f", &temperatura);


	//valido rangos.
	if (respuesta == 'c')
	{
		temperatura = validacionRango (temperatura, 0, 100);
		printf("\nUsted ha cargado %.2f °C\n", temperatura);

	}	else
		{
			temperatura = validacionRango (temperatura, 32, 212);
			printf("\nUsted ha cargado %.2f °F\n", temperatura);
		}


	//pregunto si quiere convertir la temperatura.
	printf("\n¿Desea convertir la temperatura a la escala contraria? (s/n): ");
	fflush(stdin);
	scanf("%c", &convertir);

	if (convertir == 's')
	{
		if (respuesta == 'c')
		{
			temperatura = pasaje ('c', temperatura);
			printf("\nLa conversión dio un resultado de %.2f °F\n", temperatura );

		}	else if (respuesta == 'f'){
			temperatura = pasaje ('f', temperatura);
			printf("\nLa conversión dio un resultado de %.2f °C\n", temperatura);
		}

	}


	printf("\nDesea continuar? (s/n): ");
	fflush(stdin);
	scanf("%c", &seguir);


	}while(seguir == 's');

	printf("\nFin del programa.");

	return 0;
}

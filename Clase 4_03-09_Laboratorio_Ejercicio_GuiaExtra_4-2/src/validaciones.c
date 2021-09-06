/*
 * validaciones.c
 *
 *  Created on: 4 sep. 2021
 *      Author: Fede
 *
 *
 *-Fahrenheit: el agua se congela a 32° y hierve a 212°.
 *-Celsius: el agua se congela a 0° y hierve a 100°.
 */
#include <stdio.h>
#include <stdlib.h>

float validacionRango (float num, int minimo, int maximo)
{

	float numValidado;
	while (!(num > minimo && num < maximo))
	{
		printf("Error. El número ingresado no se encuentra en el rango indicado. Intente nuevamente: ");
		scanf("%f", &num);
	}

	numValidado = num;

	return numValidado;
}


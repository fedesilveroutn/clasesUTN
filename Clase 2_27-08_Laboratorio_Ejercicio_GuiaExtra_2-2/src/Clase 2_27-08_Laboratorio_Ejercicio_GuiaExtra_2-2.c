/*
 ============================================================================
Federico Elías Silvero.

Guía extra.
Ejercicio 2-2:

Ingresar 10 números enteros, distintos de cero. Mostrar:

a. Cantidad de pares e impares.
b. El menor número ingresado.
c. De los pares el mayor número ingresado.
d. Suma de los positivos.
e. Producto de los negativos.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);


	int num;
	int acumPar;
	int acumImpar;
	int acumPositivos;

	int minimo;
	int mayorPar;
	int productoNeg;

	int flag = 0;
	int flag2 = 0;

	acumPar = 0;
	acumImpar = 0;


	for (int i = 0; i < 10; i++)
	{
		printf("Ingresar un número distinto de 0: ");
		fflush(stdin);
		scanf("%d", &num);

			while (num == 0)
			{
				printf("Error. El número ingresado no puede ser 0. Intente nuevamente: ");
				scanf("%d", &num);
			}



			//a. Cantidad de pares e impares.
			if (num %2 == 0)
			{
				acumPar++;

				//c. De los pares el mayor número ingresado.
					if (flag == 0 || num > mayorPar)
					{
						mayorPar = num;
					}

			} else {
				acumImpar++;
			}




			//b. El menor número ingresado.

			if (flag == 0 || num < minimo)
			{
				minimo = num;

			}



			//d. Suma de los positivos.

			if(num > 0)
			{
				acumPositivos = acumPositivos + num;

			} else {

				//e. Producto de los negativos.

				if (flag2 == 0)
				{
					productoNeg = num;
					flag2 = 1;

				} else {
					productoNeg = productoNeg * num;
				}
			}


			flag = 1;
	}



	printf("\na. Cantidad de pares: %d", acumPar);
	printf("\na. Cantidad de impares: %d", acumImpar);
	printf("\nb. El menor número ingresado: %d", minimo);
	printf("\nc. De los pares el mayor número ingresado es: %d", mayorPar);
	printf("\nd. Suma de los positivos: %d", acumPositivos);
	printf("\ne. Producto de los negativos: %d", productoNeg);


	return 0;
}

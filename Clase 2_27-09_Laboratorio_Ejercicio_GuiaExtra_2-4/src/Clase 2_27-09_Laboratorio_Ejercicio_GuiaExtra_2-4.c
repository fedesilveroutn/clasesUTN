/*
 ============================================================================
Federico Silvero
Guía extra.
Ejercicio 2-4:

Ingresar 5 caracteres e informar cuantas letras p (minúsculas) se ingresaron.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 6

int main(void) {
	setbuf(stdout, NULL);

	int i;
	int contadorP = 0;
	char caracteres [TAM];


	for(i = 0; i < TAM; i++)
	{
		printf("Ingrese un caracter: ");
		fflush(stdin);
		scanf("%c", &caracteres [i]);
	}

	for(i = 0; i < TAM ;i++)
	{
		printf("\nIndice: %d --- Caracter: %c", i, caracteres[i]);
	}


	for(i = 0; i < TAM ;i++)
	{
		if (caracteres[i] == 'p')
		{
			contadorP++;
		}
	}



	printf("\nSe ingresaron %d p minúsculas.", contadorP);




	return 0;
}

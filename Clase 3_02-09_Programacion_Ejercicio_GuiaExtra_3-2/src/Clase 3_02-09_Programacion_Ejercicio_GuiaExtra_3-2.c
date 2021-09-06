/*
 ============================================================================
Federico Silvero.

Gu�a extra.
Ejercicio 3-2:

Crear una funci�n que permita determinar si un n�mero es par o no.
La funci�n retorna 1 en caso afirmativo y 0 en caso contrario. Probar en el main.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int seraPar (int num);


int main(void) {
	setbuf(stdout, NULL);

	int num;

	printf("Ingrese un n�mero entero: ");
	fflush(stdin);
	scanf("%d", &num);

	seraPar(num);



	return EXIT_SUCCESS;
}


//desarrollo de funcion
int seraPar (int num)
{
	int respuesta;

	//codigo para saber si es o no par
	if (num %2 == 0){
		respuesta = 1;
		printf("Es par.");

	} else {
		respuesta = 0;
		printf("Es impar.");
	}

	return respuesta;
}

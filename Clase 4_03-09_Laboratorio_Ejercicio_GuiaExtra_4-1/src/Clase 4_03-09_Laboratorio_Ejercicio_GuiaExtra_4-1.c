/*
 ============================================================================
Federico Silvero.

Guía extra.
Ejercicio 4-1:

Realizar un programa EN EL MAIN que permita calcular y mostrar el factorial de un número.
Por ejemplo:
5! = 5*4*3*2*1 = 120

//formula para calcular el factorial
n! = n * (n-1)!
5! = 5*4*3*2*1 = 120

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//prototipo de funcion calcular factorial
int calcularFactorial(int calcularNumero);

int main(void) {
	setbuf(stdout, NULL);

	int num;
	int factorial = 1;


	printf("Ingresar un número entero para sacar su factorial: ");
	fflush(stdin);
	scanf("%d", &num);


	for (int i = 1; i <= num; i++)
	{
		factorial = factorial * i;
		printf("Los números a multiplicar son: %d\n", factorial);
	}

	printf("El factorial de %d es: %d\n", num, factorial);



	//invocacion a la funcion calcular factorial con recursividad
	printf("Ingresar un número entero para sacar su factorial: ");
	fflush(stdin);
	scanf("%d", &num);

	factorial = calcularFactorial(num);
	printf("El factorial de %d es: %d", num, factorial);


	return EXIT_SUCCESS;
}



//funcion para calcular el factorial de un numero usando RECURSIVIDAD

int calcularFactorial(int calcularNumero) //recibe un número entero como parámetro
{
	int factorial = 1;	//inicializo el factorial para establecer un límite


	//si el parametro es 1 o 0, no se puede sacar factorial. Entro solamente si el parametro es distinto.
	if (calcularNumero != 1 && calcularNumero != 0){

	//calculo el factorial así: n! = n * (n-1).
	//la funcion se va a autoinvocar hasta que la condicion del if sea verdadera, es decir, llegue a 1.
		factorial = calcularNumero * calcularFactorial (calcularNumero - 1);
	}

	return factorial;

}

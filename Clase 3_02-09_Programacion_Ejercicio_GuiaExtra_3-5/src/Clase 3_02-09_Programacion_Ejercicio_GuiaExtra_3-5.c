/*
 ============================================================================
Federico Silvero.

Guía extra.
Ejercicio 3-5:
Realizar un programa en donde se puedan utilizar los prototipos de la función Sumar en sus 4 combinaciones.
int Sumar1(int, int);
int Sumar2(void);
void  Sumar3(int, int);
void Sumar4(void);

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int Sumar1(int, int);
int Sumar2(void);
void Sumar3(int, int);
void Sumar4(void);

int main(void) {
	setbuf(stdout, NULL);

	int numero1;
	int numero2;
	int resultado;

	//funcion 1
	printf("Ingresar un número entero: ");
	fflush(stdin);
	scanf("%d", &numero1);
	printf("Ingresar otro número entero: ");
	fflush(stdin);
	scanf("%d", &numero2);

	resultado = Sumar1 (numero1, numero2);
	printf("El resultado con la primera funcion es: %d\n", resultado);



	//funcion 2
	resultado = Sumar2();
	printf("El resultado con la segunda funcion es: %d\n", resultado);


	//funcion 3

	printf("\nIngresar un número entero: ");
	fflush(stdin);
	scanf("%d", &numero1);

	printf("Ingresar otro número entero: ");
	fflush(stdin);
	scanf("%d", &numero2);

	Sumar3(numero1, numero2);


	//funcion 4

	Sumar4();


	return EXIT_SUCCESS;
}


int Sumar1(int num1, int num2)
{
	int total;

	total = num1 + num2;

	return total;
}


int Sumar2(void)
{
	int num1;
	int num2;
	int resultado;

	printf("\nIngrese un número entero: ");
	fflush(stdin);
	scanf("%d", &num1);

	printf("Ingrese otro número entero: ");
	fflush(stdin);
	scanf("%d", &num2);
	resultado = num1 + num2;

	return resultado;
}


void Sumar3(int num1, int num2)
{
	int resultado;
	resultado = num1 + num2;
	printf("El resultado con la tercera función es: %d\n", resultado);
}


void Sumar4(void)
{
	int num1;
	int num2;
	int resultado;


	printf("\nIngresar un número entero: ");
	fflush(stdin);
	scanf("%d", &num1);

	printf("Ingresar otro número entero: ");
	fflush(stdin);
	scanf("%d", &num2);

	resultado = num1 + num2;

	printf("El resultado con la cuarta funcion es: %d\n", resultado);
}

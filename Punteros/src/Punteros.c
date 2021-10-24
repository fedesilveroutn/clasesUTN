/*
 ============================================================================
 Name        : Punteros.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


typedef struct
{
	char nombre[31];
	int edad;

} sPerrito;

int main(void) {

	//Ejemplo mostrar direccion de memoria
	int direccionMemoria;
	char letra;
	letra = 'c';
	direccionMemoria = (int) &letra;
	printf("d", direccionMemoria);


	//Ejemplo puntero a letra
	char* punteroLetra;
	char letra;
	letra = 'c';
	punteroLetra = &letra;
	printf("%d", (int) punteroLetra);


	//Ejemplo acceso a dato
	char* punteroLetra;
	char letra = 'c';
	punteroLetra = &letra;
	printf("Direccion a la que apunta: %p - Valor: %c", punteroLetra, *punteroLetra);


	//Ejemplo de puntero a puntero
	int a = 10;
	int* b = &a;
	int** c = &b;
	printf("a vale %p | b vale %p | c vale %p", &a, *b, **c);


	//Puntero a estructura
	sPerrito perri = {"Lobo", 2};
	sPerrito* punteroAPerri = &perri;

	printf("Nombre: %s\n", (*punteroAPerri).nombre );
	printf("Edad: %d\n", (*punteroAPerri).edad );



	//Puntero array de estructuras

	sPerrito arrayPerritos[2] = {{"Lobo", 2}, {"Lola", 5}};
	sPerrito punteroAPerrito = arrayPerritos;

	//puede usarse en un FOR reemplazando 1 por i
	printf("Nombre: %s\n", arrayPerritos[1].nombre);
	printf("Edad: %d\n", arrayPerritos[1].edad);

	//usar doble paréntesis para acceder a los arrays de estructura
	printf("Nombre: %s\n", (*(punteroAPerri + 1) ).nombre);
	printf("Edad: %d\n", (*(punteroAPerri + 1) ).edad);




	//Puntero array comun
	int numeros[2] = {1 , 2};
	int* punteroANumeros = numeros;
	printf("%d", *(punteroANumeros + 1 ));

	/*
	Operador de Dirección: (&)
	Este operador permite obtener la direccion de memoria de una variable.
	Operador de Indireccion: (*)
	Este operador devuelve el contenido en la posicion apuntada por el puntero.
	*/



	//ESCRIBIR EL OPERADOR FLECHA
	//PUNTERO A ESTRUCTURA CON OPERADOR FLECHA
		sPerrito perri = {"Lobo", 2};
		sPerrito* punteroAPerri = &perri;

		printf("Nombre: %s\n", perri.nombre);
		printf("Edad: %d\n", perri.edad);

		printf("Nombre: %s\n", punteroAPerri->nombre); //(*punteroAPerri).nombre YA NO!!
		printf("Edad: %d\n", punteroAPerri->edad); //idem


		sPerrito arrayPerritos[2] = {{"Lobo", 2}, {"Lola", 5}};
		sPerrito* punteroAPerri = arrayPerritos;

		printf("Nombre: %s\n", arrayPerritos[1].nombre);
		printf("Edad: %d\n", arrayPerritos[1].edad);
		//puede usarse en un FOR reemplazando 1 por i
		printf("(Puntero) Nombre: %s\n", (punteroAPerri + 1)->nombre); //RECORDAR DOBLE PARENTESIS!!!!
		printf("(Puntero) Edad: %d\n", (punteroAPerri + 1)->edad); //RECORDAR DOBLE PARENTESIS!!!!


	return EXIT_SUCCESS;
}

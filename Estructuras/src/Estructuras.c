/*
 ============================================================================
Explicación de estructuras. Cómo declararlas, hardcodearlas, acceder a sus
campos.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "input.h"
#include "struct.h"
#define TAM 3


int main(void) {
	setbuf(stdout, NULL);

	//creo una instancia de la estructura y la hardcodeo
	sPersona personaUno = {23 , "Federico"};
	sPersona personaDos;

	//creo un array de mi estructura
	sPersona personas[TAM];



	//pasar & para que se pase la dir de mem
	mostrarPersona (&personaUno);
	cargarPersona (&personaUno);
	mostrarPersona (&personaUno);


	//la asignacion de campos siempre se hace manual
	personaDos.edad = personaUno.edad;
	strcpy (personaDos.nombre, personaUno.nombre);//usar funciones string.h porque nombre es cadena de caracteres


	//invoco a las funciones que manejan el array de la estructura persona
	cargarPersonas (personas, TAM);
	mostrarPersonas(personas, TAM);

	ordenarPersonas (personas, TAM);
	printf("\n---Listado de personas ordenadas---\n");
	mostrarPersonas(personas, TAM);






	return 0;
}










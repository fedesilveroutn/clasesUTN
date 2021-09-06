/*
 * utn.c
 *
 *  Created on: 5 sep. 2021
 *      Author: Fede
 *    Contiene: todas las funciones que me permiten pedirle datos al usuario y validarlos.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


static int esNumerica(char* cadena);
static int getInt(int* pResultado);
static int myGets(char* cadena, int longitud);




//Funcion para reemplazar el ENTER por \0 y terminar el array
/**
 * @fn:	    int myGets(char*, int)
 * @brief: 	Lee ​de​ ​stdin​ ​hasta​ ​que​ ​encuentra​ ​un​ '\n' o ​hasta​ ​que​ ​haya​ ​copiado​ ​en​ ​cadena
 * 			un​ ​máximo​ ​de​ '​longitud​ - 1' ​caracteres​.
 *
 * @param   pResultado ​Puntero​ ​al​ ​espacio​ ​de​ ​memoria​ ​donde​ ​se​ ​copiara​ ​la​ ​cadena​ ​obtenida
 * @param ​  longitud​ Define el ​tamaño​ ​de​ ​cadena
 * @return​  retorna​ 0 _exito_ ​si​ ​se​ ​obtiene​ ​una​ ​cadena​ y -1 _error_ ​si​ no
 */

static int myGets (char* cadena, int longitud)
{
	int retorno = -1;

		if (cadena != 1 && cadena > 0 && fgets (cadena, longitud, stdin) == cadena)
		{
			fflush(stdin);
			if(cadena[strlen (cadena) - 1] == '\n')
			{
				cadena[strlen (cadena) - 1] = '\0';
			}
			retorno = 0;
		}

	return retorno;
}






//Funcion para validar dato ingresado y convertirlo en int

/**
 * @fn int getInt(int*)
 * @brief: verifica si la cadena es numerica
 *
 * @param: pResultado ​Puntero​ ​al​ ​espacio​ ​de​ ​memoria​ ​donde​ ​se​ ​dejara​ el ​resultado​ ​de​ ​la​ ​funcion
 * @return: ​Retorna​ 0 (EXITO) ​si​ ​se​ ​obtiene​ ​un​ ​numero​ ​entero​ y -1 (ERROR) ​si​ no
 */

static int getInt (int* pResultado)
{
	int retorno = -1;
	char buffer [64];

	if (pResultado != NULL)
	{
		if (myGets (buffer, sizeof (buffer)) == 0 && esNumerica (buffer))
		{
			*pResultado = atoi (buffer);//atoi() transforma la cadena de caracteres a un valor del tipo int.
		}

		retorno = 0;
	}
	return retorno;
}



//Funcion para validar que la cadena de caracteres sea numerica

/**
 * @fn int esNumerica(char*)
 * @brief: Verifica​ ​si​ ​la​ ​cadena​ ​ingresada​ ​es​ ​numerica
 *
 * @param cadena: ​Cadena​ ​de​ ​caracteres​ a ​ser​ ​analizada
 * @return: ​Retorna​ 1 (​vardadero​) ​si​ ​la​ ​cadena​ ​es​ ​numerica​ y 0 (​falso​) ​si​ no ​lo​ ​es
 */

static int esNumerica (char* cadena)
{
	int i = 0;
	int retorno = 1; //si encuentra que todos los caracteres son numericos retorna 1

		if (cadena != NULL && strlen(cadena) > 0)
		{
			while (cadena[i] != '\0') //recorre todos los indices hasta que se encuentra con \0
			{

				if (cadena [i] < '0' || cadena [i] > '9') //si el indice no corresponde a un numero retorna 0
				{
					retorno = 0;
					break;
				}

				i++;
			}
		}

	return retorno;
}





//Funcion para pedir numero por consola

/**
 * @fn int utn_getNumero(int*, char*, char*, int, int, int)
 * @brief: ​Solicita​ ​un​ ​numero​ ​al​ ​usuario​, ​leuego​ ​de​ ​verificarlo​ ​devuelve​ el ​resultado
 *
 * @param pResultado: ​Puntero​ ​al​ ​espacio​ ​de​ ​memoria​ ​donde​ ​se​ ​dejara​ el ​resultado​ ​de​ ​la​ ​funcion
 * @param mensaje: ​Es​ el ​mensaje​ a ​ser​ ​mostrado
 * @param mensajeError: ​Es​ el ​mensaje​ ​de​ Error a ​ser​ ​mostrado
 * @param minimo: Es​ el ​numero ​minimo​ a ​ser​ ​aceptado
 * @param maximo​: Es​ el ​numero​ ​maximo​ a ​ser​ ​aceptado
 * @param reintentos:
 * @return: Retorna​ 0 ​si​ ​se​ ​obtuvo​ el ​numero​ y -1 ​si​ no
 */

int utn_getNumero (int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos)
{
	int retorno;
	int num;

		while (reintentos > 0)
		{
			printf(mensaje);

			if(getInt(&num)== 1)
			{
				if (num >= minimo && num <= maximo)
				{
					break;
				}
			}
			fflush(stdin);

			reintentos--;
			printf(mensajeError);
		}


		if(reintentos == 0)
		{
			retorno = -1;

		}else{

		   *pResultado = num;
			retorno = 0;
		}

	return retorno;
}


/*
 * jugador.c
 *
 *  Created on: 4 oct. 2021
 *      Author: Fede
 */

#include "jugador.h"
#include "input.h"




//funcion para cargar UN jugador
void cargarUnJugador (sJugador* player)
{

	//cargo nombre
	getString ( (*player).nombre , "Ingrese nombre: ", "Error. Ingrese un nombre válido: ", 51);


	//cargo goles metidos
	(*player).golesMetidos = getInt("Ingrese cantidad de goles metidos: ",
									"Error. Reingrese goles metidos: ",
									 0 , 100);

	//cargo partidos jugados
	(*player).partidosJugados = getInt("Ingrese cantidad de partidos jugados: ",
									   "Error. Reingrese partidos jugados: ",
									   1 , 100);

	//cargo partidos jugados
	(*player).promedioGoles = promedioGoles ( (float)(*player).golesMetidos , (*player).partidosJugados );

}




//funcion para cargar TODOS los jugadores
void cargarJugadores (sJugador* player, int tam)
{
	int i;

	for (i = 0; i < tam; i++)
	{
		cargarUnJugador( &player[i]);
	}
}





//funcion para mostrar UN jugador
void mostrarUnJugador (sJugador* player)
{
	printf("\nNombre: %s --- Goles metidos: %d --- Partidos jugados: %d --- Promedio de goles: %.2f",
			(*player).nombre , (*player).golesMetidos, (*player).partidosJugados, (*player).promedioGoles);
}




//funcion para mostrar TODOS los jugadores
void mostrarJugadores (sJugador* player, int tam)
{
	int i;

	for ( i = 0; i < tam; i++)
	{
		mostrarUnJugador (&player[i]);
	}

}





//funcion para calcular promedio de goles
float promedioGoles (float golesMetidos , int partidosJugados)
{
	float promedio;
	promedio = golesMetidos / partidosJugados;
	return promedio;
}


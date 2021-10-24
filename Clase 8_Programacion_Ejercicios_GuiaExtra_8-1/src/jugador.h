/*
 * jugador.h
 *
 *  Created on: 4 oct. 2021
 *      Author: Fede
 */

#ifndef JUGADOR_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define JUGADOR_H_

//estructura jugador
typedef struct
{
	char nombre[31];
	int golesMetidos;
	int partidosJugados;
	float promedioGoles;

} sJugador;



void cargarUnJugador (sJugador* player);
void cargarJugadores (sJugador* player, int tam);
void mostrarUnJugador (sJugador* player);
void mostrarJugadores (sJugador* player, int tam);
float promedioGoles (float golesMetidos , int partidosJugados);





#endif /* JUGADOR_H_ */

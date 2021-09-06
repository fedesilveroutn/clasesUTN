/*
 * transformaciones.c
 *
 *  Created on: 4 sep. 2021
 *      Author: Fede
 */

#include <stdio.h>
#include <stdlib.h>

float pasaje (char escala, float cantidad)
{
	float conversion;

	if ( escala == 'c')
	{
		conversion = (cantidad * 1,8) + 32;


	}else if ( escala == 'f'){

		conversion = (cantidad - 32) / 1,8;
	}


	return conversion;
}

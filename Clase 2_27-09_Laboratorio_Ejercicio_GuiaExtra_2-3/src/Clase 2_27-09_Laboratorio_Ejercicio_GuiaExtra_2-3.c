/*
 ============================================================================
Federico Silvero

Guía extra.
Ejercicio 2-3:

Debemos alquilar el servicio de transporte para llegar a Mar del Plata con un grupo de personas, de cada persona
debemos obtener los siguientes datos:

-número de cliente,
-estado civil (s=soltero; c=casado; v=viudo),
-edad( solo mayores de edad, más de 17),
-temperatura corporal (validar por favor)
-sexo (f=femenino; m=masculino; o=no binario).

NOTA: el precio por pasajero es de $600.

Se debe informar (solo si corresponde):

a) La cantidad de personas con estado viudo de más de 60 años.
b) el número de cliente y edad de la mujer soltera más joven.
c) cuánto sale el viaje total sin descuento.
d) si hay más del 50% de los pasajeros que tiene más de 60 años , el precio final tiene un descuento del 25%, que
solo mostramos si corresponde.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numeroCliente;
	int edad;
	int edadMujerSolteraJoven;
	int numClienteMujerSolteraJoven;
	int costoTotal = 0;
	int contadorPersonas = 0;
	int contadorMayores = 0;
	int contadorViudosMayores = 0;
	int flag = 0;
	float temperatura;
	float costoTotalConDescuento;
	char estadoCivil;
	char sexo;
	char seguir;

	float mitad
	float seraDescuento;


	do {

		//INGRESO DE DATOS

		// Numero cliente
		printf("Ingrese su número de cliente: ");
		fflush(stdin);
		scanf("%d", &numeroCliente);


		//Estado Civil
		printf("Ingrese su estado civil (s = soltero /c= casado / v = viudo): ");
		fflush(stdin);
		scanf("%c", &estadoCivil);


		//Edad
		printf("Ingrese su edad (solo mayores de 17 años): ");
		fflush(stdin);
		scanf("%d", &edad);
			while(edad <= 17){
				printf("Error. Solo mayores de 17 años. Intente nuevamente: ");
				fflush(stdin);
				scanf("%d", &edad);
			}


		//Temperatura
		printf("Ingrese su temperatura corporal (36.0 - 42.0): ");
		fflush(stdin);
		scanf("%f", &temperatura);
			while(temperatura < 36.0 || temperatura > 42.0){
				printf("Error. La temperatura tiene que encontrarse en el rango especificado. Intente de nuevo: ");
				fflush(stdin);
				scanf("%f", &temperatura);
			}


		//Sexo
		printf("Ingrese su sexo (f=femenino; m=masculino; o=no binario): ");
		fflush(stdin);
		scanf("%c", &sexo);



		contadorPersonas++;


		//a) La cantidad de personas con estado viudo de más de 60 años.
		if (edad > 60 )
		{
			contadorMayores++;

			if (estadoCivil == 'v'){
				contadorViudosMayores++;

			}
		}



		//b) el número de cliente y edad de la mujer soltera más joven.

		if (sexo == 'f' && estadoCivil == 's'){

			if (flag == 0 || edad < edadMujerSolteraJoven){

				edadMujerSolteraJoven = edad;
				numClienteMujerSolteraJoven = numeroCliente;
				flag = 1;
			}
		}





		//c) cuánto sale el viaje total sin descuento.

		costoTotal = costoTotal + 600;





		printf("Desea cargar a otra persona? (s/n): ");
		fflush(stdin);
		scanf("%c", &seguir);

	}while (seguir== 's');




if(contadorViudosMayores > 0){
	printf("\na) La cantidad de personas con estado viudo de más de 60 años es de: %d personas.", contadorViudosMayores);
}


if(flag == 1){
printf("\nb) La mujer soltera más joven tiene %d años, y el número de cliente: %d.", edadMujerSolteraJoven, numClienteMujerSolteraJoven);
}


printf("\nc) El viaje sin descuento cuesta: $ %d.", costoTotal);




printf("\nLa cantidad total de personas ingresadas es: %d", contadorPersonas);
printf("\nLa cantidad total de personas mayores de 60 es: %d", contadorMayores);



/*
seraDescuento = (float)contadorPersonas / contadorMayores;

printf("\nseraDescuento: %f", seraDescuento);
*/


//d) si hay más del 50% de los pasajeros que tiene más de 60 años , el precio final tiene un descuento del 25%,
//que solo mostramos si corresponde (fuera del bucle).

if ( ( (float)contadorPersonas / contadorMayores) > ((float)contadorPersonas / 2) ){

			costoTotalConDescuento = ((float)costoTotal * 25) / 100;
			printf("\nEl precio final con descuento es de: $ %f ", costoTotalConDescuento );
		}


	return 0;
}

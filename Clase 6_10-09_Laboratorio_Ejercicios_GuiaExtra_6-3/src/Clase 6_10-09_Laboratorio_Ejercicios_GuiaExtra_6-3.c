/*
 ============================================================================
Federico Silvero

Ejercicio 6-3:
Pedirle al usuario su nombre y apellido (en variables separadas, una para el nombre y
otra para el apellido). Ninguna de las dos variables se puede modificar.
Debemos lograr guardar en una tercer variable el apellido y el nombre con el siguiente formato:

Por ejemplo:
Si el nombre es juan ignacio y el apellido es gOmEz, la salida debería ser:
Gomez, Juan Ignacio

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	setbuf(stdout, NULL);

	char name [30];
	char surname [30];
	char completeName [70];

	//pido el ingreso del nombre
	printf("Ingrese su nombre: ");
	fflush(stdin);
	fgets(name , 31 , stdin);

	strlwr(name);//paso toda la cadena a minuscula
	name[0] = toupper(name [0]);//paso el primer caracter a mayuscula


	//pido el ingreso del apellido
	printf("Ingrese su apellido: ");
	fflush(stdin);
	fgets(surname , 31 , stdin);

	strlwr(surname);
	surname[0] = toupper (surname [0]);


	//concateno las cadenas con el formato requerido: Apellido, Nombre
	strcat (completeName, surname);
	strcat (completeName, ",");
	strcat (completeName, name);


	//muestro el nombre completo
	printf("Nombre completo: %s", completeName);



	return EXIT_SUCCESS;
}

/******************************************************************************
Federico Silvero

Ejercicio 3-3:
Crear una función que pida el ingreso de un entero y lo retorne.

*******************************************************************************/
#include <stdio.h>

//prototipo de funcion
int ingresoEntero (void);

int main(){
	setbuf(stdout, NULL);


    int num;
    num = ingresoEntero (); //llamado de la funcion
    printf("El número ingresado es: %d", num);

    return 0;
}


//desarrollo de funcion
int ingresoEntero (void)
{
    int num;

    printf("Ingrese un número entero: ");
    fflush(stdin);
    scanf("%d", &num);

    return num;
}



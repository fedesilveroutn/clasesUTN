/******************************************************************************
Federico Silvero

Ejercicio 3-3:
Crear una funci�n que pida el ingreso de un entero y lo retorne.

*******************************************************************************/
#include <stdio.h>

//prototipo de funcion
int ingresoEntero (void);

int main(){
	setbuf(stdout, NULL);


    int num;
    num = ingresoEntero (); //llamado de la funcion
    printf("El n�mero ingresado es: %d", num);

    return 0;
}


//desarrollo de funcion
int ingresoEntero (void)
{
    int num;

    printf("Ingrese un n�mero entero: ");
    fflush(stdin);
    scanf("%d", &num);

    return num;
}



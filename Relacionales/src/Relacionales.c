/*
 ============================================================================
 Name        : Relacionales.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "input.h"
#define TAMCURSO 3
#define TAMALUMNO 5

typedef struct
{
	int idCurso;
	char descripcion[51];
	int duracion;

} eCurso;


typedef struct
{
	int legajo;
	char nombre[51];
	float promedio;
	int idCurso;

} eAlumno;



void mostrarUnAlumno (eAlumno alumno);
void mostrarListaAlumnos (eAlumno listaAlumnos [] , int tamAlumnos ,eCurso listaCursos[] , int tamCursos );
void mostrarListaCursosConSusAlumnos(eCurso listaCursos[], int tamCursos, eAlumno listaAlumnos[], int tamAlumnos);



int main(void) {
	setbuf(stdout, NULL);

	eCurso cursos [TAMCURSO] = { {100 , "Java" , 20}, {101 , "VB" , 15}, {102 , "Python" , 10} };
	eAlumno alumnos [TAMALUMNO] = { {1000, "Juan", 8 , 100},
									{1001, "Maria", 5 , 101 },
									{1002, "Carlos", 7.5 , 102},
									{1003, "Erika", 6 , 100},
									{1004, "Raul", 7 , 102}
								  };

	//mostrarListaAlumnos (alumnos, TAMALUMNO , cursos , TAMCURSO);
	mostrarListaCursosConSusAlumnos (cursos, TAMCURSO, alumnos, TAMALUMNO);

	return 0;
}




void mostrarUnAlumno (eAlumno alumno)
{
	printf("%d - %s - %.2f - %d\n", alumno.legajo, alumno.nombre , alumno.promedio, alumno.idCurso);
}





void mostrarListaAlumnos (eAlumno listaAlumnos [] , int tamAlumnos ,eCurso listaCursos[] , int tamCursos)
{
	int i;
	int j;

	for (i = 0; i < tamAlumnos; i++)
	{
		for (j = 0; j < tamCursos ; j++)
		{
			if(listaAlumnos[i].idCurso == listaCursos[j].idCurso)
			{
				printf("%d - %s - %.2f - %s\n", listaAlumnos[i].legajo,
												listaAlumnos[i].nombre,
												listaAlumnos[i].promedio,
												listaCursos[i].descripcion);
				break;//una vez que encuentra la coincidencia
			}
		}
	}

}





void mostrarListaCursosConSusAlumnos(eCurso listaCursos[], int tamCursos, eAlumno listaAlumnos[], int tamAlumnos)
{
	for (int i = 0; i < tamCursos; i++)
	{
		printf("%s\n", listaCursos[i].descripcion);

		for (int j = 0; j < tamAlumnos; j++)
		{
			if (listaCursos[i].idCurso == listaAlumnos[j].idCurso)
			{
				printf("%d - %s - %.2f\n", listaAlumnos[j].legajo,
										   listaAlumnos[j].nombre,
										   listaAlumnos[j].promedio);
			//aca no va break porque si no solo me mostraria el primer alumno de cada uno
			}
		}
	}
}







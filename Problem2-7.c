/*2. Hacer una estructura llamada alumno, en la cual se tendran los siguientes
miembros: Nombre,edad,promedio,pedir datos al usuario para 3 alumnos, comprobar
cual de los 3 tiene mejor promedio y posteriormente imprimir los datos del alumno.
*/

#include<stdio.h>
#include<stdlib.h>

struct alumno{
	char name[20];
	int age;
	int promedio;
}alumnos[3];

int main(){
	int i;
	
	for(i=0;i<3;i++){
		fflush(stdin);
		printf("%i. Digite su nombre: ",i+1);
		gets(alumnos[i].name);
		printf("%i. Digite su edad: ",i+1);
		scanf("%i",&alumnos[i].age);
		printf("%i. Digite su promedio: ",i+1);
		scanf("%i",&alumnos[i].promedio);
		printf("\n");
	}
	
	if(alumnos[0].promedio>alumnos[1].promedio && alumnos[0].promedio>alumnos[2].promedio){
		printf("Su nombre es: %s",alumnos[0].name);
		printf("\nSu edad es: %i",alumnos[0].age);
		printf("\nSu promedio es: %i",alumnos[0].promedio);
		printf("\n");
	}
	else if(alumnos[1].promedio>alumnos[0].promedio && alumnos[1].promedio>alumnos[2].promedio){
		printf("Su nombre es: %s",alumnos[1].name);
		printf("\nSu edad es: %i",alumnos[1].age);
		printf("\nSu promedio es: %i",alumnos[1].promedio);
		printf("\n");
	}
	else if(alumnos[2].promedio>alumnos[1].promedio && alumnos[2].promedio>alumnos[0].promedio){
		printf("Su nombre es: %s",alumnos[2].name);
		printf("\nSu edad es: %i",alumnos[2].age);
		printf("\nSu promedio es: %i",alumnos[2].promedio);
		printf("\n");
	}
	
	
	system("pause");
	return 0;
}

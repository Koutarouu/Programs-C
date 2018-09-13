/*6.Utilizar las 2 estructuras del problema 5, pero ahora pedir los datos para N
alumnos, y calcular cual de todos tiene el mejor promedio, e imprimir sus datos.
*/

#include<stdio.h>

struct promedio{
	float nota1;
	float nota2;
	float nota3;
	float final;
};
struct alumno{
	char nombre[20];
	char sexo[20];
	int edad;
	struct promedio prom;
}alumnos[100];

int main(){
	int i,n,pmay,pmen;
	float mayor=0.0 , menor = 999999999;
	
	printf("Digite el numero de alumnos: ");scanf("%i",&n);
	
	for(i=0;i<n;i++){
		fflush(stdin);
		printf("%i. Digite su nombre: ",i+1);
		gets(alumnos[i].nombre);
		printf("%i. Digite su sexo: ",i+1);
		gets(alumnos[i].sexo);
		printf("%i. Digite su edad: ",i+1);
		scanf("%i",&alumnos[i].edad);
		printf("\n");
		printf("Digite las notas: ");
		scanf("%f %f %f",&alumnos[i].prom.nota1,&alumnos[i].prom.nota2,&alumnos[i].prom.nota3);
		alumnos[i].prom.final=(alumnos[i].prom.nota1+alumnos[i].prom.nota2+alumnos[i].prom.nota3)/3;
	}
	
	for(i=0;i<n;i++){
		if(alumnos[i].prom.final > mayor){
			mayor=alumnos[i].prom.final;
			pmay=i;
		}
	}
	
	printf("\n-Datos del alumno con Mejor Promedio-\n");
	printf("\nNombre: %s",alumnos[pmay].nombre);
	printf("\nSexo: %s",alumnos[pmay].sexo);
	printf("\nEdad: %i",alumnos[pmay].edad);
	printf("\nPromedio Final: %.2f",alumnos[pmay].prom.final);
	
	return 0;
}

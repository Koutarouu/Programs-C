/*3. Realizar un programa en C que lea un arreglo de estructuras los datos de N 
empleados de la empresa y que imprima los datos del empleado con mayor y menor
salario.
*/

#include<stdio.h>
#include<stdlib.h>

struct empleado{
	char nombre[20];
	char sexo[20];
	float salario;
}empleados[100];

int main(){
	int n,i,pmay,pmen;
	float mayor=0.0 , menor = 999999999;
	
	printf("Digite el total de empleados: ");
	scanf("%i",&n);
	
	for(i=0;i<n;i++){
		fflush(stdin);
		printf("%i. Digite su nombre: ",i+1);
		gets(empleados[i].nombre);
		printf("%i. Digite su sexo: ",i+1);
		gets(empleados[i].sexo);
		printf("%i. Digite su salario: ",i+1);
		scanf("%f",&empleados[i].salario);
	}
	
	/*
		0. e1=120 -- menor
		1. e2=150 -- 
		2. e3=300 -- mayor
	*/
	
	for(i=0;i<n;i++){
		if(empleados[i].salario > mayor){
			mayor=empleados[i].salario;
			pmay=i;
		}
		if(empleados[i].salario < menor){
			menor = empleados[i].salario;
			pmen=i;
		}
	}
	
	printf("\n-Datos del empleado con Mayor Salario-\n");
	printf("\nNombre: %s",empleados[pmay].nombre);
	printf("\nSexo: %s",empleados[pmay].sexo);
	printf("\nSalario: %.2f",empleados[pmay].salario);
	
	printf("\n-Datos del empleado con Menor Salario-\n");
	printf("\nNombre: %s",empleados[pmen].nombre);
	printf("\nSexo: %s",empleados[pmen].sexo);
	printf("\nSalario: %.2f",empleados[pmen].salario);
	
	system("pause");
	return 0;
}

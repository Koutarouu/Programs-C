/*Ingresar por teclado el nombre, la edad y el sexo de cualquier persona e imprima,
solo si la persona es de sexo femenino y mayor de edad, el nombre de la persona*/


#include<stdio.h>

int main(){
	char nombre[30],sexo[20];
	int edad;
	
	printf("Digite su nombre: ");
	gets(nombre);
	printf("Digite su sexo: ");
	gets(sexo);
	printf("Digite su edad: ");scanf("%i",&edad);
	
	
	if((strcmp(sexo,"femenino")==0) && edad>=18){
		printf("%s",nombre);
	}

	return 0;	
}

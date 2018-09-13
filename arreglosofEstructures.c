/*Arreglos de Estructuras*/

#include<stdio.h>

struct persona{
	char name[20];
	int age;
}personas[5]; 	//persona1,persona2...persona5

int main(){
	int i;
	
	for(i=0;i<5;i++){
		fflush(stdin);
		printf("%i. Digite su nombre: ",i+1);
		gets(personas[i].name);
		printf("%i. Digite su edad: ",i+1);
		scanf("%i",&personas[i].age);
		printf("\n");
	}
	
	for(i=0;i<5;i++){
		printf("%i. Su nombre es: %s",i+1,personas[i].name);
		printf("\n%i. Su edad es: %i",i+1,personas[i].age);
		printf("\n");
	}
	
	return 0;
}

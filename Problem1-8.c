/*1. Hacer una variable de tipo int, otra de tipo float y por ultimo una de tipo
char,almacenar datos en cada una de las variables, posteriormente indicar la
posicion de memoria donde se encuentran guardados los datos de cada variable,
Con punteros.*/

#include<stdio.h>

int main(){
	int n=10, *p_n = & n;
	float f=10.5, *p_f=&f;
	char c='Z', *p_c=&c;
	
	printf("Variable enteras: \n");
	printf("Dato: %i",*p_n);
	printf("\nPosicion: %p",p_n);
	
	printf("\n\nVariable Flotante: \n");
	printf("Dato: %.2f",*p_f);
	printf("\nPosicion: %p",p_f);
	
	printf("\n\nVariable Caracter: \n");
	printf("Dato: %c",*p_c);
	printf("\nPosicion: %p",p_c);
	
	
	return 0;
}

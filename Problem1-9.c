/*1. Utilizar malloc para reservar memoria para un nombre(string)*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char nombre[20], *p_nombre;
	int longitude;
	
	strcpy(nombre,"Diego");
	longitude = strlen(nombre);
	p_nombre=malloc((longitude+1)*sizeof(char));
	strcpy(p_nombre,nombre);
	
	printf("Nombre %s",p_nombre);
	
	return 0;
}

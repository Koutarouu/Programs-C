/*7. Reservar memoria dinamica para una cadena de caracteres de 10 espacios, luego
utilizar realloc para ampliar la memoria dinamica a 30 espacios. */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char *p_nombre,*p_nombreCompleto;
	
	p_nombre = malloc(10*sizeof(char));
	
	strcpy(p_nombre,"Diego ");
	
	printf("Nombre: %s",p_nombre);
	
	//Ampliando la cadena de caracteres a 30 espacios
	
	p_nombreCompleto=realloc(p_nombre,30*sizeof(char));
	
	strcat(p_nombreCompleto,"Francisco Dominguez Aguilar"); //Diego Francisco Dominguez
	
	printf("\nNombre Completo: %s",p_nombreCompleto);
	free(p_nombreCompleto);
	return 0;
}

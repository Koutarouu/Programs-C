/* 5. Reservar espacio en memoria dinamica para un nombre, y luego liberar la
memoria utilizada con free(). */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char name[20],*p_name;
	int longitude;
	
	strcpy(name,"Diego");
	longitude = strlen(name);
	
	p_name =(char *)malloc((longitude+1)*sizeof(char));
	
	strcpy(p_name,name);
	
	printf("Nombre: %s",p_name);
	
	free(p_name);
	
	printf("\nNombre: %s",p_name);
	
	return 0;
}

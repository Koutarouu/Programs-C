/*6. Pedir al usuario una cadena de caracteres reservar memoria con malloc(),
almacenarlo en la memoria dinamica, posteriormente utilizar free() para liberar
el espacio de memoria utilizado. */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char string[20],*p_s,longitude;
	
	printf("Digite any string: ");
	gets(string);
	longitude=strlen(string);
	
	p_s =malloc((longitude+1)*sizeof(char));
	
	strcpy(p_s,string);
	
	printf("Cadena: %s",p_s);
	
	free(p_s);
	
	printf("\nString: %s",p_s);
	
	return 0;
}

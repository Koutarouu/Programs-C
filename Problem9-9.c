//9. Reservar memoria con calloc para una cadena de caracteres.


#include<stdio.h>
#include<stdlib.h>

int main(){
	char *c,palabra[50];
	
	printf("Digite una palabra (String): ");
	gets(palabra);
	
	//palabra\0 es final de la cadena por eso el +1
	
	c=calloc(strlen(palabra)+1,sizeof(char));
	
	strcpy(c,palabra);
	
	printf("Palabra: %s",c);
	free(c);
	return 0;
}

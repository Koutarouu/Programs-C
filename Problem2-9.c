/*2. Pedir una cadena de caracteres al usuario, posteriormente utilizar malloc para
reservar memoria para esa cadena de caracteres(string) */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char a[20],*p_a;
	int longitude;
	
	printf("Digite un string cualquiera: ");
	gets(a);
	longitude = strlen(a);
	p_a=malloc((longitude+1)*sizeof(char));
	//printf("%i",p_a);
	strcpy(p_a,a);
	printf("Cadena %s",p_a);
	
	return 0;
}

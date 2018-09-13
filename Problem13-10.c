/*13. Invertir una cadena con la funcion strrev(). */

#include<stdio.h>
#include<string.h>

int main(){
	char palabra[] = "diego";
	
	strrev(palabra); //Invertir la palabra ... hola - aloh
	
	printf("Palabra Invertida: %s",palabra);
	
	return 0;
}

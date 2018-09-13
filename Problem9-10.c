/*9. Utilizar la funcion strcmp() para comparar dos palabras. */

#include<stdio.h>
#include<string.h>

int main(){
	char palabra1[] = "Hola";
	char palabra2[] = "Hola que tal";
	
	if(strcmp(palabra1,palabra2)==0){
		printf("Ambas cadenas son iguales");
	}else{
		printf("Las cadenas son distintas");
	}
	
	return 0;
}

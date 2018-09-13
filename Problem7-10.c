/*7. Utilizar la funcion strcat() para añadir un texto a un string. */

//hola que tal? Mi nombre es Alejandro

#include<stdio.h>

int main(){
	char cad[]="Hola que tal";
	
	strcat(cad," Mi nombre es Diego");
	
	//cad = Hola que tal? Mi nombre es Diego
	
	printf("%s",cad);
	
	return 0;
}

/*3. Hacer 2 arrays de cadena de caracteres pedir el nombre al usuario guardarlo dentro de un
array y luego, copiar el contenido de ese array a otro.*/

#include<stdio.h>
#define TAM 20

int main(){
	char name1[TAM],name2[TAM];
	printf("type your name?");
	gets(name1); // nombre 1 = diego
	
	//name1=name2
	
	strcpy(name2,name1);
	
	printf("\n Your name is: %s",name2);
	
	return 0;
}

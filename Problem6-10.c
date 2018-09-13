/*6. Pedir al usuario que digite una cadena, luego copiar su contenido hacia otro
array de caracteres. y por ultimo modificar su mensaje poniendo a partir de la
posicion 10 "Buena broma".
*/


#include<stdio.h>

int main(){
	char cad1[30];
	char cad2[30];
	
	printf("Type any string: ");
	gets(cad1);
	
	strcpy(cad2,cad1);
	
	strcpy(cad2+10,"Buena broma");

	printf("%s",cad2);
	
	return 0;
}

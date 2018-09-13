/*6. Realice un programa que permita leer una cadena de caracteres y que devuelva
el numero de caracteres que tiene dicha cadena e imprima dicha cadena al reves.*/

#include<stdio.h>

int main(){
	char string[20];
	int i,count=0;
	
	printf("Write any string: ");
	gets(string);
	
	//printf("%d",strlen(string));
	for(i=strlen(string)-1;i>=0;i--){
		printf("\n%c",string[i]);
		count++;
	}
	
	printf("\nThe string of characters len is: %i",count);
	return 0;
}

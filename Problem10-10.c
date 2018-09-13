/*10. Pedir 2 nombres al usuario y comprar si son iguales o no. */

#include<stdio.h>
#include<string.h>

int main(){
	char name1[30],name2[30];
	
	printf("Nombre 1: ");
	gets(name1);
	printf("Nombre 2: ");
	gets(name2);
	
	if(strcmp(name1,name2)==0){
		printf("Ambos nombres son iguales");
	}else{
		printf("Los nombres son distintos");
	}
	
	return 0;
}

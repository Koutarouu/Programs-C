/*Comprobar si un numero digitado por el usuario es positivo o negativo*/

#include<stdio.h>

int main(){
	int n;
	
	puts("Digite un numero: ");scanf("%i",&n);
	
	if(n>=0){
		printf("El numero %i es positivo",n);
	}else{
		printf("El numero %i es negativo",n);
	}
	
	return 0;
}

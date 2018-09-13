/*1. Determinar si un numero es par o no.*/

#include<stdio.h>
void comprobar(int numero);

int main(){
	int x,numero;
	
	printf("Digite un numero: ");scanf("%i",&numero);
	
	comprobar(numero);
	
	return 0;
}

void comprobar(int numero){
	if(numero%2==0){
		printf("\n El numero es par");
	}
	else{
		printf("\n El numero es impar");
	}
	
}

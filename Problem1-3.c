// 1. Suma de los n primeros numeros

#include<stdio.h>

int main(){
	int count, n, suma=0;
	
	printf("Digite el total de numeros a sumar: ");scanf("%i",&n);
	
	count = 1;
	
	while(count <= n){
		suma+=count;
		count++;
	}
	
	printf("\nLa suma de los %i primeros numeros es: %i",n,suma);
	
	return 0;	
}


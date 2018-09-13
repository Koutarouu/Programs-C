/*Determina si un numero es par o impar*/

#include<stdio.h>

int main(){
	int n;
	
	printf("Digite un numero: ");scanf("%i",&n);
	
	if(n%2==0){
		printf("El numero %i es par", n);
	}else{
		printf("El numero %i es impar", n);
	}
	
	return 0;
}

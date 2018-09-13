/*2. Consideremos una funcion que recibe un numero n e imprime los numeros del n al 1.
Con recursividad */

#include<stdio.h>
int hastaN(int n);

int main(){
	int numero,i;
	
	printf("Digite un numero: ");scanf("%i",&numero);
	
	for(i=numero;i>0;i--){
		printf("%i.\n",hastaN(i));
	}

	return 0;
}

int hastaN(int n){
	if(n==1||n==0){
		return 1;
	}
	else{
		return hastaN(n-1)+1;
	}
	
}

//9. Determinar si un Numero es Primo o no.

#include<stdio.h>

int main(){
	int i, numero, count=0;
	
	printf("Digite un numero: ");scanf("%i",&numero);
	
	for(i=1;i<=numero;i++){
		if(numero%i==0){
			count++;
		}
	}
	if(count>2){
		printf("\n El numero es compuesto");
	}else{
		printf("\n El numero es primo");
	}
	return 0;
}

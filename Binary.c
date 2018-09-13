//3. Pasar de numero entero a numero binario con Recursividad

#include<stdio.h>
void binary(int n);

int main(){
	int numero;
	
	do{
		printf("Digite un numero: ");scanf("%i",&numero);
	}while(numero<0);
	
	binary(numero);
	
	return 0;
}

void binary(int n){
	if(n>1) binary(n/2);
	
	printf("%i", n%2);
}

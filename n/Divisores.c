/*Problema 2: Programe un algoritmo que, dados dos números enteros que entran como datos,
indique si uno es divisor del otro.
Restricciones: Uso de las estructuras de selección if-then-else.*/


#include<stdio.h>

int main(){
	int n1,n2;
	
	printf("Digite a numero 1: ");scanf("%i",&n1);
	printf("Digite a numero 2: ");scanf("%i",&n2);
	
	if (n1 > n2){
		if (n1%n2 == 0)
		{
			printf("Es divisor %i de %i",n1,n2);
		}
		else
			printf("%i no es divisor de %i",n1,n2);
		}
	else
		printf("No es divisor porque es mayor %i",n2); 
	
	return 0;	
}

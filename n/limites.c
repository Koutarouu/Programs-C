/*Problema 1: Diseñe un algoritmo que, dado un número real que entra como dato,
nos indique si está contenido dentro de los
límites predeterminados. El límite inferior es de 100 y el superior de 200.
Restricciones: Uso de las estructuras de selección if-then-else.*/

#include<stdio.h>

int main(){
	int n;
	
	printf("Digite un numero Real: ");scanf("%i",&n);
	
	if(n>=100 && n<=200){
		printf("Si se encuentra en el rango");
	}else{
		printf("No se encuentra en el rango");
	}
	
	return 0;	
}

/*Problema 1: Dise�e un algoritmo que, dado un n�mero real que entra como dato,
nos indique si est� contenido dentro de los
l�mites predeterminados. El l�mite inferior es de 100 y el superior de 200.
Restricciones: Uso de las estructuras de selecci�n if-then-else.*/

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

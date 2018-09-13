//11. Hacer un programa que calcule la suma de factoriales

#include<stdio.h>
int main(){
	int i,fact=1,suma=0,n;
	
	printf("Digita hasta donde quieres sumar los factoriales: ");scanf("%i",&n);
	
	for(i=1;i<=n;i++){
		fact *= i;
		suma+=fact;
	}
	
	printf("La suma de los factoriales es: %i",suma);


	return 0;
}

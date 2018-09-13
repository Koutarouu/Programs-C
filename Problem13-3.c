/*Imprimir suma de todos los numeros pares que hay desde 1 hasta n, y diga 
cuantos numeros hay.*/

#include<stdio.h>

int main(){
	int i,count=0,suma=0,n;
	
	printf("Ingrese hasta donde quiere su suma de numeros pares: ");scanf("%i",&n);
	
	for(i=1;i<=n;i++){
		if(i%2==0){
			suma+=i;
			count++;
		}
	}
	printf("De el 1 hasta el %i hay %i numeros pares cuya suma es: %i",n,count,suma);
	
	return 0;
}

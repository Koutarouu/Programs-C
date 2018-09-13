/*6. Programa que muestre una tabla de multiplicar hasta el 20 de un numero cualquiera
por pantalla, el numero se pedira en el programa principal. Usar procedimiento*/

#include<stdio.h>
void tabla20(int n);

int main(){
	int n;
	printf("Ingrese un numero: ");scanf("%i",&n);
	
	tabla20(n);

	return 0;	
}

void tabla20(int n){
	int i,mult=1;
	for(i=1;i<=20;i++){
		mult=n*i;
		printf("\n %i x %i = %i",n,i,mult);
	}
}

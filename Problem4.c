/*CALCULAR LONGITUDES DE CIRCUNFERENCIA*/

#include<stdio.h>

int main(){
	float PI=3.159248;
	float r, Longitud;
	
	printf("Ingrese el radio: ");
	scanf("%f",&r);
	
	Longitud=PI*r*2;
	
	printf("La longitud de un circulo con radio %.2f es igual a: %.2f",r,Longitud);

	return 0;
}


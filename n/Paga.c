/*Problema: Calcular la paga neta de un trabajador conociendo el número de horas trabajadas,
la tarifa horaria y la tasa de impuestos. */

#include<stdio.h>

int main(){
	float num_h,tarifa,impuestos,calcI,pagoN,tasa=10;
	float pagaB;
	printf("Ingrese el numero de horas trabajadas: ");scanf("%f",&num_h);
	printf("\nIngrese su tarifa: ");scanf("%f",&tarifa);
	printf("\nIngrese sus impuestos: ");scanf("%f",&impuestos);
	
	pagaB=num_h*tarifa;
	calcI=pagaB*tasa;
	pagoN=pagaB-impuestos;
	
	printf("\nSu Paga Bruta es de: %.2f",pagaB);
	printf("\nSus Impuestos son de: %.2f",calcI);
	printf("\nSu Pago Neta es de: %.2f",pagoN);
	
	return 0;
}

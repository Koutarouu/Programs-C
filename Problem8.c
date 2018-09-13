/*Dadas las horas trabajadas de una persona y el valor por hora.
Calcular su salario e imprimirlo*/

#include<stdio.h>


int main() {
	int horas_trabajadas,valor_hora,salario;
	
	printf("Ingresa las horas que trabajaste y el pago por hora: ");
	scanf("%i %i",&horas_trabajadas,&valor_hora);
	
	salario=horas_trabajadas*valor_hora;
	
	printf("Tu salario es de: %i", salario);

	return 0;
}

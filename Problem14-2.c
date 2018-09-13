/*14. Mostrar los meses del año, pidiendole al usuario un numero entre (1-12) 
y mostrar el mes al que corresponde*/

#include<stdio.h>


int main(){
	int mes;
	
	printf("Ingrese el numero correspondiente al mes del año que quiera ver: ");
	scanf("%i",&mes);
	
	switch(mes) {
		case 1:printf("Eligio el mes de Enero");break;
		case 2:printf("Eligio el mes de Febrero");break;
		case 3:printf("Eligio el mes de Marzo");break;
		case 4:printf("Eligio el mes de Abril");break;
		case 5:printf("Eligio el mes de Mayo");break;
		case 6:printf("Eligio el mes de Junio");break;
		case 7:printf("Eligio el mes de Julio");break;
		case 8:printf("Eligio el mes de Agosto");break;
		case 9:printf("Eligio el mes de Septiembre");break;
		case 10:printf("Eligio el mes de Octubre");break;
		case 11:printf("Eligio el mes de Noviembre");break;
		case 12:printf("Eligio el mes de Diciembre");break;
		default: printf("Ese mes no existe en este universo");
	}
	return 0;
}

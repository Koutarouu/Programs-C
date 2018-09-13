/*
Crea un programa llamado ex_5_12, que pida una fecha formada por tres valores numéricos
(día, mes y año), y determine si la fecha corresponde a un valor válido.
Pista: se debe tener presente el valor de los días en función de los meses y de los años. Es decir:
- Los meses 1, 3, 5, 7, 8, 10 y 12 tienen 31 días.
- Los meses 4, 6, 9 y 11 tienen 30 días.
- El mes 2 tiene 28 días, excepto cuando el año es divisible por 4, que tiene 29 días.

*/

#include<stdio.h>

int main(){
	
	int mes,anio,dia;
	printf("Digite Dia Mes y Anio: ");scanf("%i %i %i",&dia,&mes,&anio);
	
	if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
		if(dia<=31){
			printf("\nFecha Valida");
		}else{
			printf("\nFecha invalida");
		}
	}else if(mes==4 || mes==6 || mes==9 || mes==11){
		if(dia<=30){
			printf("\nFecha Valida");
		}else{
			printf("\nFecha invalida este dia solo tiene 30 dias");
		}
	}else if(mes==2){
		if(dia<=29 && anio%4==0){
			printf("\nEs año bisiesto y por eso febrero tiene 29 dias");
		}else if(dia<=28){
			printf("\nFecha valida");
		}else{
			printf("Fecha Invalida");
		}
	}
	printf("\nDia: %i Mes: %i Año: %i",dia,mes,anio);
	
	return 0;
}

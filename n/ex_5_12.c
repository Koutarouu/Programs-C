/*
Crea un programa llamado ex_5_12, que pida una fecha formada por tres valores num�ricos
(d�a, mes y a�o), y determine si la fecha corresponde a un valor v�lido.
Pista: se debe tener presente el valor de los d�as en funci�n de los meses y de los a�os. Es decir:
- Los meses 1, 3, 5, 7, 8, 10 y 12 tienen 31 d�as.
- Los meses 4, 6, 9 y 11 tienen 30 d�as.
- El mes 2 tiene 28 d�as, excepto cuando el a�o es divisible por 4, que tiene 29 d�as.

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
			printf("\nEs a�o bisiesto y por eso febrero tiene 29 dias");
		}else if(dia<=28){
			printf("\nFecha valida");
		}else{
			printf("Fecha Invalida");
		}
	}
	printf("\nDia: %i Mes: %i A�o: %i",dia,mes,anio);
	
	return 0;
}

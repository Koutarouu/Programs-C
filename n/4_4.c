/*Crea un programa llamado ex_4_4, que dado un número entero que designa un periodo de
tiempo expresado en segundos, imprima el equivalente en días, horas, minutos y segundos.
Por ejemplo: 24000 segundos serán 0 días, 6 horas, 40 minutos y 0 segundos.
Por ejemplo: 7400 segundos serán 0 días, 2 horas, 3 minutos y 20 segundos.*/

#include<stdio.h>

int main(){
	int s=0,si,d=0,h=0,m=0,mi=0;
	
	printf("Registre el numero en segundo que quiere pasar a fecha: ");scanf("%i",&si);
	
	m=si/60;
	h=m/60;
	d=h/24;
	s=si-(m*60);
	mi=m-(h*60);
	
	
	printf("%i dias, %i horas, %i minutos y %i segundos",d,h,mi,s);
	
	
	return 0;
}

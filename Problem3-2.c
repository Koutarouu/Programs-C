/*3. Visualizar la tarifa de la luz segun el gasto de corriente electrica
Para un gasto menor de 1.000Kwxh
La tarifa es 1.2m entre 1.000 y 1.850Kwxh es 1.0 y mayor de 1.850 Kwxh 0.9.*/

#include<stdio.h>
#define TARIFA1 1.2
#define TARIFA2 1.0
#define TARIFA3 0.9

int main(){
	float gasto, tasa;
	printf("Digite el total de gasto de energia: ");
	scanf("%f",&gasto);
	
	if(gasto <= 1000 && gasto>0){
		tasa = TARIFA1;
	}
	else if(gasto>1000 && gasto<1850){
		tasa = TARIFA2;
	}
	else if(gasto > 1850){
		tasa = TARIFA3;
	}
	
	printf("La tasa es a pagar es: %.2f", tasa);
	
	return 0;
}


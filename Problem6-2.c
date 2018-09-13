/*Ingrese un numero y calcule e imprima su raiz cuadrada. Si el numero es negativo
imprima el numero y un mensaje que diga "tiene raiz imaginaria"*/

#include<stdio.h>
#include<math.h>


int main() {
	float n,raizC;
	
	printf("Ingrese un numero: ");scanf("%f",&n);
	
	if (n>0){
		raizC=sqrt(n);
		printf("La raiz cuadrada de %.2f es %.2f",n,raizC);
	}else{
		printf("%.2f tiene raiz imaginaria",n);
	}
	
	return 0;
}

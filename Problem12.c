/*Calcular la media geometrica de tres numeros*/

#include<stdio.h>
#include<math.h>

int main(){
	float n1,n2,n3,media_geometrica;
	
	printf("Ingrese los tres valores de la media geometrica: ");
	scanf("%f %f %f",&n1,&n2,&n3);
	
	media_geometrica = sqrt(n1*n2*n3);
	
	printf("La media geometrica de tus tres numeros es: %.2f", media_geometrica);
	
	return 0;
}

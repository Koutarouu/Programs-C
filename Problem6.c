/*Calcular la media aritmetica de 3 numeros cualesquiero*/

#include<stdio.h>


int main(){
	
	float n1,n2,n3;
	float media;
	
	
	printf("Ingrese sus 3 calificaciones: ");
	scanf("%f %f %f",&n1,&n2,&n3);
	
	media=(n1+n2+n3)/3;

	printf("Su promedio es de: %.2f", media);
	
	return 0;
}

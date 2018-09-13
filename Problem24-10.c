/*24. Pedir dos cadenas (con numero flotante) al usuario, posteriormente multiplicar dichos
numeros y mostrar su resultado.
*/


#include<stdio.h>
#include<stdlib.h>

int main(){
	char cad1[5],cad2[5];
	float valor1,valor2,factor=0;
	
	printf("Digite una cadena numerica con parte decimal: ");
	gets(cad1);
	printf("Digite otra cadena numerica con parte decimal: ");
	gets(cad2);
	
	valor1 = atof(cad1);
	
	valor2 = atof(cad2);
	
	factor=valor1*valor2;
	
	printf("El producto de sus dos cadenas numericas es: %.2f",factor);
	
	return 0;
}

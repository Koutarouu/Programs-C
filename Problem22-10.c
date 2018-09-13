/*22. Pedir dos cadenas numericas al usuario. Luego Convertirlas a numeros enteros. Sumar los
valores y entregar el resultado.*/

#include<stdio.h>
#include<string.h>

int main(){
	char *cad1[20],*cad2[20];
	int valor1,valor2,suma;
	
	printf("Digite una cadena numerica: ");
	gets(cad1);
	printf("Digite otra cadena numerica: ");
	gets(cad2);
	
	valor1 = atoi(cad1);
	valor2 = atoi(cad2);
	suma=valor1+valor2;
	printf("La suma de sus dos cadenas numericas es: %i", suma);
	
	return 0;
}

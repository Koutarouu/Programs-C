//14. Hacer un bucle do...while para imprimir las letras minusculas del alfabeto

#include<stdio.h>

int main(){
	char letra = 'a';//61h
	
	do{
		printf("%c-\n",letra); //a
		letra++;
	}while(letra<='z');
	
	return 0;
}

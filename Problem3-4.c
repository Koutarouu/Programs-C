/*Hacer un programa que muestre un menu con las opciones sumar, restar, multiplicar y 
dividir, el programa solicitara una opcion y realizara la tarea elegida, se deben
usar procedimientos*/


#include<stdio.h>
void sumar();
void restar();
void multiplicar();
void dividir();
int main(){
	
	menu();
	
	return 0;
}

void menu(){
	int opc;
	
	do{
		printf("\n. Sumar");
		printf("\n. Restar");
		printf("\n. Multiplicar");
		printf("\n. Dividir");
		printf("\n. Salir");
		printf("\nOpcion: ");
		scanf("%i",&opc);
		
		switch(opc){
			case 1: sumar();break;
			case 2:	restar();break;
			case 3:	multiplicar();break;
			case 4:	dividir();break;
		}
	}while(opc != 5);
}

void sumar(){
	int n1,n2,suma=0;
	printf("Digite 2 numeros: ");
	scanf("%i %i",&n1,&n2);
	suma=n1+n2;
	printf("\n La suma es: %i",suma);
}

void restar(){
	int n1,n2,resta=0;
	printf("Digite 2 numeros: ");
	scanf("%i %i",&n1,&n2);
	resta=n1-n2;
	printf("\n La resta es: %i",resta);
}

void multiplicar(){
	int n1,n2,mult=0;
	printf("Digite 2 numeros: ");
	scanf("%i %i",&n1,&n2);
	mult=n1*n2;
	printf("\n La multiplicacion es: %i",mult);
}

void dividir(){
	int n1,n2,division=0;
	printf("Digite 2 numeros: ");
	scanf("%i %i",&n1,&n2);
	division=n1/n2;
	printf("\n La division es: %i",division);
}

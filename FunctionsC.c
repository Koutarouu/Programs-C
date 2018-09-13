/* Funciones:

	- Funciones sin retorno de valor:
	
		void nombreFuncion(params){
			Instrucciones...
		}
		
	- Funciones con retorno de valor:
	
		tipo_dato nombreFuncion(params){
			Instrucciones
			return expresion	
		}
*/
//1. Saludo por pantalla con funcion void
//2. Sumar 2 numeros

#include<stdio.h>
//Prototipos
void saludar();
int sumar(int n1, int n2);

int main(){
	int a,b,suma=0;
	
	printf("Digite 2 numeros: ");
	scanf("%i %i",&a,&b);
	
	//suma=sumar(a,b);
	printf("\n La suma es: %i",sumar(a,b));
	saludar();
	
	return 0;
}

void saludar(){
	printf("\nHola que tal?\n");
}

int sumar(int n1, int n2){
	int suma=0;
	
	suma=n1+n2;
	
	return suma;
}

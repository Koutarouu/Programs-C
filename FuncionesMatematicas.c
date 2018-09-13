/* Funciones Matematicas:
	
	ceil(x) 	-> Redondea al proximo entero mas cercano.
	fabs(x)		-> Devuelve el valor absoluto de x.
	floor(x)	-> Redondea por defecto al entero mas proximo.
	fmod(x,y)	-> Calcula el resto de la division de x/y.
	pow(x,y)	-> Calcula x elevado ala potencia y.
	sqrt(x)		-> Devuelve la raiz cuadrada de x.

*/

#include<stdio.h>
void funcion_matematica();

int main(){
	funcion_matematica();
}

void funcion_matematica(){
	int x,y,cambio=0;
	
	printf("Digite dos numeros: ");
	scanf("%i %i",&x,&y);
	
	cambio=pow(x,y);
	
	printf("%i", cambio);
	
}

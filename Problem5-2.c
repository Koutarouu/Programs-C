/*5. Calcular el mayor de dos numeros leidso del teclado y visualizarlo en pantalla.*/

#include<stdio.h>

int main() {
	int n1,n2;
	
	printf("Digite 2 numeros: ");scanf("%i %i",&n1,&n2);
	
	if(n1>n2){
		printf("\nEl mayor es : %i",n1);
	}else if(n2>n1){
		printf("\nEl mayor es : %i",n2);
	}else{
		printf("\nLos numeros son iguales");
	}
	
	
	return 0;
}

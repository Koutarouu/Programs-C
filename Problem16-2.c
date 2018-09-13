/*Hacer un menu que considere las siguientes opciones: 
caso1: Cubo de un numero
caso2: Numero par o impar
caso3: salir
*/

#include<stdio.h>

int main(){
	int opcion,n,cubo;
	
	printf("Ingrese la opcion que necesite: \n1.Cubo de un numero \n2. Numero par o impar \n3.Salir\n");
	scanf("%i",&opcion);
	
	switch(opcion){
		case 1: printf("\tCubo de un numero\n");
				printf("Ingresa un numero\n");
				scanf("%i",&n);
				cubo=n*n*n;
				printf("El cubo de %i es %i",n,cubo);
			
		break;
		case 2: printf("\tNumero par o impar\n");
				printf("Ingresa un numero\n");
				scanf("%i",&n);
				if (n%2==0){
					printf("El numero %i es par",n);
				}else{
					printf("El numero %i es impar",n);
				}
		
		break;
		case 3: break;
		default: printf("Opcion no valida");
	}
	return 0;
}

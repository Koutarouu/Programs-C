/*4. Programa quye pide por pantalla un numero del 1 al 10 y mediante un procedimiento
muestre por consola el numero escrito en letras.*/

#include<stdio.h>

int main(){
	
	menu();
	
	return 0;
}

void menu(){
	int opc;
	do{
		
		printf("\nIngrese un numero entre el 1 y el 10: ");scanf("%i",&opc);
		switch(opc){
			case 1: printf("\n UNO");break;
			case 2: printf("\n DOS");break;
			case 3: printf("\n TRES");break;
			case 4: printf("\n CUATRO");break;
			case 5: printf("\n CINCO");break;
			case 6: printf("\n SEIS");break;
			case 7: printf("\n SIETE");break;
			case 8: printf("\n OCHO");break;
			case 9: printf("\n NUEVE");break;
			case 10: printf("\n DIEZ");break;
			case 11: printf("\nSalir");
		}
	}while(opc!=11);
}


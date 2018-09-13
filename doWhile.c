/* Repeticion: El bucle do...while

	Sintaxis:
	
		do{
			Instrucciones... 
		}while(condicion)

do{
		printf("%i.\n",i);
		i++;
	}while(i<=10);
	
*/


//Mostrar los 10 PRIMEROS NUMEROS
//SALUDO

#include<stdio.h>

int main(){
	//int i;
	char opc;
	
	//i=1;
	
	do{
		fflush(stdin);
		printf("Hola");
		printf("\nDigite 's' para saludar nuevamente: ");
		scanf("%c",&opc);
	}while(opc=='s' || opc=='S');
	
	
	
	return 0;
}

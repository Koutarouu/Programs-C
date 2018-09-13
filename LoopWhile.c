/* La sentencia while

	Sintaxis:
	
	while(condicion){
		instructions;
	}
*/

//Mostrar los 10 primero numeros en pantalla - ascendente - descendente - Mostrar 5 asteriscos '*'

#include<stdio.h>

int main(){
	int i;
	
	i= 1;
	
	while(i<=5){
		printf("*\n");
		i++;
	}
	
	return 0;
}

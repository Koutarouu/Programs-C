/*12. Seleccionar un tipo de vehiculo e indicar el peaje a pagar segun un valor numerico
1 - turismo, peaje = $500.
2 - autobus, peaje = $3000.
3 - motocicleta, peaje = $300.
caso contrario - Vehiculo no autorizado.
*/

#include<stdio.h>

int main(){
	int n;
	printf("Ingrese su medio de transporte \n1 - turismo\n2 - autobus\n3 - motocicleta\n");
	scanf("%i",&n);
	
	switch(n){
		case 1:printf("Ha seleccionado turismo con el peaje de $500");break;
		case 2:printf("Ha seleccionado autobus con el peaje de $3000");break;
		case 3:printf("Ha seleccionado motocicleta con el peaje de $300");break;
		default: printf("Ha seleccionado un vehiculo no autorizado");
	}
	
	return 0;
}

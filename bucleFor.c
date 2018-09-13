/* El bucle for:

	Sintaxis:
	
		for(inicializacion; condicion; incremento){
			Instrucciones;
			...
		}
*/
//Mostrar los 10 primeros numeros - ascendente

#include<stdio.h>

int main(){
	int i;
	
	for(i=1;i<=100;i++){
		printf("%i No debo llegar tarde a clases.\n",i);
	}
	
	return 0;
}

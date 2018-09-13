/*2. Programa que tenga un array de 100 numeros aleatorios entre 1 y 1000. Una vez
creado organizarlo de tal manera que almacene los numeros pares en un array y los impares en otro
*/

#include<stdio.h>
#define TAM 100

int main(){
	int i,a[TAM],par[TAM],imp[TAM];
	
	srand(time(NULL));
	
	for(i=0;i<TAM;i++){
		a[i] =rand()% + (1000 + 1);
	}
	
	printf("Pares:\n\n");
	for(i=0;i<TAM;i++){
		if(a[i]%2==0){
			printf("%i.\n",a[i]);
		}
	}
	
	printf("\nImpares:\n\n");
	for(i=0;i<TAM;i++){
		if(a[i]%2==1){
			printf("%i.\n",a[i]);
		}
	}
	
	return 0;
}

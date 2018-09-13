/*10. Hacer un puntero array de tipo float, pedir al usuario el numero de elementos
luego reservar memoria dinamica con calloc, luego llenar el array, imprimir todos
los elementos, y por ultimo liberar el espacio de memoria dinamica utilizado
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	float *array;
	int i,n;
	
	printf("Digite el numero de elementos: ");scanf("%i",&n);
	
	array=calloc(n,sizeof(float));
	
	for(i=0;i<n;i++){
		printf("Digite un numero: ");
		scanf("%f",&array[i]);	
	}
	for(i=0;i<n;i++){
		printf("%.2f ",array[i]);
	}
	
	free(array);
	return 0;
}

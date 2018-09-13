//1. Copiar el contenido de un Array1 de 5 elementos hacia otro Array2.

#include<stdio.h>

int main(){
	int i,a[5]={1,2,3,4,5},b[5];
	/*for(i=0;i<5;i++){
		b[i]=a[i];
	}
	for(i=4;i>=0;i--){
		printf("%i",b[i]);
	}*/
	
	printf("Copiando Arrays");
	copiandoArrays(a,b,5);
	
	return 0;
}

void copiandoArrays(int a[],int b[], int tamanio){
	int i;
	
	for(i=0;i<tamanio;i++){
		b[i]=a[i];
	}
	
	for(i=0;i<tamanio;i++){
		printf("%i",b[i]);
	}
	
}

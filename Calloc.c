/* Funcion calloc()
	puntero=calloc(numero de elementos, tamaño de cada elemento);
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int *p1,i;
//	p1=calloc(1,sizeof(int));
//	*p1=15;
//	printf("%i",*p1);
	p1 =calloc(5,sizeof(int));
	//p1=malloc(5*sizeof(int));
	
	for(i=0;i<5;i++){
		printf("Digite un numero: ");
		scanf("%i",&p1[i]);
	}
	printf("\n\n");
	
	for(i=0;i<5;i++){
		printf("%i",p1[i]);
	}
	return 0;
}

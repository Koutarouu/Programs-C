/*6. Rellenar un array de 10 numeros, posteriormente utilizando punteros indicar
cuales son numeros pares y su posicion en memoria
*/

#include<stdio.h>

int main(){
	int i,a[10],*p_a;
	p_a=a;
	
	for(i=0;i<10;i++){
		printf("Digite un numero: ");scanf("%i",&a[i]);
	}
	
	for(i=0;i<10;i++){
		if(*p_a%2==0){
			printf("El numero %i es par",*p_a);
			printf("\nPosicion: %p",p_a);
			printf("\n\n");
		}
		p_a++;
	}
	
	
	return 0;
}

//6. Suma de pares desde n hasta m

#include<stdio.h>

int main(){
	int n,m,suma=0;
	
	printf("Digite dos numeros incio y fin de los numeros pares que quiera sumar: ");scanf("%i %i",&n,&m);
	
	
	while(n<=m){
		if(n%2==0){
			suma+=n;
		}
		n++;
	}
	printf("La suma total es: %i",suma);
	return 0;
}

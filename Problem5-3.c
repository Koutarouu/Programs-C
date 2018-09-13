// 5. Sumar 1-2+3-4....
/*

impares (+)
pares (-)

suma_pares=-2-4-6
suma_impares=1+3+5

suma=suma_pares+suma_impares

*/
#include<stdio.h>

int main(){
	int n,i,suma=0,suma_pares=0,suma_impares=0;
	
	printf("Digite el total de elementos a sumar: ");
	scanf("%i",&n);
	
	i=1;
	
	while(i<=n){
		if(i%2==0){
			suma_pares-=i;
		}else{
			suma_impares+=i;
		}
		
		i++;
	}
	
	suma=suma_pares+suma_impares;
	printf("La suma total es: %i",suma);
	
	return 0;
}



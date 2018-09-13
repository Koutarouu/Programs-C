//10. Factorial de un numero.

#include<stdio.h>

int main(){
	int i,fact=1,n;
	
	printf("Digite el numero para hallar el factorial: ");
	scanf("%i",&n);
	
	for(i=1;i<=n;i++){
		fact*=i;
	}
	
	printf("\n El factorial del numero dado es: %i",fact);


	return 0;
}

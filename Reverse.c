//Invertir un numero entero con recursividad

#include<stdio.h>
void reverse(int n);

int main(){
	int n;
	
	do{
		printf("Digite un numero: ");
		scanf("%i",&n);
	}while(n<0);
	
	reverse(n);
	
	
	return 0;	
}

void reverse(int n){
	printf("%i",n%10);
	if(n>10) reverse(n/10);
}

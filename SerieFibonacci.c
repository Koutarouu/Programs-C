//1. Serie Fibonacci con Recursividad

//1.1.2.3.4.5.8...

#include<stdio.h>
int fibonacci(int n);

int main(){
	int numero,i;
	
	printf("Digite el numero de elementos: ");scanf("%i",&numero);
	
	for(i=1;i<=numero;i++){
		printf("%i , ",fibonacci(i));
	}
	
	return 0;
}

/*
	0 1 1 2 3 5 8 ....
	fibonacci(1) = 1
	fibonacci(n) = fibonacci(n-1) + fibonacci(n-2);
*/

int fibonacci(int n){
	if(n<=1){
		return 1;
	}else{
		return(fibonacci(n-1)+fibonacci(n-2));
	}
}

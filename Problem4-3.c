// 3. Multiplos de 5 desde 1 hasta n


#include<stdio.h>

int main(){
	int n,i;
	
	printf("Digite el total de numeros a comprobar: ");scanf("%i",&n);
	
	i=1;
	
	while(i<=n){
		if(i%5==0){
			printf("%i\n",i);
		}
		i++;	
	}
	
	return 0;
}

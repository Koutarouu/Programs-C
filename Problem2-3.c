/*Digite un numero, si el numero supera a 10, multiplique los 10 primeros numeros,
sino, sumelos.*/

#include<stdio.h>

int main(){
	int n,count=1,mult=1,sum=0;
	
	printf("Digite un numero: ");scanf("%i",&n);
	
	if(n>10){
		while(count<=10){
			mult*=count;
			count++;
		}
		printf("La multiplicacion de los primeros 10 numeros es: %i",mult);
	}else{
		while(count<=10){
			sum+=count;
			count++;
		}
		printf("La suma de los primeros 10 numeros es: %i",sum);
	}
	
	return 0;
}


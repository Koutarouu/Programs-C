/*4. Determinar si un numero es primo o no; con punteros y ademas indicar en que
posicion de memoria se guardo el numero.*/
#include<stdio.h>

int main(){
	int n,i,contador=0;
	int *p_n=&n;
	
	printf("Digite un numero: ");
	scanf("%i",p_n);
	
	for(i=1;i<=*p_n;i++){
		if(*p_n%i==0){
			contador++;
		}
	}
	
	if(contador>2){
		printf("El numero %i no es primo: %p",*p_n,p_n);
	}else{
		printf("El numero %i es primo: %p",*p_n,p_n);
	}
	
	return 0;
}

/*2. Comprobar si un numero es par o impar, y señalar la posicion de memoria donde
se esta guardando el numero. Con punteros.
*/

#include<stdio.h>

int main(){
	int n,*p_n=&n;
	
	printf("Digite un numero: ");scanf("%i",&n);
	
	if(*p_n%2==0){
		printf("El numero es par: %p",p_n);
	}else{
		printf("El numero es impar: %p",p_n);
	}
	return 0;
}

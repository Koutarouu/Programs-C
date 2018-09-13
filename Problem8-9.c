/*8. Reservar memoria para un arreglo de 5 numeros rellenarlo con numeros que
digite el usuario, luego utilizar realloc para amplicar ese arreglo a 10 numeros
y agregar 5 numeros mas, por ultimo imprimir el arreglo resultante de 10 numeros.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int *p_num,*p_numsEx,i;
	
	p_num = malloc(5*sizeof(int));
	
	for(i=0;i<5;i++){
		printf("Digite un numero: ");scanf("%i",&p_num[i]);
	}

	//Ampliando la cadena de caracteres a 30 espacios
	
	p_numsEx=realloc(p_num,10*sizeof(int));
	for(i=0;i<5;i++){
		printf("Digite un numero: ");scanf("%i",&p_num[5+i]);
	}
	
	for(i=0;i<10;i++){
		printf("%i ",p_numsEx[i]);
	}
	
	free(p_numsEx);
	
	return 0;
}

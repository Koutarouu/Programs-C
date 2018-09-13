//3. Imprimir el alfabeto en mayuscula con Punteros

#include<stdio.h>

int main(){
	char letra,*p_letra=&letra; // Posicion de la letra
	
	for(letra='A';letra<='Z';letra++){
		printf("%c",*p_letra);
	}
	
	return 0;
}

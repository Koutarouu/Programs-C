/*Una distribuidora de motocicletas tiene una promocion de fin de año que consiste
en lo siguiente. Las motos marca Honda tienen un descuento del 5%, las marcas Yamaha del 8%
y las Suzuki del 10%, las otras marcas 2%*/

#include<stdio.h>

int main(){
	char marca[20];
	
	printf("De que marca quieres tu moto: ");
	gets(marca);
	
	if(strcmp(marca,"Honda")==0){
		printf("Tu moto tiene el 5 porciento de descuento");
	}else if(strcmp(marca,"Yamaha")==0){
		printf("Tu moto tiene el 8 porciento de descuento");
	}else if(strcmp(marca,"Suzuki")==0){
		printf("Tu moto tiene el 10 porciento de descuento");
	}else{
		printf("Tu moto tiene el 2 porciento de descuento");
	}
	
	
	
	return 0;
}

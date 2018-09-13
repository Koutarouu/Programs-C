//Busqueda Secuencial

//a[5] = {3,2,1,4,5}; dato=4

#include<stdio.h>

int main(){
	char a[5] = {'a','e','i','o','u'};
	char band='F';
	int dato,i;
	dato='l';
	//Busqueda Secuencial
	i=0;
	while((band=='F')&&(i<5)){
		if(a[i]==dato){
			band = 'V';
		}
		i++;
	}
	
	if(band=='F'){
		printf("El numero no existe en el array");
	}else if(band=='V'){
		printf("El numero existe, posicion: %i",i-1);
	}
	
	
	return 0;
}

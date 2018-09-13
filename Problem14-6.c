/*14. Array de 10 numeros desordenados, luego ordenarlos con el ordenamiento por
seleccion, posteriormente pedir un dato a buscar y utilizar la busqueda binaria para
determinar si existe o no.*/


#include<stdio.h>

int main(){
	int a[10] = {3,6,1,2,7,8,4,9,10,5};
	int inf,sup,mitad,temp,min,dato,i,j;
	char band='F';
	
	for(i=0;i<5;i++){
		min=i;
		for(j=i+1;j<=5;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	
	printf("Ascendente\n");
	for(i=1;i<=5;i++){
		printf("%i ",a[i]);
	}
	
	printf("Type any number: ");scanf("%i",&dato);
	
	//Busqueda Binaria
	
	inf=0;
	sup=10;
	
	while(inf<=sup){
		mitad=(inf+sup)/2;
		
		if(a[mitad]==dato){
			band='V';
			break;
		}
		if(a[mitad]>dato){
			sup=mitad;
			mitad=(inf+sup)/2;
		}
		if(a[mitad]<dato){
			inf=mitad;
			mitad=(inf+sup)/2;
		}
	}
	
	if(band=='F'){
		printf("El numero no existe");
	}else if(band=='V'){
		printf("El numero existe, en la pos: %i",mitad);
	}
	
	return 0;
}

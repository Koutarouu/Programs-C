//Ordenamiento por Seleccion

#include<stdio.h>

int main(){
	int a[5]={3,4,1,5,2};
	int i,j,temp,min;
	
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
	printf("\nDescendente\n");
	for(i=5;i>0;i--){
		printf("%i ",a[i]);
	}
	
	return 0;
}

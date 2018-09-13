//Metodo Burbuja

#include<stdio.h>

int main(){
	int array[5] = {2,3,1,5,4};
	int i,j,temp;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(array[j]>array[j+1]){
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
	
	//Ascendente
	for(i=0;i<5;i++){
		printf("%i ",array[i]);
	}
	
	printf("\n\n");
	
	//Descendente
	for(i=4;i>=0;i--){
		printf("%i ",array[i]);
	}
	return 0;
}

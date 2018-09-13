//9. Sum of 2 matrix

#include<stdio.h>
void sumar(int a[2][2],int b[2][2]);

int main(){
	int matrix1[2][2] = {{2,1},{1,2}};
	int matrix2[2][2] = {{1,2},{2,1}};
		
	sumar(matrix1,matrix2);
	
	return 0;
}


void sumar(int a[2][2],int b[2][2]){
	int suma[2][2];
	int i,j;
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			suma[i][j] = a[i][j] + b[i][j];
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%i ",suma[i][j]);
		}
		printf("\n");
	}
	
}

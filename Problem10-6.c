/*Sumar 2 matrices, pidiendo al usuario el numero de filas y columnas y ademas
los elementos de cada matriz, luego mostrar el resultado
*/

#include<stdio.h>
void sumar(int a[50][50],int b[50][50],int rows,int columns);

int main(){
	int matrix1[50][50],matrix2[50][50],rows,columns,i,j;
	
	printf("Type the number of rows: ");
	scanf("%i",&rows);
	printf("\nType the number of columns: ");
	scanf("%i",&columns);
	
	printf("\n\n");
	
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			printf("Type the number of matrix1[%i][%i]: ",i+1,j+1);
			scanf("%i",&matrix1[i][j]);
		}
	}
	
	printf("\n\n");
	
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			printf("Type the number of matrix2[%i][%i]: ",i+1,j+1);
			scanf("%i",&matrix2[i][j]);
		}
	}
	
	printf("\n\n");
	
	printf("Suma: \n");
	sumar(matrix1,matrix2,rows,columns);
	
	return 0;
}

void sumar(int a[50][50],int b[50][50],int rows,int columns){
	int suma[rows][columns];
	int i,j;
	
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			suma[i][j] = a[i][j] + b[i][j];
		}
	}
	
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			printf("%i ",suma[i][j]);
		}
		printf("\n");
	}
	
}

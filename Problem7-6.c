/*7. Hacer una matriz de tipo entera preguntandole al usuario el numero de filas y
el numero de columnas, rellenar la matriz y luego mostrarla en pantalla
*/

#include<stdio.h>

int main(){
	int matrix[50][50], rows,columns,i,j;
	
	printf("Type the number of rows: ");
	scanf("%i",&rows);
	printf("\nType the number of columns: ");
	scanf("%i",&columns);
	
	printf("\n\n");
	
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			printf("Type the number of matrix[%i][%i]: ",i+1,j+1);
			scanf("%i",&matrix[i][j]);
		}
	}
	
	printf("\n\n");
	
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			printf("%i ",matrix[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

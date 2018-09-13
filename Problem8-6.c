/* 8.Hacer una matriz de tipo entera de 2*2, llenarla de numeros y luego copiar
todo su contenido hacia otra matriz
*/

#include<stdio.h>

int main(){
	int i,j,matrix[2][2],matrix2[2][2];
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Digite un numero para la matriz [%i][%i]:",i+1,j+1);
			scanf("%i",&matrix[i][j]);
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			matrix2[i][j]=matrix[i][j];
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%i ",matrix2[i][j]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}

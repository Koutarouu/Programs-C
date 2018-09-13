/*Arrays Bidimensionales, Tablas o Matrices
	- Matrices de enteros **
	- Matrices de flotantes **
	- Matrices de caracteres **
*/

#include<stdio.h>

int main(){
	int matrix[2][3] = {{51,52,53},{54,55,56}};
	int filas,columnas;
	for(filas=0;filas<2;filas++){
		for(columnas=0;columnas<3;columnas++){
			printf("%i ",matrix[filas][columnas]);
		}
		printf("\n");
	}

//===================================================================

//	float matriz[2][3];
//	int i,j;
//	
//	for(i=0;i<2;i++){
//		for(j=0;j<3;j++){
//			printf("Digite un numero matriz[%i][%i]: ",i+1,j+1);
//			scanf("%f",&matriz[i][j]);
//		}
//	}
//	
//	for(i=0;i<2;i++){
//		for(j=0;j<3;j++){
//			printf("%.2f ",matriz[i][j]);
//		}
//		printf("\n");
//	}
	
//====================================================================
	char matriz[2][3] = {{'a','b','c'},{'d','e','f'}};
	int i,j;
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%c ",matriz[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}

/*15. Converir dos cadenas de minusculas a MAYUSCULAS con la funcion strupr().
Compararlas, y decir si son iguales. 
*/

#include<stdio.h>
#include<string.h>

int main(){
	char palabra1[] = "hola";
	char palabra2[] = "chao";
	
	//Convirtiendo a mayuscula
	strupr(palabra1);
	strupr(palabra2);
	
	if(strcmp(palabra1,palabra2)==0){
		printf("Ambas cadenas son iguales");
	}else{
		printf("Son distintas");
	}
	
	return 0;
}

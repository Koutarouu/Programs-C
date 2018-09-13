/*12. Hacer un array pidiendo al usuario el numero de elementos, y rellenar el array
con numeros digitados por el teclado, luego pedir al usuario un numero, y hacer una
busqueda secuencial para indicar si ese elemento existe o no, tambien entregar
posicion.
*/

#include<stdio.h>

int main(){
	int i,n,a[50],lenA,iw;
	char band='F';
	
	printf("Digite la longitud del arreglo: ");scanf("%i",&lenA);
	for(i=0;i<lenA;i++){
		printf("Digite un numero para el arreglo en pos [%i]: ",i);
		scanf("%i",&a[i]);
	}
	
	printf("Digite otro numero: ");
	scanf("%i",&n);
	
	iw=0;
	while((band=='F')&&(iw<lenA)){
		if(a[iw]==n){
			band='V';
		}
		iw++;
	}
	
	if(band=='F'){
		printf("El numero no existe en la lista");
	}else if(band=='V'){
		printf("El numero existe, en la posicion %i",iw-1);
	}
	
	
	return 0;
}

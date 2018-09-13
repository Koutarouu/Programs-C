/* Sean A, B y C tres variables enteras que representan las ventas de tres productos A, B y C,
respectivamente. Utilizando dichas variables, escribe las expresiones que representen cada una
de las siguientes afirmaciones:
a) Las ventas del producto A son las más elevadas.
b) Ningún producto tiene unas ventas inferiores a 200.
c) Algún producto tiene unas ventas superiores a 400.
d) La media de ventas es superior a 500.
e) El producto B no es el más vendido.
f) El total de ventas esta entre 500 y 1000.
*/

#include<stdio.h>
#include<string.h>

int main(){
	int a,b,c,total,media;
	
	printf("Digite las ventas de a b y c respectivamente: ");scanf("%i %i %i",&a,&b,&c);
	
	total=a+b+c;
	media=total/3;
	
	if(a>b && a>c){
		printf("\nLas ventas del producto A son las mas elevadas.");
	}
	if(a>=200 && b>=200 && c>=200){
		printf("\nNingun producto tiene ventas inferiores a 200.");
	}
	if(a>500 || b>500 || c>500){
		printf("\nAlgun producto tiene ventas superiores a 400.");
	}
	if(media>500){
		printf("\nLa media de ventas es mayor a 500");
	}
	if(a>b || c>b){
		printf("\nEl producto b no es el mas vendido.");
	}
	if(total>=500 && total<=1000){
		printf("\nEl total de ventas esta entre 500 y 1000");
	}
	
	
	return 0;
}

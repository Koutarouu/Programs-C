//Media aritmetica de 2 numeros con funcion

#include<stdio.h>
int media(int n1, int n2);

int main(){
	int n1,n2;
	
	printf("Digite 2 numeros: ");scanf("%i %i",&n1,&n2);
	
	printf("La media aritmetica de tus 2 numeros es: %i",media(n1,n2));
	
	return 0;
}


int media(int n1, int n2){
	int media=0;
	media=(n1*n2)/2;
	return media;
}

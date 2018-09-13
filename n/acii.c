/*Dada una variable c de tipo carácter, consultando una tabla ASCII escribe las expresiones que
representen las siguientes afirmaciones:
a) c es una vocal.
b) c es una letra minúscula.
c) c es un símbolo del alfabeto.
d) c es un caracter especial*/

#include<stdio.h>


int main(){
	int i;
	char c,vowels[] = {'a','e','i','o','u'};
	char minus[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char mayus[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	char special[]={'@',':','>','=','?','~','^','-','[','|',';','/'};
	printf("Digite un caracter: ");scanf("%c",&c);
	
	for(i=0;i<5;i++){
		if(c==vowels[i]){
			printf("\nEs una vocal");
		}
	}
	for(i=0;i<26;i++){
		if(c==minus[i]){
			printf("\nEs una minuscula");
		}
	}
	for(i=0;i<26;i++){
		if(c==minus[i] || c==mayus[i]){
			printf("\nSe encuentra en el alfabeto");
		}
	}
	for(i=0;i<12;i++){
		if(c==special[i]){
			printf("\nEs un caracter especial");
		}
	}
	
	return 0;
}

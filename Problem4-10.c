/*4. Leer un string con getchar() y contabilizar cuantas veces
aparece la vocal a,e,i,o,u e imprimir el contador de cada una.
*/

#include<stdio.h>

int main(){
	int c,conta=0,conte=0,conti=0,conto=0,contu=0;
	
	printf("Digite una frase (y luego ctrl-z): ");
	while((c=getchar())!=EOF){
		switch(c){
			case 'a': conta++; break;
			case 'e': conte++; break;
			case 'i': conti++; break;
			case 'o': conto++; break;
			case 'u': contu++; break;
		}
	}
	
	printf("La frase tiene: %i vocales a",conta);
	printf("\nLa frase tiene: %i vocales e",conte);
	printf("\nLa frase tiene: %i vocales i",conti);
	printf("\nLa frase tiene: %i vocales o",conto);
	printf("\nLa frase tiene: %i vocales u",contu);
	
	return 0;
}

/*3. Leer un string con getchar() y contabilizar cuantas vocales tiene. */

#include<stdio.h>

int main(){
	int c,cont=0;
	
	printf("Digite una frase (y luego ctrl-z): ");
	while((c=getchar())!=EOF){
		switch(c){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u': cont++;
		}
	}
	
	printf("La frase tiene: %i vocales",cont);
	
	return 0;
}

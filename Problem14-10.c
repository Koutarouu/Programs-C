/*14. Pedir una cadena al usuario y luego invertirla. diciendo ademas cuantos caracteres tiene.*/

#include<stdio.h>
#include<string.h>

int main(){
	char cadena[20];
	
	printf("Digite una cadena cualquiera: ");
	gets(cadena);
	
	strrev(cadena);
	
	printf("%s , %i",cadena,strlen(cadena));
	
	return 0;
}

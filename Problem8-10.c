/*8. Pedir una cadena al usuario, posteriormente utilizar la funcion strcat() para
añadir la frase "Que tengas un buen dia", al final de la cadena.
*/

#include<stdio.h>

int main(){
	char cad1[30];
	
	printf("Type any string: ");
	gets(cad1);
	
	strcat(cad1," Que tengas un buen dia");
	
	printf("%s",cad1);
	return 0;
}

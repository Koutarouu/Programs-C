/*2. Leer una cadena de caracteres con getchar() y contabilizar cuantos espacios
ocupa
*/

#include<stdio.h>
#include<string.h>

int main(){
	int c,a=0;
	
	while((c=getchar())!=EOF){
		putchar(c);
		a++;
	}
	printf("ocupa tantos espacios: %i",a);
	
	
	
	return 0;
}

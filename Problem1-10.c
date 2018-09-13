/*1. Utilizar las funciones getchar() y putchar() para leer e imrpimir un string.

getchar() se utiliza para leer carácter a carácter. La llamada a getchar()
devuelve el caracter siguiente del flujo de entrada stdin. En caso de error,
o de encontrar el fin de archivo, devuelve EOF (macro definida en stdio.h).

putchar() se utiliza para escribir en la salido (stdout) caracter a caracter.
El caracter que se escribe es el transmitido como argumento.
*/

#include<stdio.h>

int main(){
	int c;
	//mientras no sea el final de la cadena
	while(EOF != (c=getchar())){ // lee \ mientras c no haya llegado al final
		putchar(c); // imprime caracter a caracter
	}
	
	
	return 0;
}

/*5. Copiar la cadena de caracteres "Hola mundo" de un array a otro. Luego cambiar
la palabra "mundo" por "Y bienvenido al lenguaje C". 
*/
//hola Y bienvenido al lenguaje C
#include<stdio.h>

int main(){
	char cad1[]="Hola mundo";
	char cad2[30];
	
	strcpy(cad2,cad1); // copiando contenido cad1 hacia cad2
	
	strcpy(cad2+5,"Y bienvenido al lenguaje C");
	//Hola y bienvenido al lenguaje C
	printf("%s",cad2);
	
	return 0;
}

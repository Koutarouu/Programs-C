/*
Memoria dinamica
Funcion malloc()
La funcion malloc sirve para solicitar un bloque de memoria del tama�o suministrado 
como parametro. Devuelve un puntero ala zona de memoria concedida.

tipo *puntero
puntero=malloc(tama�o en bytes);

El tama�o se especifica en bytes. Se garantiza que la zona de memoria concedida no esta
ocupada por ninguna otra variable ni otra zona devuelta por malloc. Si malloc es incapaz
de conceder el bloque (p.ej. no hay memoria suficiente), devuelve un puntero nulo.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	char *a;
	
	a=(char *)malloc(sizeof(char));	// sizeof(int) tama�o de una variable entera

	*a='e';
	printf("%c",*a);

	return 0;
}

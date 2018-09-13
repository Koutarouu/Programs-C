/*1. Utilizar la funcion fopen(), para determinar si existe un archivo de texto (.txt)
o no. */

/* fopen(nombre de archivo , modo);
	
	nombre de archivo = cadena ... contiene el identificador externo del archivo
	modo = cadena 			   ... contiene el modo en que va a ser tratado el archivo

*/

#include<stdio.h>
#include<stdlib.h>

FILE *fd;

int main(){
	char direccion[] = "C:\\Users\\R.D.A\\Desktop\\swift\\C\\n\\new.txt";
	
	fd=fopen(direccion,"r"); //r = read -- leer
	
	if(fd == NULL){
		printf("El archivo no existe");
	}else{
		printf("Se encontro el archivo");
		printf("\nUbicacion: %s",direccion);
	}
	
	return 0;
}

/*4. Hacer un programa en C que cree un archivo de texto (.txt) llamado "Hola mundo", crear el archivo
en la carpeta que elija. */

#include<stdio.h>
#include<stdlib.h>

FILE *fd;

int main(){
	char direccion[] = "C:\\Users\\R.D.A\\Desktop\\swift\\C\\n\\holamundo.txt";
	
	fd = fopen(direccion,"w"); //w = write -- escribir -- crear
	
	if(fd==NULL){
		printf("No se puede crear el archivo");
	}else{
		printf("Se creo el archivo");
		printf("\nUbicacion: %s",direccion);
	}
	
	
	
	return 0;
}

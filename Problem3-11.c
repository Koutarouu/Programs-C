/*3. Hacer un programa en c que cree un archivo (.txt)*/

#include<stdio.h>
#include<stdlib.h>

FILE *fd;

int main(){
	char direccion[] = "C:\\Users\\R.D.A\\Desktop\\swift\\C\\n\\hola.txt";
	
	fd = fopen(direccion,"w"); //w = write -- escribir -- crear
	
	if(fd==NULL){
		printf("No se puede crear el archivo");
	}else{
		printf("Se creo el archivo");
		printf("\nUbicacion: %s",direccion);
	}
	
	return 0;
}

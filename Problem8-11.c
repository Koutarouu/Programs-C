/*8. Crear un archivo de texto (.txt) con el nombre de "hola mundo" en la carpeta que elijas, y dentro
del archivo copiar "Hola y Bienvenidos al Lenguaje de Programacion C". 
*/

#include<stdio.h>
#include<stdlib.h>

FILE *fd;


int main(){
	int c;
	char direccion[] = "C:\\Users\\R.D.A\\Desktop\\swift\\C\\n\\helloworld.txt";
	
	fd=fopen(direccion,"wt"); //wt = write text -- escribir texto
	
	if(fd==NULL){
		printf("Error al crear el archivo");
		return 1;
	}
	
	while((c = getchar()) != EOF){
		fputc(c,fd);
	}
	
	fclose(fd);
	
	return 0;
}

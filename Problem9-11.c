/*9.Tomar el archivo de texto (.txt) creado en el problema 7, y con la funcion fgetch() leer su contenido.
	fgetc(puntero_archivo)
*/

#include<stdio.h>
#include<stdlib.h>

FILE *fd;

int main(){
	int c;
	char direccion[]="C:\\Users\\R.D.A\\Desktop\\swift\\C\\n\\hello.txt";
	
	fd=fopen(direccion,"rt"); //rt=read text -- leer texto
	
	if(fd==NULL){
		printf("Error al tratar de leer el archivo");
		return 1;
	}
	
	while((c=fgetc(fd))!=EOF){
		if(c=='\n'){
			printf("\n");
		}else{
			putchar(c);
		}
	}
	
	fclose(fd);
	
	return 0;
}

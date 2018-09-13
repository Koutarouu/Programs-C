/*11. Agregar texto a un archivo txt*/

#include <stdio.h>
#include <stdlib.h>

FILE *fd;

int main(){
	int c;
	char direccion[] = "C:\\Users\\R.D.A\\Desktop\\swift\\C\\n\\helloworld.txt";
	
	fd = fopen(direccion, "at"); // at = add text - agregar texto
	
	if(fd == NULL){
		printf("Error al tratar de crear el archivo");
		return 1;
	}
	
	while((c=getchar())!=EOF){
		fputc(c,fd);
	}
	
	fclose(fd);
	return 0;
}

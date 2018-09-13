/*6.Hacer un programa en C, que cree 2 archivos de texto (.txt), y luego utilizar la funcion fclose()
para cerrarlos.
*/

#include<stdio.h>
#include<stdlib.h>

FILE *fd1,*fd2;

int main(){
	
	fd1 = fopen("C:\\Users\\R.D.A\\Desktop\\swift\\C\\n\\b1.txt","w+");
	fd2 = fopen("C:\\Users\\R.D.A\\Desktop\\swift\\C\\n\\b2.txt","w+");
	
	if(fd1==NULL || fd2==NULL){
		printf("No se ha podido comprobar los archivos");
	}else{
		printf("Si se pudieron crear los archivos");
	}
	
	//Cerrar los archivos con fclose()
	
	fclose(fd1);
	fclose(fd2);
	
	return 0;
}

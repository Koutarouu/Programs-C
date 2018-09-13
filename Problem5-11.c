/*5. MODOS DE APERTURA DE UN ARCHIVO. 

r--Abre para lectura.
w--Abre para crear nuevo archivo (si ya existe se pierden sus datos).
a--Abre para añadir al final.
r+--Abre archivo ya existente para modificar(leer/escribir).
w+--Crea un archivo para escribir/leer(si ya existe se pierden los datos).
a+--Abre el archivo para modificar(escribir/leer) al final.
Se utiliza la letra t para modo texto, la b para modo binario como Ultimo caracter de la cadena modo
(tambien se puede escribir como caracter intermedio). Por consiguiente, los modos de abrir un archivo
de texto:
rt,wt,at,r+t,w+t,a+t
y los modos de abrir un archivo binario son:
rb,wb,ab,r+b,w+b,a+b
5. Abrir 2 archivos de texto, después cerrar cada uno de ellos con fclose.
*/

#include<stdio.h>
#include<stdlib.h>

FILE *fd1,*fd2;

int main(){
	
	fd1 = fopen("C:\\Users\\R.D.A\\Desktop\\swift\\C\\n\\a1.txt","a+");
	fd2 = fopen("C:\\Users\\R.D.A\\Desktop\\swift\\C\\n\\a2.txt","a+");
	
	if(fd1==NULL || fd2==NULL){
		printf("No se ha podido comprobar los archivos");
	}else{
		printf("Si se pudieron comprobar los archivos");
	}
	
	//Cerrar los archivos con fclose()
	
	fclose(fd1);
	fclose(fd2);
	
	return 0;
}

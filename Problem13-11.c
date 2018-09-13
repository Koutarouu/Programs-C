/*13. Crear un archivo de texto (.txt), donde guardar los email de amigos.

	fprintf(puntero,informacion);
	fwrite(dato a guardar, tamaño, longitud, puntero);
*/

#include<stdio.h>
#include<stdlib.h>

FILE *fd;

struct datosPersonales{
	char nombre[20];
	char apellidos[20];
	char email[30];
}datos;

int main(){
	char direccion[] = "C:\\Users\\R.D.A\\Desktop\\swift\\C\\n\\emails.txt";
	char rpt;
	fd = fopen(direccion,"wt");
	
	if(fd==NULL){
		printf("Error al tratar de crear el archivo");
		return 1;
	}
	
	printf("\t.:AGENDA DE EMAIL:.");
	fprintf(fd,"\t.:AGENDA DE EMAIL:.");
	
	do{
		fflush(stdin);
		printf("\nNombre: ");gets(datos.nombre);
		printf("Apellidos: ");gets(datos.apellidos);
		printf("Email: ");gets(datos.email);
		
		fprintf(fd,"\n\nNombre: ");
		fwrite(datos.nombre,1,strlen(datos.nombre),fd);
		fprintf(fd,"\nApellidos: ");
		fwrite(datos.apellidos,1,strlen(datos.apellidos),fd);
		fprintf(fd," \nEmail: ");
		fwrite(datos.email,1,strlen(datos.email),fd);
		
		printf("Desea agregar mas contactos (s): ");
		scanf("%c",&rpt);
	}while(rpt == 's');
	
	fclose(fd);
	return 0;
}

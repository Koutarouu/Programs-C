/*
Ejercicio 15: Hacer un programa en C. para guardar los numeros de celular, que muestre un menu con las
siguientes opciones:
1. Crear (nombre,apellidos,celular)
2. Agregar mas contactos(nombre,apellidos,celular)
3. Visualizar contactos existentes
*/

#include<stdio.h>
#include<stdlib.h>

FILE *fd;

struct contactos{
	char nombre[20];
	char apellidos[20];
	char celular[20];
}datos;

void crear(){
	char direccion[]="C:\\Users\\R.D.A\\Desktop\\swift\\C\\n\\Contactos.txt";
	char rpt;
	fd = fopen(direccion,"wt");// wt - write text - escribir texto
	
	if(fd==NULL){
		printf("Error al tratar de crear el archivo");
		return 1;
	}
	
	printf("\n\t.:Creando Directorio de Emails\n");
	fprintf(fd,"\n\t.:MIS CONTACTOS\n");
	
	do{
		fflush(stdin);
		printf("\nDigite su nombre: ");gets(datos.nombre);
		printf("Digite sus Apellidos: ");gets(datos.apellidos);
		printf("Digite su Numero: ");gets(datos.celular);
		
		fprintf(fd,"\n\nNombre: ");
		fwrite(datos.nombre,1,strlen(datos.nombre),fd);
		fprintf(fd,"\nApellidos: ");
		fwrite(datos.apellidos,1,strlen(datos.apellidos),fd);
		fprintf(fd,"\nNumero: ");
		fwrite(datos.celular,1,strlen(datos.celular),fd);
		printf("Desea agregar mas contactos (s): ");
		scanf("%c",&rpt);
	}while(rpt=='s');
}

void agregar(){
	char direccion[] = "C:\\Users\\R.D.A\\Desktop\\swift\\C\\n\\Contactos.txt";
	char resp;
	
	fd = fopen(direccion,"at"); //at = add text - agregar texto
	
	if(fd==NULL){
		printf("Error al tratar de agregar al archivo");
		return 1;
	}
	
	printf("\n\t.:Agregando contactos:.\n");
	
	do{
		fflush(stdin);
		printf("Nombre: ");gets(datos.nombre);
		printf("Apellidos: ");gets(datos.apellidos);
		printf("Numero: ");gets(datos.celular);
		
		fprintf(fd,"\n\nNombre: ");
		fwrite(datos.nombre,1,strlen(datos.nombre),fd);
		fprintf(fd,"\nApellidos: ");
		fwrite(datos.apellidos,1,strlen(datos.apellidos),fd);
		fprintf(fd,"\nNumero: ");
		fwrite(datos.celular,1,strlen(datos.celular),fd);
		printf("Desea agregar mas contactos(s): ");
		scanf("%c",&resp);
	}while(resp=='s');
	
}

void visualizar(){
	int c;
	char direccion[] = "C:\\Users\\R.D.A\\Desktop\\swift\\C\\n\\Contactos.txt";
	
	fd = fopen(direccion,"r"); //r = read - leer
	
	if(fd==NULL){
		printf("Error al tratar de leer el archivo");
		return 1;
	}
	
	while((c=fgetc(fd))!=EOF){
		if(c=='\n'){
			printf("\n");
		}
		else{
			putchar(c);
		}
	}
}


int main(){
	int opc;
	
	do{
		printf("\n\t.:MENU.\n");
		printf("\n1. Crear");
		printf("\n2. Agregar mas contactos ");
		printf("\n3. Visualizar contactos existentes");
		printf("\n4. Salir");
		printf("\n\nOpcion: ");
		scanf("%i",&opc);
		
		switch(opc){
			case 1: crear();break;
			case 2: agregar();break;
			case 3: visualizar();break;
		}
	}while(opc!=4);
	
	
	return 0;
}

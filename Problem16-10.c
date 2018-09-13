/*16. Pedir al usuario su nombre, apellido, y ciudad en la que vive, posteriormente convertir
todo a MAYUSCULAS e imprimir los datos. (Utilizar una estructura) */

#include<stdio.h>
#include<string.h>

int main(){
	char nombre[20],apellido[20],ciudad[20];
	printf("Digite su nombre, apellido y ciudad: ");
	gets(nombre);gets(apellido);gets(ciudad);
	
	//Convirtiendo a mayuscula
	strupr(nombre);
	strupr(apellido);
	strupr(ciudad);
	
	printf("Nombre: %s \nApellido: %s \nCiudad: %s",nombre,apellido,ciudad);
	return 0;
}

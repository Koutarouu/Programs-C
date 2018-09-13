/*17. Pedir su nombre y apellidos al usuario (en mayuscula), posteriormente utilizar la funcion
strlwr() para convertir las MAYUSCULAS en minusculas e imprimir los datos.
*/

#include<stdio.h>
#include<string.h>

struct datos{
	char nombre[20];
	char apellidos[20];
}datos1;

int main(){
	printf("Digite sus nombres (MAYUSCULAS):");
	gets(datos1.nombre);
	printf("Digite sus apellidos (MAYUSCULAS):");
	gets(datos1.apellidos);
	
	//Convirtiendo a minusculas
	strlwr(datos1.nombre);
	strlwr(datos1.apellidos);
	
	printf("\nSu nombre: %s",datos1.nombre);
	printf("\nSu apellido: %s",datos1.apellidos);
	
	return 0;
}

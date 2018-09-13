/*17. Pedir el nombre de 3 familiares al usuario en Mayusculas, y posteriormente convertir los
datos a minusculas
*/

#include<stdio.h>
#include<string.h>

struct familia{
	char nombre_padre[20];
	char nombre_madre[20];
	char nombre_abuela[20];
}familia1;

int main(){
	printf("Digite el nombre de su padre (MAYUSCULAS):");
	gets(familia1.nombre_padre);
	printf("Digite el nombre de su madre (MAYUSCULAS):");
	gets(familia1.nombre_madre);
	printf("Digite el nombre de su abuela (MAYUSCULAS):");
	gets(familia1.nombre_abuela);
	
	//Convirtiendo a minusculas
	strlwr(familia1.nombre_padre);
	strlwr(familia1.nombre_madre);
	strlwr(familia1.nombre_abuela);
	
	printf("\nSu padre se llama: %s\nSu madre se llama: %s\nSu abuela se llama: %s",
	familia1.nombre_padre,familia1.nombre_madre,familia1.nombre_abuela);
	
	
	return 0;
}

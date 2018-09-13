/*4.Hacer un arreglo de estructura llamada atleta para N atletas que contenga los
siguientes miembros: nombre, pais, numero_medallas. y devuelva los datos 
(nombre,pais) del atleta que ha ganado el mayor numero de medallas.
*/

#include<stdio.h>
#include<stdlib.h>

struct atleta{
	char nombre[20];
	char pais[20];
	int n_medallas;
}atletas[100];
int main(){
	int i,n,pmay,pmen;
	float mayor=0.0 , menor = 999999999;
	
	printf("Digite el numero de atletas participantes: ");scanf("%i",&n);
	
	for(i=0;i<n;i++){
		fflush(stdin);
		printf("%i. Digite su nombre: ",i+1);
		gets(atletas[i].nombre);
		printf("%i. Digite su pais de origen: ",i+1);
		gets(atletas[i].pais);
		printf("%i. Cuantas medallas tiene? ",i+1);
		scanf("%i",&atletas[i].n_medallas);
		printf("\n");
	}
	
	for(i=0;i<n;i++){
		if(atletas[i].n_medallas > mayor){
			mayor=atletas[i].n_medallas;
			pmay=i;
		}
		if(atletas[i].n_medallas < menor){
			menor = atletas[i].n_medallas;
			pmen=i;
		}
	}
	
	printf("\n-Datos del atleta con Mayor Numero de medallas-\n");
	printf("\nNombre: %s",atletas[pmay].nombre);
	printf("\nPais: %s",atletas[pmay].pais);
	
	printf("\n-Datos del atleta con Menor Numero de medallas-\n");
	printf("\nNombre: %s",atletas[pmen].nombre);
	printf("\nPais: %s",atletas[pmen].pais);
	
	return 0;
}

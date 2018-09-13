/*19. Determinar si una palabra es capicua o no.*/

//reconocer-lool-somos-anitalavalatina

#include<stdio.h>
#include<string.h>

int main(){
	char palabra1[]="anitalavalatina";
	char palabra2[30];
	
	strcpy(palabra2,palabra1); //Copiando el contenido de palabra1 hacia palabra2
	//palabra2 = reconocer;
	
	strrev(palabra2); //Invirtiendo a palabra2
	
	if(strcmp(palabra1,palabra2)==0){
		printf("Es una palabra capicua o polindroma");
	}else{
		printf("No es capicua o polindroma");
	}
	
	return 0;
}

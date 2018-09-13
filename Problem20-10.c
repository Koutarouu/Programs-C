/*20. Pedir al usuario que digite una palabra. Luego mostrar la palabra invertida y comprobar si
es capicua.*/

#include<stdio.h>
#include<string.h>

int main(){
	char palabra[30];
	char palabra2[30];
	
	printf("Digite una palabra para ver si es capicua o no: ");
	gets(palabra);

	strcpy(palabra2,palabra);
	
	strrev(palabra2);
	
	if(strcmp(palabra,palabra2)==0){
		printf("Es una palabra capicua o polindroma");
	}else{
		printf("No es capicua o polindroma");
	}
	
	return 0;
}

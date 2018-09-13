/*Sentencia switch()

switch(selector){
	case etiqueta1 : sentencias1;break;
	case etiqueta2 : sentencias2;break;
	case etiqueta3 : sentencias3;break;
	default : sentencias;

}*/

//Ejemplo del numero

#include<stdio.h>

int main(){
	//int numero;
	char vocal;
	
	printf("Digite una vocal: ");
	scanf("%c",&vocal);
	
	//printf("Digite un numero entre (1-3): ");
	//scanf("%i",&numero);
	
	switch(vocal){
		case 'a': printf("\nVocal a");break;
		case 'e': printf("\nVocal e");break;
		case 'i': printf("\nVocal i");break;
		case 'o': printf("\nVocal o");break;
		case 'u': printf("\nVocal u");break;
		default: printf("Se equivoco, no es una vocal");
	}
	/*switch(numero){
		case 1: printf("\nEs el numero 1");break;
		case 2: printf("\nEs el numero 2");break;
		case 3: printf("\nEs el numero 3");break;
		default: printf("No a digitado un numero correcto");
	}
	*/
	return 0;
}

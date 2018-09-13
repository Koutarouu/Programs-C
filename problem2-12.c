/*2. Crea una lista simplemente enlazada de 3 caracteres, pidiendole al usuario
dichos caracteres.*/

#include<stdio.h>
#include<stdlib.h>


typedef struct{
	char caracteres;
	struct Nodo *next;
}Nodo;

Nodo *primer = NULL;
Nodo *ultimo = NULL;

void agregar (Nodo *nodo){
	
	nodo -> next = NULL;
	
	if(primer == NULL){
		primer = nodo;
		ultimo = nodo;
	}
	else{
		ultimo -> next = nodo;
		ultimo = nodo;
	}
}

int main(){
	char c1,c2,c3;
	
	printf("Digite 3 caracteres: ");
	scanf("%c %c %c",&c1,&c2,&c3);
	
	Nodo *primerNodo = malloc(sizeof(Nodo));
	primerNodo -> caracteres = c1;
	
	Nodo *segundoNodo = malloc(sizeof(Nodo));
	segundoNodo -> caracteres = c2;
	
	Nodo *tercerNodo = malloc(sizeof(Nodo));
	tercerNodo -> caracteres = c3;
	
	agregar(primerNodo);
	agregar(segundoNodo);
	agregar(tercerNodo);
	
	Nodo *i = primerNodo;
	
	while(i!=NULL){
		printf("%c\n",i->caracteres);
		i = i->next;
	}
	
	return 0;
}

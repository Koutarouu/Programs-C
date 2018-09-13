
#include<stdio.h>
#include<stdlib.h>

typedef struct{
	float numero;
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
	float n1,n2,n3;
	
	printf("Digite 3 numeros flotantes: ");
	scanf("%f %f %f",&n1,&n2,&n3);
	
	Nodo *primerNodo = malloc(sizeof(Nodo));
	primerNodo -> numero = n1;
	
	Nodo *segundoNodo = malloc(sizeof(Nodo));
	segundoNodo -> numero = n2;
	
	Nodo *tercerNodo = malloc(sizeof(Nodo));
	tercerNodo -> numero = n3;
	
	agregar(primerNodo);
	agregar(segundoNodo);
	agregar(tercerNodo);
	
	Nodo *i = primerNodo;
	
	while(i!=NULL){
		printf("%.2f\n",i->numero);
		i = i->next;
	}
	
	return 0;
}

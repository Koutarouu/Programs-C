/*Listas Enlazadas
Es una coleccion o secuencia de elementos dispuestos uno detras de otro, en la que cada elemento se
concecta al siguiente elemento por un <<enlace>> o <<puntero>>.

NODO
Dato1 - p -> Dato2 - p -> Dato3 - p -> Dato4
Clasificaion de Listas Enlazadas:
Las listas se pueden dividir en cuatro categorias:
1. Listas Simplemente Enlazadas
Cada nodo (elemento) contiene un unico enlace que conecta ese nodo al nodo siguiente o nodo sucesor.
La lista es eficiente en recorridos directos ((<<adelante>>)).

2. Listas Doblemente Enlazadas
Cada nodo contiene dos enlaces, uno a su nodo predecesor y otro a su nodo sucesor. La lista es eficiente
tanto en recorrido directo (<<adelante>>) como en recorrido inverso (<<atras>>).

3. Lista Circular Simplemente Enlazada
Una lista enlazada simplemente en la que el último elemento (cola) se enlaza al primer elemento (cabeza)
de tal modo que la lista puede ser recorrida en modo circular (<<en anillo>>).

4. Lista Circular Doblemente Enlazada
Una lista doblemente enlazada en la que ele ultimo elemento se enlaza al primer elemento y viceversa.
Esta lista se puede recorrer en modo circular (en anillo) tanto en direccion directa (<<adelante>>) como
inversa (<<atrás>>).

Operaciones en Listas Enlazadas:
Declaracion de los tipos nodo y puntero a nodo.
Inicializacion o creación.
Insertar elementos en una lista.
Eliminar elementos de una lista.
Buscar elementos de una lista (comprobar la existencia de elementos en la lista).
Recorrer una lista enlazada (visitar cada nodo de la lista).
Comprobar si la lista está vacía.

*/
//Lista Simplemente Enlazada

#include<stdio.h>
#include<stdlib.h>

typedef struct{
	int dato;
	struct Nodo *next;
}Nodo;

Nodo *primer = NULL; //PARA QUE NO LES PONGA NUMEROS RANDOM
Nodo * ultimo = NULL;
//5->6
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
	Nodo *primerNodo = malloc(sizeof(Nodo));
	primerNodo -> dato = 5;
	
	Nodo *segundoNodo = malloc(sizeof(Nodo));
	segundoNodo -> dato = 6;
	
	agregar(primerNodo);
	agregar(segundoNodo);
	
	Nodo *i = primerNodo;
	while(i!=NULL){
		printf("%i\n",i->dato);
		i = i->next;
	}
	
	return 0;
}

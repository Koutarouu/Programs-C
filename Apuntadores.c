/* Direcciones en Memoria
Cuando una variable se declara, se asocian tres atributos fundamentales con la
misma: su nombre, su tipo y su direccion en memoria.

int n=40;
printf("%i",n); //imprimira el valor de n. == 40
printf("%p"´,&n); //imprimira la posicion de memoria de n == 0x4fffd34

Ques es un puntero (apuntador)?
Un puntero es una variable que contiene la direccion de memoria de un dato o de otra
variable, Quiere esto decir, que el puntero apunta al espacio fisico donde esta el
dato o la variable.

Declaracion de un puntero:
tipo_de_dato *nombre_de_apuntador;

char *ch1,*ch2;
float *valor,porcentaje;
*/

#include<stdio.h>

int main(){
	int numero=40;
	int *p_numero;
//	printf("Dato: %i",numero); //Dato
//	printf("\nPosicion: %p",&numero); //Posicion en memoria
	
	p_numero=&numero;//&numero=Posicion de memoria de numero
	printf("Valor de la variable\n");
	printf("Dato: %i",numero);
	printf("\nDato: %i",*p_numero);
	
	printf("\n\nPosicion de memoria:\n");
	printf("Posicion: %p",&numero);
	printf("Posicion: %p",p_numero);
	
	return 0;
}

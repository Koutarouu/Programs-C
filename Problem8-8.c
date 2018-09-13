//8. Pedir una cadena de caracteres(string) al usuario, e indicar cuantas veces
//aparece la vocal a,e,i,o,u; en la cadena de caracteres.

#include<stdio.h>
void cuentaVocales(char *);

int main(){
	char nombre[20];
	
	printf("Digite cualquier texto: ");
	gets(nombre);
	
	cuentaVocales(nombre);
	
	return 0;
}

void cuentaVocales(char *s){
	int conta=0,conte=0,conti=0,conto=0,contu=0;
	
	while(*s){ // mientras que s no sea nulo
		switch(*s){
			case 'a':conta++; break;
			case 'e':conte++; break;
			case 'i':conti++; break;
			case 'o':conto++; break;
			case 'u':contu++; break;
		}
		s++;
	}
	printf("El numero de veces que aparece la a son: %i\n",conta);
	printf("El numero de veces que aparece la e son: %i\n",conte);
	printf("El numero de veces que aparece la i son: %i\n",conti);
	printf("El numero de veces que aparece la o son: %i\n",conto);
	printf("El numero de veces que aparece la u son: %i\n",contu);
}

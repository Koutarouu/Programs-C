/*21. Convertir una cadena (por ejemplo: "1234"), a un numero entero. Con la funcion atoi(). */

//"123124"


int main(){
	char *cad = "123400";
	int valor;
	
	valor = atoi(cad); //Convertir la cadena a numero entero
	
	printf("Numero entero: %i", valor);
	
	
	return 0;
}

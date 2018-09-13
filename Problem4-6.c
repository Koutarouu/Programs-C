/*4. Hacer 2 arrays de cadenas de caracteres, almacenar 2 nombres cada uno dentro 
de su respectiva variable, y luego intercambiar el contenido de los arrays*/


#include<stdio.h>
#define TAM 20

int main(){
	char name1[TAM],name2[TAM],temp[20];
	
	printf("Type your name: ");
	gets(name1);
	printf("\n Type your lastname: ");
	gets(name2);
	
	strcpy(temp,name2);
	strcpy(name2,name1);
	strcpy(name1,temp);
	
	printf("His first name is %s and his lastname is %s",name2,name1);
	
	return 0;
}

/*5. Realice un programa que lea un array el  sexo de los N estudiantes del curso
de Algoritmos y que determe cuantos hombres y cuantas mujeres se encuentrar en el 
grupo, suponiendo que los datos son extraidos alumno por alumno.
*/

#include<stdio.h>

int main(){
	int i,number,male=0,female=0;
	char students[30];
	
	printf("Enter the total number of students in the class: ");
	scanf("%i",&number);
	
	for(i=1;i<=number;i++){
		fflush(stdin);
		printf("\n %i. Type the sex of the student: ",i);
		gets(students);
		
		if(strcmp(students,"male")==0){
			male++;
		}else if(strcmp(students,"female")==0){
			female++;
		}
	}
	
	printf("\n The total of males is: %i",male);
	printf("\n The total of women is: %i",female);
	
	return 0;
}

/*10. Un alumno desea saber cu�l ser� su calificaci�n final en la materia de Algoritmos. Dicha calificaci�n se compone de los siguientes porcentajes:
� 55% del promedio de sus tres calificaciones parciales.
� 30% de la calificaci�n del examen final.
� 15% de la calificaci�n de un trabajo final.*/

#include<stdio.h>

int main(){
	float calif_examF,calif_trabF,parcial1,parcial2,parcial3, calificacion;
	
	printf("Ingrese sus calificaciones en este orden: 1.examenFinal2\n2.trabajoFinal\n3.parciales\n");
	scanf("%f %f %f %f %f",&calif_examF,&calif_trabF,&parcial1,&parcial2,&parcial3);
	
	calificacion=(((parcial1+parcial2+parcial3)/3)*.55)+(calif_examF*.3)+(calif_trabF*.15);
	
	printf("Tu calificacion es: %f", calificacion);
	
	return 0;
}

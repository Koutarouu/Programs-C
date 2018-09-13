/*Problema 3: Un triangulo rectángulo puede tener lados que sean todos enteros. El conjunto de tres valores enteros para los lados de un
triángulo rectángulo se conoce como una terna pitagórica. Estos tres lados deben satisfacer la relación de que la suma de los cuadrados de dos
lados es igual al cuadrado de la hipotenusa. Encuentre todas las ternas de Pitágoras para el cateto opuesto, cateto adyacente e hipotenusa,
todos ellos no mayores de 500.*/


#include<stdio.h>
#include <windows.h> 

int main(){
	int i,j,k,Sum_Cuadrados,op,ady,hip;
	 printf("Ternas Pitagoricas\n");
	 for (i=1;i<=500;i++)
		 {
		 hip=i*i;// eleva la hipotenusa al cuadrado
		 for (j=1;j<=500;j++)
		 {
			op=j*j;//eleva el cateto opuesto al cuadrado
			for (k=1;k<=500;k++){
				ady=k*k;//eleva el cateto adyacente al cuadrado
				Sum_Cuadrados=op+ady;
				if (Sum_Cuadrados==hip){//determina si existe
				// una terna pitagórica
					printf("\n cateto opuesto= %d,",j);
					printf(" cateto adyacente= %d,",k);
					printf(" cateto hipotenusa= %d",i);
					printf("\n Comprobacion: %d + %d = %d\n",op,ady,hip);
				}
			}
		}
	 }
	 Sleep(10000);
	 return 0; 
}

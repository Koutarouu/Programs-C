/*Problema 4: Escriba un programa que calcule el valor de ex
Recuerde que dicha constante matemática se calcula de la siguiente forma: ex=1+x/1!+x2/2!+x3/3!+...
Y el factorial de todo número se obtiene así: n!=n*(n-1)*(n-2)*(n-3)...1
*/
#include<stdio.h>
#include<windows.h>

int main(){
	int x,fact,potencia,i,j;
	float e;
	printf("Digite el valor de x: ");
	scanf("%d",&x);
	e=1.0;
	
	for(i=1;i<=10;i++){
		fflush(stdin);
		potencia=1;
		for(j=1;j<=i;j++){
			potencia=potencia*x;
		}
		fact=1;
		for(j=i;j>0;j--){
			fact=fact*i;
		}
		e=e+(potencia/fact);
	}
	printf("El valor de e es: %.2f",e);
	Sleep(10000);
	
	return 0;
}

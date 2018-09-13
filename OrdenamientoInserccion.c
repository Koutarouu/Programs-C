//Ordenamiento por inserccion

#include<stdio.h>


int main(){
	int a[5]={'a','e','i','o','u'};
	int i,pos,temp;
	
	for(i=0;i<5;i++){
		pos=i;
		temp=a[i];
		while((pos>0)&&(temp<a[pos-1])){
			a[pos]=a[pos-1];
			pos--;
		}
		a[pos]= temp;
	}
	printf("Ascendente\n");
	for(i=0;i<5;i++){
		printf("%c ",a[i]);
	}
	printf("\nDescendente\n");
	for(i=4;i>=0;i--){
		printf("%c ",a[i]);
	}
	
	
	return 0;
}

//25) Elabore um algoritmo que imprima a tabuada de 1 a 10.
#include<stdio.h>
int main(){
	int tabuada, i, j;
	printf("*Tabuadas*");
	printf("\n");
	for (i=0;i<=10;i++){
		printf("Tabuada do %d",i);
		printf("\n");
		for(j=0;j<=10;j++){
			tabuada = i*j;
			printf("%d x %d : %d",i,j,tabuada);
			printf("\n");
		}
		printf("\n");
	} 
}

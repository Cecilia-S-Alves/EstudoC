//24) Elabore um algoritmo que imprima a tabuada de um número que será informado pelo usuário.
#include<stdio.h>
int main(){
	int tabuada, i, num;
	printf("Escreva o número que deseja a tabuada: ");
	scanf("%d",&num);
	for (i=0;i<=10;i++){
		tabuada = i*num;
		printf("%d x %d : %d",num,i,tabuada);
		printf("\n");
	} 
}

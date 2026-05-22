//Elabore um algoritmo que leia vários números, e imprima o maior, menor e a média aritmética dos
//números. Considere que o número zero (0) finaliza a entrada de dados e não faz parte da
//sequencia.

#include<stdio.h>
int main(){
	int maior, menor, soma, count,num;
	float media;
	maior=-999999999;
	menor=9999999999;
	soma=0;
	count=0;
	media=0;
	printf("Digite um numero: ");
	scanf("%d",&num);
	while(num!=0){
		count = count + 1;
		soma = soma + num;
		if (num > maior){
			maior = num;
		}
		if (num< menor){
			menor = num;
		}
		printf("Digite um numero: ");
		scanf("%d",&num);
	}
	media = (soma/count);
	printf("O *maior* valor foi de: %d \n",maior);
	printf("O *menor* valor foi de: %d \n", menor);
	printf("a *Media* foi de: %f", media);
}


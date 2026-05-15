//21) Elabore um algoritmo que receba a idade e o peso de 12 pessoas. Calcular e imprimir as médias dos pesos das
//pessoas da mesma faixa etária. As faixas etárias são: de 0 a 18 anos, e maiores de 18 anos.
#include<stdio.h>
int main(){
	int idade, i, countmenor,countmaior;
	float peso, pesomenor, pesomaior, mediamenor,mediamaior;
	countmenor = 0;
	countmaior= 0;
	for(i=1;i<=12;i++){
		printf("Digite sua idade: ");
		scanf("%d",&idade);
		printf("Digite seu peso: ");
		scanf("%f",&peso);
		
		if (idade<=18){
			pesomenor=pesomenor+peso;
			countmenor= countmenor+1;
		}
		else{
			pesomaior=pesomaior+peso;
			countmaior+=1;
		}
	}
	mediamaior=pesomaior/countmaior;
	mediamenor=pesomenor/countmenor;
	printf("Media faxa etaria 0 a 18: %f", mediamenor);
	printf("Media faxa etaria maior que 18: %f", mediamaior);
}

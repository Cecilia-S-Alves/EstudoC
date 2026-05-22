//Elabore um algoritmo que leia a idade e sexo (M– masculino, F – feminino) de várias pessoas.
//Calcule e imprima a idade média, total de pessoas do sexo feminino, e o total de pessoas do sexo
//masculino. O algoritmo termina quando se digita 0 para a idade.

#include<stdio.h>
int main(){
	int idade, count, totalfem, totalmasc, sexo, totalidade;
	float idademedia;
	
	count = 0;
	totalfem=0;
	totalmasc=0;
	totalidade=0;
	
	printf("Digite a idade: ");
	scanf("%d",&idade);
	while(idade>0){
		count = count+1;
		totalidade = totalidade+ idade;
		printf("Digite o sexo: \n 1 - Masculino \n 2 - Feminino\n");
		scanf("%i",&sexo);
		switch (sexo){
			case 1: totalmasc = totalmasc+1; break;
			case 2: totalfem = totalfem+1; break;
			default: printf("Erro");
		}
		printf("Digite a idade: ");
		scanf("%d",&idade);
	}
	idademedia = (totalidade/count);
	printf("O total de pessoas do sexo *Masculino* foi de: %d \n",totalmasc);
	printf("O total de pessoas do sexo *Feminino* foi de: %d \n", totalfem);
	printf("a *Media* de idade foi de: %f", idademedia);
}

#include<stdio.h>
main()
{
	int num1,num2,soma,sub;
	printf("Informe um numero: ");
	scanf("%i",&num1);
	printf("Informe outro numero: ");
	scanf("%i",&num2);
	soma=num1+num2;
	sub=num1-num2;
	printf("A soma e: %d\n", soma);
	printf("A subtracao e: %d", sub);
}


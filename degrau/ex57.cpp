#include<stdio.h>
main(){
	float x,altura,numdegra;
	printf("digite a altura do degrau: ");
	scanf("%f",&x);
	printf("Digite a altura que tu quer chegar: ");
	scanf("%f",&altura);
	numdegra = altura/x;
	printf("Numero de degraus necessarios: %.0f",numdegra);
	
}

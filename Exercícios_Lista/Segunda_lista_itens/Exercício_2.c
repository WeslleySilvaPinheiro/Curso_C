//Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e
//mostre o valor do rendimento e o valor total depois do rendimento. Na situação de juros simples
//e composto.


#include <stdio.h>
#include <math.h>

int main(){

	float deposito, juros, tempo, juros_simples, juros_compostos, taxa ;

	printf("Digite o valor do deposito:\n");
	scanf("%f", &deposito);

	printf("Digite o valor do juros mensal:\n");
	scanf("%f", &juros);
	
	printf("Digite a quantidade de meses:\n");
	scanf("%f", &tempo);
	
	taxa = (juros / 100);
	juros_simples = (juros / 100) * deposito * tempo;
	juros_compostos = deposito * pow((1+taxa), tempo);

	printf("O juros simples correspodem: R$%.2f\n", juros_simples);
	printf("O juros compostos correspodem: R$%.2f", juros_compostos);
}


//Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule
//e mostre o valor do aumento e o novo salário. 

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float valor, aumento;
	
	printf("Digite o valor do salário:\n");
	scanf("%f", &valor);
	
	printf("Digite o valor do aumento em %%:\n");
	scanf("%f", &aumento);
	
	printf("O salário de R$%.2f com um aumento de %.2f%% será de R$%.2f.", valor, aumento, (aumento / 100) * valor + valor);
	
}

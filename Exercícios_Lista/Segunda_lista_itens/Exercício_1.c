//Fa�a um programa que receba o sal�rio de um funcion�rio e o percentual de aumento, calcule
//e mostre o valor do aumento e o novo sal�rio. 

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float valor, aumento;
	
	printf("Digite o valor do sal�rio:\n");
	scanf("%f", &valor);
	
	printf("Digite o valor do aumento em %%:\n");
	scanf("%f", &aumento);
	
	printf("O sal�rio de R$%.2f com um aumento de %.2f%% ser� de R$%.2f.", valor, aumento, (aumento / 100) * valor + valor);
	
}

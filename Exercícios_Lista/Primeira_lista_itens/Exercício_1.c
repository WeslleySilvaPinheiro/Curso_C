// Exerc�cio 1

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float numero_1, numero_2;
	float div, mult, soma, sub;
	
	printf("Bem vindo(a)!\nDigite o primeiro n�mero:");
	scanf("%f", &numero_1);
	
	printf("Digite o segundo n�mero:");
	scanf("%f", &numero_2);
	
	div = numero_1 / numero_2;
	mult = numero_1 * numero_2;
	soma = numero_1 + numero_2;
	sub = numero_1 - numero_2;
	
	printf("O resultado da soma entre %.2f e %.2f = %.2f\n", numero_1,numero_2, soma);
	printf("O resultado da subtra��o entre %.2f e %.2f = %.2f\n", numero_1,numero_2, sub);
	printf("O resultado da multiplica��o entre %.2f e %.2f = %.2f\n", numero_1,numero_2, mult);
	printf("O resultado da divis�o � entre %.2f e %.2f = %.2f\n", numero_1,numero_2, div);
}

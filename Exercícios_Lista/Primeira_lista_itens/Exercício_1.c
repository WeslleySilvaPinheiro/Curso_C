// Exercício 1

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float numero_1, numero_2;
	float div, mult, soma, sub;
	
	printf("Bem vindo(a)!\nDigite o primeiro número:");
	scanf("%f", &numero_1);
	
	printf("Digite o segundo número:");
	scanf("%f", &numero_2);
	
	div = numero_1 / numero_2;
	mult = numero_1 * numero_2;
	soma = numero_1 + numero_2;
	sub = numero_1 - numero_2;
	
	printf("O resultado da soma entre %.2f e %.2f = %.2f\n", numero_1,numero_2, soma);
	printf("O resultado da subtração entre %.2f e %.2f = %.2f\n", numero_1,numero_2, sub);
	printf("O resultado da multiplicação entre %.2f e %.2f = %.2f\n", numero_1,numero_2, mult);
	printf("O resultado da divisão é entre %.2f e %.2f = %.2f\n", numero_1,numero_2, div);
}

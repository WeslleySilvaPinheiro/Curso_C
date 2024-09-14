// Exercício 5

#include <stdio.h>
#include <locale.h> //biblioteca de tradução de localização

int main(){
	setlocale(LC_ALL, "Portuguese"); //criação de localização
	
	float valor; //inicialização da variável para armazenamento de memória.
	
	printf("Digite o valor do salário:"); //printf - impressão de palavras para informação.
	scanf("%f", &valor); //dados recebidos das inforamções.
	
	printf("O novo valor do salário é de R$%.2f\ncom um aumento de R$%.2f", valor * 1.25, valor * 1.25 - valor); //Resultado direto em código, por não ser reutilizado. 
	
}

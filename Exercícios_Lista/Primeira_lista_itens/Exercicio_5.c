// Exerc�cio 5

#include <stdio.h>
#include <locale.h> //biblioteca de tradu��o de localiza��o

int main(){
	setlocale(LC_ALL, "Portuguese"); //cria��o de localiza��o
	
	float valor; //inicializa��o da vari�vel para armazenamento de mem�ria.
	
	printf("Digite o valor do sal�rio:"); //printf - impress�o de palavras para informa��o.
	scanf("%f", &valor); //dados recebidos das inforam��es.
	
	printf("O novo valor do sal�rio � de R$%.2f\ncom um aumento de R$%.2f", valor * 1.25, valor * 1.25 - valor); //Resultado direto em c�digo, por n�o ser reutilizado. 
	
}

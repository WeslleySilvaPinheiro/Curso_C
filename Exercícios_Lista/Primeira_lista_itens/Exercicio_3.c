// Exercício 3
	
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float nota_a, nota_b, nota_c, peso_a, peso_b, peso_c;
	double media; //inicia variáveis para poder armazenar em memória.
	
	printf("Digite a primeira nota:\n"); 
	scanf("%f", &nota_a); //armazena a primeira nota.

	printf("Digite o peso da primeira nota entre (0 e 10):\n"); 
	scanf("%f", &peso_a); //armazena o primeiro peso.
	
	printf("Digite a segunda nota:\n");
	scanf("%f", &nota_b); //armazena a segunda nota.
	
	printf("Digite o peso da segunda nota entre (0 e 10):\n");
	scanf("%f", &peso_b); //armazena o segundo peso.
	
	printf("Digite a terceiro nota:\n");
	scanf("%f", &nota_c); //armazena a terceira nota.
	
	peso_c = 10 - peso_a - peso_b; //peso_c armazena um total de 10 como média - peso_a - peso_b resulta em peso_c .
	media = ((nota_a * peso_a) + (nota_b * peso_b) + (nota_c * peso_c)) / 10.0; //média é a soma de todas as notas * os pesos.
	
	
	printf("O terceiro peso foi de: %.2f\nmedia foi de %.2f", peso_c, media); //saida mostra a média peso_c e a média que está armazenando a soma é dividida pelo total dos pesos
	// no caso é dividido por 10 ou seja (média = soma das notas * pesos / 10 total de pesos possíveis.)
	

}

// Exerc�cio 3
	
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float nota_a, nota_b, nota_c, peso_a, peso_b, peso_c;
	double media; //inicia vari�veis para poder armazenar em mem�ria.
	
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
	
	peso_c = 10 - peso_a - peso_b; //peso_c armazena um total de 10 como m�dia - peso_a - peso_b resulta em peso_c .
	media = ((nota_a * peso_a) + (nota_b * peso_b) + (nota_c * peso_c)) / 10.0; //m�dia � a soma de todas as notas * os pesos.
	
	
	printf("O terceiro peso foi de: %.2f\nmedia foi de %.2f", peso_c, media); //saida mostra a m�dia peso_c e a m�dia que est� armazenando a soma � dividida pelo total dos pesos
	// no caso � dividido por 10 ou seja (m�dia = soma das notas * pesos / 10 total de pesos poss�veis.)
	

}

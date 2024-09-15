/*
Implemente um algoritmo para calcular o desvio padrão d de uma coleção
de n números reais, usando a seguinte fórmula:
*/
#include <stdio.h>
#include <math.h>

int main(){
	
	int i, j, n;
	float nota, media, soma=0, subtrair, quadrado, soma_quadrado=0, numero;
	
	printf("Digite a quantidade de numeros: ");
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		printf("Digite o %d numero: ", i+1);
		scanf("%f", &nota);
		soma += nota;
	}
	
	media = soma/n;
	
	printf("\nA media: %.2f\n", media);
	
	soma=0;//aqui eu reinicio a variável novamente para 0
	
	for(j=0;j<n;j++){
		printf("Digite o numero %d novamente: ",j+1);
		scanf("%f", &nota);
		subtrair = nota - media; // aqui eu tiro o valor da média de cada nota digitada novamente.
		quadrado = pow(subtrair, 2); // aqui usando pow eu gero o quadrado de cada numero.
		soma_quadrado += quadrado; // aqui eu armazeno o quadrado de cada um.
	}
	
	soma = soma_quadrado/n;
	
	printf("\nO desvio padrao: %.2f ", sqrt(soma));
	//printf("%d ", quadrado);
	return 0;
}

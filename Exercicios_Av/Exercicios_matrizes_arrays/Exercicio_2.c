/*
2) Faça um programa que some o conteúdo de dois vetores de tamanho 25 e armazene o resultado
em um terceiro vetor. Imprima os três vetores na tela.
*/
#include <stdio.h>

int main(){
	
	int vetor[5], vetor2[5], vetor3[5], i;
	
	for(i=0;i<5;i++){
		printf("\nDigite o %d numero [primeiro vetor]: ", i);
		scanf("%d", &vetor[i]);
	}
	
	//for(i=0;i<5;i++){
	//	printf("%d ", vetor[i]);
	//}
	
	for(i=0;i<5;i++){
		printf("\nDigite o %d numero [segundo vetor]: ", i);
		scanf("%d", &vetor2[i]);
	}
	
	//for(i=0;i<5;i++){
	//	printf("%d ", vetor2[i]);
	//}
	
	for(i=0;i<5;i++){
		vetor3[i] = vetor[i] + vetor2[i]; //somando primeira de cada linha
	}
	
	for(i=0;i<5;i++){
		printf("%d ", vetor3[i]);
	}
	
	return 0;
}

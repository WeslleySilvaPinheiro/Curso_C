/*
3) Escrever um programa que lê um vetor N de tamanho 20 e o imprime na tela. Em seguida, troque
o 1o elemento com o último, o 2a com o penúltimo, ... até o 10a com o 11o. Imprima o vetor N
modificado.
*/

#include <stdio.h>

int main(){
	
	int vetor[10], i;
	
	for(i=0;i<10;i++){
		printf("Digite o %d: ", i+1);
		scanf("%d", &vetor[i]);
	}
	
	for(i=0;i<10;i++){
		printf("%d ", vetor[i]);
	}
	
	for(i=0;i<10/2;i++){
		int tempo = vetor[i];
		vetor[i] = vetor[10 - 1 - i];
		vetor[10 - 1 -i] = tempo;
	}
	printf("\n");
	
	for(i=0;i<10;i++){
		printf("%d ", vetor[i]);
	}
	
	return 0;
	
}

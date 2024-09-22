/*
7) Fa�a um programa para ordenar um vetor com 100 n�meros inteiros. Imprima o vetor antes e
ap�s a ordena��o.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int i, troca, aux, vetor[100];
	
	srand(time(NULL));
	
	for(i=0;i<100;i++){
		vetor[i] = rand() % 1000;
	}
	
	printf("\nAntes da ordenacao:\n");
	for(i=0;i<100;i++){
		printf("%3d ", vetor[i]);
	}
	
	do{
		troca = 0;
		for(i=0;i<99;i++){
			if(vetor[i] > vetor[i+1]){
				aux = vetor[i];
				vetor[i] = vetor[i+1];
				vetor[i+1] = aux;
				troca = 1;
			}
		}
	}while(troca);
	
	printf("\nDepois da ordenacao:\n");
	for(i=0;i<100;i++){
		printf("%3d ", vetor[i]);
	}
}

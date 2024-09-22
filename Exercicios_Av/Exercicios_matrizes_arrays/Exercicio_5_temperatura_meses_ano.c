/*
5) Faça um programa que receba a temperatura média de cada mês do ano, armazenando-as em um
vetor. Ao final, mostre a maior e a menor temperatura do ano e em que mês ocorreram (mostrar o
mês por extenso: janeiro, fevereiro ...). Desconsidere empates.
*/

#include <stdio.h>

int main(){
	
	float vetor[12], c=0, m=1000;
	int i=0, indice, indice2;
	
	for(i=0;i<12;i++){
		printf("Digite a temperatura do %d: ", i+1);
		scanf("%f", &vetor[i]);
	}
	
	for(i=0;i<12;i++){
		if(vetor[i] > c){
			c = vetor[i];
			indice = i;
		}
		if(vetor[i] < m){
			m = vetor[i];
			indice2 = i;
		}
	}
	
	//printf("%d ", indice);
	printf("\nA MAIOR TEMPERATURA: %.2f° ", c);
	switch(indice){
		case 0:
			printf("Janeiro");
			break;
		case 1:
			printf("fevereiro");
			break;
		case 2:
			printf("marco");
			break;
		case 3:
			printf("abril");
			break;
		case 4:
			printf("maio");
			break;
		case 5:
			printf("junho");
			break;
		case 6:
			printf("julho");
			break;
		case 7:
			printf("agosto");
			break;
		case 8:
			printf("setembro");
			break;
		case 9:
			printf("outubro");
			break;
		case 10:
			printf("novembro");
			break;
		case 11:
			printf("Dezembro");
			break;
	}
	
	printf("\nA MENOR TEMPERATURA: %.2f° ", m);
	switch(indice2){
		case 0:
			printf("Janeiro");
			break;
		case 1:
			printf("fevereiro");
			break;
		case 2:
			printf("marco");
			break;
		case 3:
			printf("abril");
			break;
		case 4:
			printf("maio");
			break;
		case 5:
			printf("junho");
			break;
		case 6:
			printf("julho");
			break;
		case 7:
			printf("agosto");
			break;
		case 8:
			printf("setembro");
			break;
		case 9:
			printf("outubro");
			break;
		case 10:
			printf("novembro");
			break;
		case 11:
			printf("Dezembro");
			break;
	}
}

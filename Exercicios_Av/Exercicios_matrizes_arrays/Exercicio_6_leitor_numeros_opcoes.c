/*
6) Faça um programa que leia 10 números reais e os armazene em um vetor. Em seguida, leia um
código inteiro e faça uma das ações abaixo:
0 – finaliza o programa;
1 – imprime o vetor na ordem do início ao fim;
2 – imprime o vetor na ordem inversa (do fim para o início).
O programa deve funcionar até que o usuário digite 0 para finalizar.
*/
#include <stdio.h>

int main(){
	
	float vetor[10];
	int escolha, invertido = 9, aux;
	int i;
	
	for(i=0;i<10;i++){
		printf("Digite o %d numero: ", i+1);
		scanf("%f", &vetor[i]);
	}
	
	do{
		invertido = 9;
		aux = 0;
		i = 0;
		
		
		printf("\nEscolha uma das opcoes:"
				"\n0 - Sair do programa."
				"\n1 - Imprimir o vetor do inicio ao fim."
				"\n2 - Imprimir o vetor inverso.\n");
		printf("Escolha: ");
		scanf("%d", &escolha);
				
		switch(escolha){
			case 1:
				printf("\nVetor em ordem crescente:\n");
				printf("\n");
				for(i=0;i<10;i++)
					printf("%.2f ", vetor[i]);
				printf("\n");
				break;
			case 2:
				
				i = 0;
				
				printf("\nVetor invertido:\n");
				printf("\n");
				for(i=0;i<5;i++){
					aux = vetor[invertido];
					vetor[invertido] = vetor[i];
					vetor[i] = aux;
					invertido--;
				}
				printf("\n");
				
				for(i=0;i<=9;i++)
					printf("%.2f ", vetor[i]);
				printf("\n");
				break;
		}
	}while(escolha != 0);
	
	printf("\nFinalizando o programa...");
	return 0;
}

/*
Escreva um aplicativo que solicita ao usua´rio que insira o tamanho do lado
de um quadrado e, enta~o, exibe um quadrado vazio desse tamanho com
asteriscos. Seu programa deve trabalhar com quadrados de todos os
comprimentos de lado possi´veis entre 1 e 20.

*/
#include <stdio.h>

int main(){
	
	int i, j, num;
	
	printf("Digite um numero entre [1-20]: ");
	scanf("%d",&num);
	
	for(j=0;j<num;j++){
		printf("\n");
		for(i=0;i<num;i++)
			printf("* ");
	}
}

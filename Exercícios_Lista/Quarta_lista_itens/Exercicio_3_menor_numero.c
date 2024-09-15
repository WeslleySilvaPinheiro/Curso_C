/*
Escreva um aplicativo que localiza o menor de va´rios nu´meros inteiros.
Suponha que o primeiro valor lido especifica o nu´mero de valores a serem
inseridos pelo usua´rio.

*/

#include <stdio.h>

int main(){
	
	int i, escolha, menor, parametro=5000000;
	
	printf("Digite a quantidade de numero: ");
	scanf("%d", &escolha);
	
	for(i=0;i<escolha;i++){
		printf("\n\tDigite o %d valor: ", i+1);
		scanf("%d", &menor);
		
		if(menor < parametro){
			parametro = menor;
		}
	}
	printf("\nO menor valor digitado foi %d", parametro);
}

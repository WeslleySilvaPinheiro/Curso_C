/*
Escreva um aplicativo que localiza o menor de va´rios nu´meros inteiros.
Suponha que o primeiro valor lido especifica o nu´mero de valores a serem
inseridos pelo usua´rio.

*/
#include <stdio.h>

int main(){
	
	int i, impares=1, num=15;
	
	for(i=0;i<=15;i++){
		if(i%2!=0){
			impares = i * impares; 
			printf("%d ", impares);
		}
	}
	printf("%d ", impares);
}

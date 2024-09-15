/*
Faça um aplicativo que verifique se o número digitado n é um número
primo. Lembrando que todo número primeiro é divisível apenas por 1 ou por
ele mesmo.
*/

#include <stdio.h>

int main(){
	
	int i;
	int primo=1, n=0, numero=2;
	
	printf("Digite ate qual n quer saber: ");
	scanf("%d", &n);
	
	for(numero;numero<n;numero++){
		primo = 1; // verdadeiro
			
		for(i = 2; i * i <= numero;i++){
			if(numero % i ==0){
				primo = 0; // falso 
				break;
			}
	}
	
		if(primo){
			printf("%d ", numero);
		}
	}
}

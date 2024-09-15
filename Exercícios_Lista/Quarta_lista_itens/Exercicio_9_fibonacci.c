/*
 A série de Fibonacci é 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, … Os dois primeiros
termos são iguais a 1, e a partir do terceiro, o termo é dado pela soma dos
dois termos anteriores. Dado um número n= 3, exiba o n-ésimo termo da
série de Fibonacci. (Não use recursivo.)
*/
#include <stdio.h>
#include <stdint.h>

int main(){
	
	int i, n;
	
	long long int fibo_atual=0, proximo_fibo=1, termo;
	
	printf("Digite N>=3: ");
	scanf("%d", &n);
	
	printf("1: 0"
			"\n2: 1\n");
	
	for(i = 2; i < n; i++){
		termo = proximo_fibo; // 0 / 1 / 2 / 3 / 5 / 8 / 13 / 21
		proximo_fibo = fibo_atual + proximo_fibo; // 1 / 2 / 3 / 5 / 8 / 13 / 21 / 34
		fibo_atual = termo; // 0 / 1 / 2 / 3 / 5 / 8 / 13 / 21
		
		printf("%d: %lld\n", i+1, proximo_fibo);
	}
	
}

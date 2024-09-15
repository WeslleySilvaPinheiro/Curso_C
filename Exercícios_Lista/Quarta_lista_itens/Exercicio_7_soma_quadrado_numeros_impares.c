/*
O quadrado de um número natural n é dado pela soma dos n primeiros
números ímpares consecutivos. Por exemplo,
Dado um número n, calcule seu quadrado usando a soma de ímpares ao
invés de produto.

*/
#include <stdio.h>

int main(){
	
	int i, numero, numero_impar=1, somador;
	
	printf("Digite o numero para saber seu quadrado: ");
	scanf("%d", &numero);
	
	numero = numero * numero;
	
	printf("\nO quadrado: %d\n", numero);
	
	for(i=0;somador <= numero;i++){
		printf("+ %d ", numero_impar); 
		numero_impar += + 2;
		somador += numero_impar;
	}
	
	
}

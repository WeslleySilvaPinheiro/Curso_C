/* 
O quadrado de um n�mero natural n � dado pela soma dos n primeiros
n�meros �mpares consecutivos. Por exemplo,

1 =
2 1, 2 =
2 1 + 3, 3 =
2 1 + 3 + 5

Dado um n�mero n, calcule seu quadrado usando a soma de �mpares ao
inv�s de produto.
*/
#include <stdio.h>

int main(){
	
	int i, n, soma=0, numero_impar=1;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		soma += numero_impar;
		printf("%d+", numero_impar);
		numero_impar += 2;
	}
	printf("\nO quadrado de %d = %d", n, soma);
}

#include <stdio.h>
#include <math.h>

int main(){
	
	int n;
	int escolha, cubo;
	float raiz, cubica;
	
	printf("Digite o numero que deseja operar:");
	scanf("%d", &n);
	
	printf("\nEscolha uma das opcoes:"
			"\n1 - O numero digitado ao quadrado"
			"\n2 - O numero digitado ao cubo"
			"\n3 - A raiz quadrada do numero digitado"
			"\n4 - A raiz cubica do numero digitado"
			"\n5 - Sair");
	
	printf("\nDigite sua escolha: ");	
	scanf("%d", &escolha);
	
	cubo = (int)pow(n,3);
	raiz = sqrt(n);
	cubica = cbrt(n);
	
	switch(escolha){
		case 1:
			printf("O numero %d ao quadrado: %d", n, n * n);
			break;
		case 2:
			printf("O numero %d ao cubo: %d", n, cubo);
			break;
		case 3:
			if(n < 1){
				printf("Erro numero negativo nao permitido.");
			}else{
				printf("A raiz do numero %d: %.2f", n, raiz);
			}
			break;
		case 4:
			printf("A raiz cubica de %d: %.2f", n, cubica);
			break;
		case 5:
			break;
		}
	}

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
		
	float media, ponderada, nota1,nota2,nota3,nota4, divisao;
	int escolha;
	float peso1, peso2, peso3, peso4;
	
	printf("Escolha uma das op��es:\n");
	
	printf("\n\t1 - M�dia aritim�tica simples"
			"\n\t2 - M�dia ponderada"
			"\n\t3 - Sair.");
	printf("\n\tDigite sua escolha:");
	scanf("%d", &escolha);
	
	switch(escolha){
		case 1:
			printf("\n\tM�dia aritim�tica simples.");
			printf("\n\tDigite 4 notas A A A A: ");
			scanf("%f %f %f %f", &nota1,&nota2,&nota3,&nota4);
			
			media = (nota1 + nota2 + nota3 + nota4) / 4;
			
			printf("\n\tA m�dia �: %.2f", media);
			break;
		case 2:
			printf("\n\tM�dia ponderada.");
			printf("\n\tDigite 4 notas A A A A: ");
			scanf("%f %f %f %f", &nota1,&nota2,&nota3,&nota4);
			
			printf("\n\tDigite 4 pesos A A A A: ");
			scanf("%f %f %f %f", &peso1,&peso2,&peso3,&peso4);
			
			ponderada = (nota1*peso1) + (nota2*peso2) + (nota3*peso3) + (nota4*peso4);
			divisao = ponderada / 10;
			
			printf("\n\tA m�dia �: %.2f", divisao);
			
			break;
		case 3:
			printf("\n\tSaindo do sistema...");
			break;
		default:
			printf("\nOp��o inv�lida.");
	}
}

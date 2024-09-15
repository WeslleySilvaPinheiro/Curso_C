#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int escolha;
	float salario, salario_aumento;
	
	printf("Menu de opçoes:\n");
	printf("\n\t1 - Imposto"
			"\n\t2 - Novo salário"
			"\n\t3 - Classificação"
			"\n\t4 - Sair");
	printf("\n\tDigite sua escolha:");
	scanf("%d", &escolha);
	
	switch(escolha){
		case 1:
			printf("\nImposto:\n");
			printf("\n\tDigite o valor do salário:");
			scanf("%f", &salario);
			
			if(salario > 0){
				if(salario < 500){
					printf("\n\tO imposto devido é de R$%.2f", (salario * 1.05) - salario );
				}else if(salario >= 500 && salario <= 850){
					printf("\n\tO imposto devido é de R$%.2f", (salario * 1.10) - salario );
				}else if(salario > 850){
					printf("\n\tO imposto devido é de R$%.2f", (salario * 1.15) - salario );
				}
			}else{
				printf("\n\tO valor do salário não pode ser negativo");
			}
			break;
		case 2:
			printf("\nNovo salário:\n");
			printf("\n\tDigite o valor do salário:");
			scanf("%f", &salario_aumento);
			
			if(salario > 0){
				if(salario_aumento > 1500){
					printf("\n\tO novo salário é de R$%.2f", salario_aumento + 25 );
				}else if(salario_aumento >= 750 && salario_aumento <= 1500){
					printf("\n\tO novo salário é de R$%.2f", salario_aumento + 50);
				}else if(salario_aumento >= 450 &&  salario_aumento < 750){
					printf("\n\tO novo salário é de R$%.2f", salario_aumento + 75 );
				}else if(salario_aumento < 450){
					printf("\n\tO novo salário é de R$%.2f", salario_aumento + 100);
				}
			}else{
				printf("\n\tO valor do salário não pode ser negativo");
			}
			break;
		case 3:
			printf("\nClassificação:\n");
			printf("\n\tDigite o valor do salário:");
			scanf("%f", &salario_aumento);
			
			if(salario_aumento > 0){
				if(salario_aumento <= 700){
					printf("\n\tMal remunerado.");
				}else if(salario_aumento > 700){
					printf("\n\tBem remunerado.");
				}
			}else{
				printf("\n\tO valor do salário não pode ser negativo");
			}
			break;
		case 4:
			break;
		default:
			printf("\n\tNumero invalido");
	}
}

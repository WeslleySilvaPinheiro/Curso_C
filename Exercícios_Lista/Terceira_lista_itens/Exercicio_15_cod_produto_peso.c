#include <stdio.h>

int main(){
	
	int codigo_produto, pais;
	float peso_produto, preco, produto_imposto;
	
	printf("Digite o codigo do produto entre [1 - 10]:");
	scanf("%d", &codigo_produto);
	
	if(codigo_produto >= 1 && codigo_produto <=10){
		printf("\nDigite o peso do produto em KG: ");
		scanf("%f", &peso_produto);
		
		printf("\nDigite o codigo do pais de origem [1 - 3]: ");
		scanf("%d", &pais);
		
		if(pais >= 1 && pais <=3){
			printf("\n\tO peso do produto em Gramas: %.2fg", peso_produto * 1000);
			
			if(codigo_produto >= 1 && codigo_produto <= 4){
				preco = (peso_produto * 1000) * 10;
			}else if(codigo_produto >= 5 && codigo_produto <= 7){
				preco = (peso_produto * 1000) * 25;
			}else if(codigo_produto >= 8 && codigo_produto <= 10){
				preco = (peso_produto * 1000) * 35;
			}
			printf("\n\tO preco total do produto: R$%.2f", preco);
			
			if(pais == 1){
				printf("\n\tO Preco do imposto e de: R$0.00");
			}if(pais == 2){
				produto_imposto = preco * 0.15;
				printf("\n\tO preco do imposto e de: R$%.2f", produto_imposto);
				printf("\n\tO preco final do produto: R$%.2f", produto_imposto + preco);
			}if(pais ==3){
				produto_imposto = preco * 0.25;
				printf("\n\tO preco do imposto e de: R$%.2f", produto_imposto);
				printf("\n\tO preco final do produto: R$%.2f", produto_imposto + preco);
			}
		}
	}else{
		printf("Numero invalido.");
	}
}

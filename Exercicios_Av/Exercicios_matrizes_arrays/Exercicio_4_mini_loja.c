/*
Uma pequena loja de artesanato possui apenas um vendedor e comercializa 10 tipos de objetos
diferentes. O vendedor recebe um sal�rio de R$1100,00 acrescido de 5% do valor total de suas
vendas. O valor unit�rio dos objetos deve ser informado e armazenado em um vetor; a quantidade
vendida de cada objeto deve ficar em outro vetor, mas na mesma posi��o. Crie um programa que
receba os pre�os e as quantidades vendidas, armazenando-os em seus respectivos vetores. Depois,
determine e mostre:
a) A quantidade vendida, valor unit�rio e valor total de cada objeto. Ao final, dever�o ser mostrados
o valor total das vendas e o valor da comiss�o que ser� paga ao vendedor.
b) O valor do objeto mais vendido e sua posi��o no vetor (em caso de empates mostre todos
empatados).
*/

#include <stdio.h>

int main(){
	
	float precos[3], quantidades[3];
	float valor_total_vendas=0, comissao=0;
	int i;
	float mais_vendido=0;
	int posicao_mais_vendido[5];
	
	for(i=0;i<3;i++){
		printf("Digite a quantidade %d: ", i+1);
		scanf("%f", &quantidades[i]);
		
		printf("Digite o valor %d: ", i+1);
		scanf("%f", &precos[i]);
	}
	
	printf("\n\tQuantidade\tValor\t\tTotal Venda     Comissao");
	for(i=0;i<3;i++){
		printf("\n\t%2.2f", quantidades[i]);
		printf("\t\tR$%2.2f", precos[i]);
		printf("\t\tR$%2.2f", precos[i] * quantidades[i]);
		printf("\tR$%2.2f", (precos[i] * quantidades[i]) * 0.05);
		
		valor_total_vendas += precos[i] * quantidades[i];
		comissao += (precos[i] * quantidades[i]) * 0.05;
	}
	
	printf("\n\n\tVendas Totais: R$%.2f", valor_total_vendas);
	printf("\n\tComissao Total: R$%.2f", comissao);
	
	for(i=0;i<3;i++){
		if(quantidades[i] >= mais_vendido){
			mais_vendido = precos[i];
			posicao_mais_vendido = i;
		}
	}
	
	printf("\n\tO valor do objeto mais vendido: R$%.2f", mais_vendido);
	printf("\n\tSua posicao: %d", posicao_mais_vendido);
}

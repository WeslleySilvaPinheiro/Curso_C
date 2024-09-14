//Pedro comprou um saco de ração com peso em quilos. Ele possui dois gatos, para os quais
//fornece a quantidade de ração em gramas. A quantidade diária de ração fornecida para cada
//gato é sempre a mesma. Faça um programa que receba o peso do saco de ração e a
//quantidade de ração fornecida para cada gato, calcule e mostre quanto restará de ração no
//saco após cinco dias.

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float racao, gramas, quantidade, dias, resultado;
	
	printf("Digite a quantidade de KG compradas:\n");
	scanf("%f", &racao);
	
	printf("Digite a quantidade de ração fornecida por dia para cada gato:\n");
	scanf("%f", &quantidade);
	
	gramas = racao * 1000;
	dias = gramas - quantidade * 2;
	resultado = (dias / quantidade) / 2;
	
	if(racao > 0){
		printf("A quantiadade de ração comprada em KG equivale: %.2f, gramas: %.2f.\n", racao, gramas);
		printf("A quantiadade de gramas restante equivale: %.2f.\n", dias);
		printf("A ração restante vai durar certa de:%.1f dia(s) para os dois gatos.\n", resultado);
	}else{
		printf("Digite um valor maior que 0\n");
	}
	
}

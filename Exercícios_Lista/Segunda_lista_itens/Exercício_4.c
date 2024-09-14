//Pedro comprou um saco de ra��o com peso em quilos. Ele possui dois gatos, para os quais
//fornece a quantidade de ra��o em gramas. A quantidade di�ria de ra��o fornecida para cada
//gato � sempre a mesma. Fa�a um programa que receba o peso do saco de ra��o e a
//quantidade de ra��o fornecida para cada gato, calcule e mostre quanto restar� de ra��o no
//saco ap�s cinco dias.

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float racao, gramas, quantidade, dias, resultado;
	
	printf("Digite a quantidade de KG compradas:\n");
	scanf("%f", &racao);
	
	printf("Digite a quantidade de ra��o fornecida por dia para cada gato:\n");
	scanf("%f", &quantidade);
	
	gramas = racao * 1000;
	dias = gramas - quantidade * 2;
	resultado = (dias / quantidade) / 2;
	
	if(racao > 0){
		printf("A quantiadade de ra��o comprada em KG equivale: %.2f, gramas: %.2f.\n", racao, gramas);
		printf("A quantiadade de gramas restante equivale: %.2f.\n", dias);
		printf("A ra��o restante vai durar certa de:%.1f dia(s) para os dois gatos.\n", resultado);
	}else{
		printf("Digite um valor maior que 0\n");
	}
	
}

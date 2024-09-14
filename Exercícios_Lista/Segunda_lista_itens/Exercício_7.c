//7. Faça um programa que receba dois números e mostre o maior.

#include <locale.h>
#include <stdio.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float numero_1, numero_2;
	
	printf("Digite o primeiro número:\n");
	scanf("%f", &numero_1);
	
	printf("Digite o segundo numero:\n");
	scanf("%f", &numero_2);
	
	if(numero_1 > numero_2){
		printf("O primeiro é maior.", numero_1);
	}else if(numero_2 > numero_1){
		printf("O segundo é o maior.", numero_2);
	}else{
		printf("Ambos são iguais.");
	}
}

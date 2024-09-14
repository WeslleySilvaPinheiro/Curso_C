//Faça um programa que receba três notas de um aluno, calcule e mostre a média aritmética e a
//mensagem que segue a tabela abaixo.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float nota_1,nota_2,nota_3, calculo;
	
	printf("Digite o valor da primeira nota:\n");
	scanf("%f",&nota_1);
		
	printf("Digite o valor da segunda nota:\n");
	scanf("%f",&nota_2);

	printf("Digite o valor da terceira nota:\n");
	scanf("%f",&nota_3);
	
	calculo = (nota_1 + nota_2 + nota_3) / 3;
	
	if(calculo < 2.99){
		printf("A média aritimética das notas foi de: %.2f (REPROVADO).", calculo);
	}else if( calculo < 6.99){
		printf("A média aritimética das notas foi de: %.2f (EXAME).", calculo);
	}else{
		printf("A média aritimética das notas foi de: %.2f (APROVADO).", calculo);
	}
	
}

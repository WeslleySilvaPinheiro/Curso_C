//Escreva um programa que leia a quantidade em segundos e imprima o resultado em dias,
//horas, minutos e segundos.


#include <stdio.h>
#include <locale.h>

int main(){

	int segundos, min, horas, dias,seg;

	printf("Digite a quantidade de segundos:\n");
	scanf("%d",&segundos);
	
	dias = segundos / (24 * 3600);
	horas = (segundos % (24 * 3600))/ 3600;
	min = (segundos % 3600) / 60;
	seg = segundos % 60;

	printf("%d:%d:%d:%d:", dias, horas, min, seg);
}


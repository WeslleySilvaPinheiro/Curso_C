/*
Um funciona´rio de uma empresa recebe aumento salarial anualmente.
Sabe-se que:
a. Esse funciona´rio foi contratado em 2005, com sala´rio inicial de R$
1.000,00;
b. Em 2006 recebeu aumento de 1.5% sobre seu sala´rio inicial;
c. A partir de 2007 (inclusive), os aumentos salariais sempre
corresponderam ao dobro
do percentual do ano anterior.
Fac¸a um programa que determine o sala´rio atual desse funciona´rio.

*/

#include <stdio.h>

int main(){
	
	int i;
	float salario=1000, aumento = 0.015;
	
	for(i=2006;i<2025;i++){
		
		salario = salario*aumento+salario;
		aumento = aumento*2;
		printf("\n%31.f ", salario);
	}
	
}

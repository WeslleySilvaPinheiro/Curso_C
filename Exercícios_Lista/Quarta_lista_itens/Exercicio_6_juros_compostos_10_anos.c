/*
Uma pessoa investe US$ 1.000 em uma conta-poupanc¸a que rende juros
de 5% ao ano. Supondo que todo o juro seja aplicado, calcule e imprima a
Lista 4 - Estrutura da Repetição - Noturno 2
quantia de dinheiro na conta no fim de cada ano por 10 anos. Utilize a
seguinte fo´rmula para determinar as quantidades:
onde
p e´ a quantia original investida (isto e´, o principal)
r e´ a taxa de juros anual (por exemplo, utilize 0,05 para 5%)
n e´ o nu´mero de anos
a e´ a quantia em depo´sito no fim do n-e´simo ano.

*/
#include <stdio.h>
#include <math.h>

int main(){
	
	int i;
	float soma, entrada=1000;

	for(i=0;i<10;i++){
		soma = entrada * pow((1 + 5.0 / 100), i + 1);
		printf("\nO juros no %d ano foi de: R$%.2f", i+1, soma);
	}
	
	
}

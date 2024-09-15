/*
Uma aplicac¸a~o interessante dos computadores e´ exibir diagramas e
gra´ficos de barras.
Escreva um aplicativo que leia cinco nu´meros entre 1 e 30. Para cada
nu´mero que e´ lido, seu programa deve exibir o mesmo nu´mero de
asteriscos adjacentes. Por exemplo, se seu programa le^ o nu´mero 7, ele
deve exibir *******. Exiba as barras dos asteriscos depois
de ler
os cinco nu´meros.

*/
#include <stdio.h>

int main(){
	
	int i, numero, a1,a2,a3,a4,a5, j;
	
	for(i=0;i<5;i++){
		printf("\n\tDigite %d numero entre [1-30]: ", i+1);
		scanf("%d", &numero);
		
		if(numero < 1 || numero > 30)
			printf("Numero invalido");
		else
			for(j=0;j<=numero;j++)
				printf("* ");	
		
	}
}


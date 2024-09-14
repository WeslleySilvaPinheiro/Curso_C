//Escreva um aplicativo que insere um número consistindo em cinco dígitos do usuário, separa o
//número em seus dígitos individuais e imprime os dígitos separados uns dos outros por três
//espaços cada. Por exemplo, se o usuário digitar o número 42339, o programa deve imprimir:
//4 2 3 3 9.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int numero,n1,n2,n3,n4,n5;
	
	printf("Digite cinco números:");
	scanf("%d",&numero);
	
	n1 = numero / 10000;
	n2 = (numero / 1000) % 10;
	n3 = (numero / 100) % 10;
	n4 = (numero / 10) % 10;
	n5 = numero % 10;
	
	printf("\n%d %d %d %d %d.",n1,n2,n3,n4,n5);
}

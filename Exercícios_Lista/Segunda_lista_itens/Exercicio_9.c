//Escreva um aplicativo que insere um n�mero consistindo em cinco d�gitos do usu�rio, separa o
//n�mero em seus d�gitos individuais e imprime os d�gitos separados uns dos outros por tr�s
//espa�os cada. Por exemplo, se o usu�rio digitar o n�mero 42339, o programa deve imprimir:
//4 2 3 3 9.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int numero,n1,n2,n3,n4,n5;
	
	printf("Digite cinco n�meros:");
	scanf("%d",&numero);
	
	n1 = numero / 10000;
	n2 = (numero / 1000) % 10;
	n3 = (numero / 100) % 10;
	n4 = (numero / 10) % 10;
	n5 = numero % 10;
	
	printf("\n%d %d %d %d %d.",n1,n2,n3,n4,n5);
}

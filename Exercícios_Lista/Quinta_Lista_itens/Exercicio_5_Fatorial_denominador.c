#include <stdio.h>

int main(){
	
	int n, i=1;
	double fatorial=1.0, e=1.0;
	char continuar;
	
	do{
		printf("Digite um numero: ");
		scanf("%d", &n);
		
		i = 1;
		fatorial = 1.0;
		e = 1.0;
		
		while(i<=n){
			fatorial *= i;
			e += (1 / fatorial);
			i++;
		}
		
		//printf("\n%d", fatorial);
		printf("\n%.10f", e);
		
		printf("\nDeseja continuar [S/N]: ");
		scanf(" %c", &continuar);
		
	}while(continuar == 's' || continuar == 'S');
	
}

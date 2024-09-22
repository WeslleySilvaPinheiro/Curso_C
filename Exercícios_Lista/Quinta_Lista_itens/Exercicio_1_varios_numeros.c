#include <stdio.h>

int main(){
	
	int numero, quantidade=0, soma=0, media, maior_numero=0, menor_numero=10000, numero_par=0, media_par=0, numero_impar=0, soma_impar=0;
	float porcentagem_impar;
	
	while(1){
		printf("Digite um numero [0 para sair]: ");
		scanf("%d", &numero);
		
		if(numero == 0)
			break;
			
		if(numero < 0){
			printf("\nErro numero menor que 0.\n");
			continue;
		}
		
		if(numero > maior_numero)
			maior_numero = numero;
			
		if(numero < menor_numero)
			menor_numero = numero;
		
		if(numero % 2 == 0){
			numero_par+= numero;
			media_par++;
		}else{
			soma_impar+=numero;
			numero_impar++;
		}
		
		quantidade ++;
		soma+=numero;
		
		if(quantidade > 0)
			porcentagem_impar = (float)numero_impar / quantidade * 100;
		else
			porcentagem_impar = 0;
	}
	
	printf("\n\tO a soma dos numeros: %d", soma);
	printf("\n\tA quantidade de numeros digitados: %d", quantidade);
	printf("\n\tA media dos numeros digitados: %d", soma/quantidade);
	printf("\n\tO maior numero: %d", maior_numero);
	printf("\n\tO menor numero: %d", menor_numero);
	
	if(media_par > 0)
		printf("\n\tA media dos numeros pares: %d", numero_par/media_par);
	else
		printf("\n\tNenhum numero par foi digitao.");
		
	printf("\n\tA porcentagem dos numeros impares: %.2f", porcentagem_impar);
	
	return 0;
}

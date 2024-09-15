#include <stdio.h>

int main(){
	
	int origem, numero;
	float peso, peso_carga, valor_carga, imposto;
	
	printf("Digite o codigo do estado [1-5]:");
	scanf("%d", &origem);
	
	if(origem >= 1 && origem <=5){
		printf("\nDigite o peso da cargar em [toneladas]: ");
		scanf("%f", &peso);
		
		printf("\nO codigo da carga um numero entre [10 e 40]: ");
		scanf("%d", &numero);
		
		if(numero >= 10 && numero <= 40){
			peso_carga = peso * 1000;
			printf("\n\tO peso do caminhão em kg: %.2fKG",peso_carga);
			
			if(numero >= 10 && numero <= 20){
				valor_carga = 100 * peso_carga;
			}else if(numero >= 21 && numero <=30){
				valor_carga = 250 * peso_carga;
			}else if(numero >= 31 && numero <= 40){
				valor_carga = 340 * peso_carga;
			}
			printf("\n\tO valor da carga e de: R$%.2f", valor_carga);
			
			if(origem == 1){
				imposto = valor_carga * 0.35;
			}else if(origem ==2){
				imposto = valor_carga * 0.25;
			}else if(origem ==3){
				imposto = valor_carga * 0.15;
			}else if(origem ==4){
				imposto = valor_carga * 0.05;
			}else if(origem ==5){
				imposto = 0;
			}
			printf("\n\tO valor do imposto devido: R$%.2f", imposto);
			printf("\n\tO valor total da carga: R$%.2f", imposto + valor_carga);
		}else{
			printf("Erro numero invalido.");
		}
	}else{
		printf("Numero invalido.");
	}
}

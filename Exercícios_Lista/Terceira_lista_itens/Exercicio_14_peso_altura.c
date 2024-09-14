#include <stdio.h>

int main(){
	
	float altura;
	float peso;
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	
	printf("Digite o seu peso: ");
	scanf("%f", &peso);
	
	if(altura < 1.20 && peso < 60){
		printf("A");
	}else if(altura < 1.20 && peso >= 70 && peso <= 90){
		printf("D");
	}else if(altura < 1.20 && peso > 90){
		printf("G");
	}else{
		if(altura >= 1.20 && altura <=1.70 && peso < 60){
			printf("B");
		}else if((altura >= 1.20 && altura <=1.70) && peso >= 70 && peso <= 90){
			printf("E");
		}else if((altura >= 1.20 && altura <=1.70) &&  peso > 90){
			printf("F");
		}else{
			if(altura > 1.70 && peso < 60){
				printf("C");
			}else if(altura > 1.70 && peso >= 70 && peso <= 90){
				printf("F");
			}else if(altura > 1.70 && peso > 90){
				printf("I");
			}
		}
	}
}

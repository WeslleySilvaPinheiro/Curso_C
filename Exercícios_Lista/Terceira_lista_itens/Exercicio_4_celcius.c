#include <stdio.h>

int main(){
	
	float temperatura;
	
	printf("Digite a temperatura:");
	scanf("%f", &temperatura);
	
	if(temperatura < 10){
		printf("Muito frio.");
	}else{
		if(temperatura >=10 && temperatura <=20){
			printf("Frio.");
		}else{
			if(temperatura >=21 && temperatura <=30){
				printf("Agradavel.");
			}else{
				if(temperatura >=31 && temperatura <=40){
					printf("Quente");
				}else{
					if(temperatura >40){
						printf("Muito quente");
					}
				}
			}
		}
	}
}

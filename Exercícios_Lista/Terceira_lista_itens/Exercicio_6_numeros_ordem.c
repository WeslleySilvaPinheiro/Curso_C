#include <stdio.h>

int main(){
	
	int n1,n2,n3,n4;
	
	printf("Digite tres numeros em ordem[1,2,3]:");
	scanf("%d%d%d", &n1,&n2,&n3);
	
	if(n1 < n2 && n2 < n3){
		printf("\nDigite mais um numero aleatorio:");
		scanf("%d", &n4);
		
		if(n4 > n3){
			printf("A ordem decrescente: %d %d %d %d", n4,n3,n2,n1);
		}else{
			if(n4 > n2 && n3 > n4){
				printf("A ordem decrescente: %d %d %d %d", n3, n4, n2, n1);
			}else{
				if(n4 > n1 && n2 > n4){
					printf("A ordem decrescente: %d %d %d %d", n3,n2,n4,n1);
				}else{
					printf("A ordem decrescente: %d %d %d %d", n1,n2,n3,n4);
				}
			}
		}
	}else{
		if(n1 > n2 && n2 > n3){
			printf("Somente valores crescentes");
		}
	}
}

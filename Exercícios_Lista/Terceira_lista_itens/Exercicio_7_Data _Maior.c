#include <stdio.h>

int main(){
	
	int d1,d2,d3,p1,p2,p3;
	
	printf("Vamos comparar idades\n");
	printf("Digite o dia da primeira pessoa AA:");
	scanf("%d", &d1);
	
	printf("\nDigite o mes da primeira pessoa AA:");
	scanf("%d", &d2);
	
	printf("\nDigite o ano da primeira pessoa AAAA:");
	scanf("%d", &d3);
	
	printf("\nDigite o dia da segunda pessoa AA:");
	scanf("%d", &p1);
	
	printf("\nDigite o mes da segunda pessoa AA:");
	scanf("%d", &p2);
	
	printf("\nDigite o ano da segunda pessoa AAAA:");
	scanf("%d", &p3);
	
	printf("%d/%d/%d - %d/%d/%d\n", d1,d2,d3,p1,p2,p3);
	
	if(p3 > d3){
		printf("O maior e %d/%d/%d", p1,p2,p3);
	}else if(d3 > p3){
		printf("O maior e %d/%d/%d", d1,d2,d3);
	}else{
		if(p2 > d2){
			printf("O maior e %d/%d/%d", p1,p2,p3);
		}else if(d2 > p2){
			printf("O maior e %d/%d/%d",d1,d2,d3);
		}else{
			if(p1 > d2){
				printf("O maior e %d/%d/%d", p1,p2,p3);
			}else if(d2 > p1){
				printf("O maior e %d/%d/%d", d1,d2,d3);
			}else{
				printf("Ambos são iguais.");
			}
		}
	}
}

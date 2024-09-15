#include <stdio.h>

int main(){
	
	int i;
	float a,b,c, aux;
	
	printf("Digite 3 numeros A A A:");
	scanf("%f %f %f", &a,&b,&c);
	
	printf("\nDigite um numero entre 1 e 3:");
	scanf("%d", &i);
	
	if(a > c){
		aux = c;
		c = a;
		a = aux;
	}
	if(b > c){
		aux = c;
		c = b;
		b = aux;
	}
	if(a > b){
		aux = b;
		b = a;
		a = aux;
	}
	
	if(i >= 1 && i <=3){
		switch(i){
			case 1:
				printf("\nA ordem crescente: %.2f %.2f %.2f", a,b,c);
				break;
			case 2:
				printf("\nA ordem decrescente: %.2f %.2f %.2f", c,b,a);
				break;
			case 3:
				printf("\nO maior no meio: %.2f %.2f %.2f",a, c, b);
				break;
		}
	}
}

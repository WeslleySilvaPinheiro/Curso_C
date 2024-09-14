//8. Faça um programa que receba três números e mostre-os em ordem crescente.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float num1, num2, num3;
	
	printf("Digite o primeiro número:\n");
	scanf("%f", &num1);
	
	printf("Digite o segundo número:\n");
	scanf("%f", &num2);
	
	printf("Digite o terceiro número:\n");
	scanf("%f", &num3);
	
	if (num1 <= num2 && num2 <= num3) {
		
        printf("Ordem crescente: %f, %f, %f\n", num1, num2, num3);
    } else if (num1 <= num3 && num3 <= num2) { 
        printf("Ordem crescente: %f, %f, %f\n", num1, num3, num2);
    } else if (num2 <= num1 && num1 <= num3) { 
        printf("Ordem crescente: %f, %f, %f\n", num2, num1, num3);
    } else if (num2 <= num3 && num3 <= num1) {
        printf("Ordem crescente: %f, %f, %f\n", num2, num3, num1);
    } else if (num3 <= num1 && num1 <= num2) {
        printf("Ordem crescente: %f, %f, %f\n", num3, num1, num2);
    } else {
        printf("Ordem crescente: %f, %f, %f\n", num3, num2, num1);
    }      
}

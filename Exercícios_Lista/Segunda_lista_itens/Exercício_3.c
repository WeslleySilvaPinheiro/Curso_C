//3. Fac�a um programa que receba um nu�mero positivo e maior que zero, calcule e mostre:
//a. O nu�mero digitado ao quadrado.
//b. O nu�mero digitado ao cubo.
//c. A raiz quadrada do nu�mero digitado.
//d. A raiz cu�bica do nu�mero digitado

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float numero, porcent, calc, composto;
	
	printf("Digite um n�mero positivo maior que 0:\n");
	scanf("%f", &numero);
	
	if(numero > 0){
		printf("O n�mero %2.f� equivale: %.2f.\n",numero, numero*numero);
		printf("O n�mero %2.f� equivale: %.2f.\n",numero, numero*numero*numero);
		printf("A raiz quadrada do n�mero %2.f equivale: %.2f.\n",numero, sqrt(numero));
		printf("A raiz c�bica de %2.f equivale: %.2f.\n",numero, cbrt(numero));
	}else{
		printf("Erro, digite apenas n�meros maiores que 0.");
	}
	
}

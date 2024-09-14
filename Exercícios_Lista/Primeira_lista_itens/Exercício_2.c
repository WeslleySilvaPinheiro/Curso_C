// Exercício 2

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float a,b,c;
	float delta;
	float x1,x2;
	
	printf("Bem vindo(a)!\nDigite os coeficientes na ordem A B C:");
	scanf("%f %f %f", &a, &b,&c);
	
	delta = b*b - 4*a*c;
	
	x1 = (-b + sqrt(delta)) / (2*a);
	x2 = (-b - sqrt(delta)) / (2*a);
	
	printf("Dado a equação, x1 = %.2f e x2 = %.2f", x1,x2);

}
